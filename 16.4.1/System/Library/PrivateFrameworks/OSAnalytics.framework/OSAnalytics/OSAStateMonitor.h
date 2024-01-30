@interface OSAStateMonitor : NSObject

+ (void)evaluateState;
+ (void)postFailureWithReason:(id)a0;
+ (id)keyForEvent:(id)a0;
+ (void)checkCALogWrittenStatus;
+ (id)dateForEvent:(id)a0;
+ (void)recordEvent:(id)a0;
+ (void)checkSubmissionStatus;

@end
