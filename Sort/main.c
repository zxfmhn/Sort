//
//  main.c
//  Sort
//
//  Created by s20171106521 on 2018/9/29.
//  Copyright © 2018年 s20171106521. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // insert code here...
    int a[10],i,j,k;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
