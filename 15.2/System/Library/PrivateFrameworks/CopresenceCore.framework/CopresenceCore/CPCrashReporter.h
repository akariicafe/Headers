@interface CPCrashReporter : NSObject

+ (void)simulateCrashReportWithReason:(id)a0 pid:(int)a1 code:(unsigned int)a2;
+ (void)simulateCrashReportFromPID:(int)a0 withKillCode:(unsigned int)a1 usingReasonWithFormat:(id)a2;
+ (void)simulateCrashReportWithFormat:(id)a0;

@end
