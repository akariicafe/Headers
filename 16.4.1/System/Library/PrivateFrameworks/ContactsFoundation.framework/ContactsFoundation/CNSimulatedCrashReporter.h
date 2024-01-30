@interface CNSimulatedCrashReporter : NSObject

+ (id)os_log;
+ (void)simulateCrashWithMessage:(id)a0;
+ (void)simulateCrashWithCode:(long long)a0 description:(id)a1;

@end
