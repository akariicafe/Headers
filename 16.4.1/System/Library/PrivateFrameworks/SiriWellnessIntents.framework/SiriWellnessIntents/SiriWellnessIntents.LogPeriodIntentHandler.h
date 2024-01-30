@class LogPeriodIntent, LogPeriodIntentResponse;

@interface SiriWellnessIntents.LogPeriodIntentHandler : NSObject <LogPeriodIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleLogPeriod:(LogPeriodIntent *)a0 completion:(void (^)(LogPeriodIntentResponse *))a1;

@end
