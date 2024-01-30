@class GetHealthQuantityIntentResponse, GetHealthQuantityIntent;

@interface SiriWellnessIntents.GetHealthQuantityIntentHandler : NSObject <GetHealthQuantityIntentHandling> {
    void /* unknown type, empty encoding */ storage;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleGetHealthQuantity:(GetHealthQuantityIntent *)a0 completion:(void (^)(GetHealthQuantityIntentResponse *))a1;

@end
