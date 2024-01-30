@class GetAmbiguousDistanceIntentResponse, GetAmbiguousDistanceIntent;

@interface SiriWellnessIntents.GetAmbiguousDistanceIntentHandler : NSObject <GetAmbiguousDistanceIntentHandling> {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleGetAmbiguousDistance:(GetAmbiguousDistanceIntent *)a0 completion:(void (^)(GetAmbiguousDistanceIntentResponse *))a1;

@end
