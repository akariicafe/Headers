@interface RTSystemControl : NSObject

+ (id)valueForKey:(id)a0;
+ (unsigned long long)sysctlByName:(id)a0;
+ (id)valueForMib:(int *)a0 miblen:(int)a1;

@end
