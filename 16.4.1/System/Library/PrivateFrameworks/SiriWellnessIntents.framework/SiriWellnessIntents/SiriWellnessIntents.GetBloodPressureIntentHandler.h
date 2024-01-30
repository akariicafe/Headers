@class GetBloodPressureIntent, GetBloodPressureIntentResponse;

@interface SiriWellnessIntents.GetBloodPressureIntentHandler : NSObject <GetBloodPressureIntentHandling> {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleGetBloodPressure:(GetBloodPressureIntent *)a0 completion:(void (^)(GetBloodPressureIntentResponse *))a1;

@end
