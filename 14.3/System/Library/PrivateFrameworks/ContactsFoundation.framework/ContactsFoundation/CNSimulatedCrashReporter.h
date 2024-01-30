@interface CNSimulatedCrashReporter : NSObject

+ (void)simulateCrashWithCode:(long long)a0 description:(id)a1;
+ (void)simulateCrashWithMessage:(id)a0;
+ (id)os_log;

@end
