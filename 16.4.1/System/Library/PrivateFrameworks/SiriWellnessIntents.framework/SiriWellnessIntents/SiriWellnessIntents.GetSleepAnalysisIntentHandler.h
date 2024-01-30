@class GetSleepAnalysisIntentResponse, GetSleepAnalysisIntent;

@interface SiriWellnessIntents.GetSleepAnalysisIntentHandler : NSObject <GetSleepAnalysisIntentHandling> {
    void /* unknown type, empty encoding */ store;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleGetSleepAnalysis:(GetSleepAnalysisIntent *)a0 completion:(void (^)(GetSleepAnalysisIntentResponse *))a1;

@end
