@interface BiometricSupportTools : NSObject

+ (void)analyticsOSLogNSDictionary:(id)a0 forEvent:(id)a1;
+ (void)analyticsOSLogNSDictionary:(id)a0 forEvent:(id)a1 toLogPath:(id)a2 withPrefix:(id)a3;
+ (id)dateFromNanoTime:(unsigned long long)a0 nanoseconds:(unsigned int *)a1;

@end
