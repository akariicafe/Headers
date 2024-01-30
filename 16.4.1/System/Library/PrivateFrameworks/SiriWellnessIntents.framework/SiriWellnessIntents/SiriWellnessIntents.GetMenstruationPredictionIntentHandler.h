@class GetMenstruationPredictionIntent, GetMenstruationPredictionIntentResponse;

@interface SiriWellnessIntents.GetMenstruationPredictionIntentHandler : NSObject <GetMenstruationPredictionIntentHandling> {
    void /* unknown type, empty encoding */ store;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleGetMenstruationPrediction:(GetMenstruationPredictionIntent *)a0 completion:(void (^)(GetMenstruationPredictionIntentResponse *))a1;

@end
