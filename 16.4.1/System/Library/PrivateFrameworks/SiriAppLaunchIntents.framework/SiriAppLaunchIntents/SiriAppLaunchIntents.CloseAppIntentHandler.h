@class CloseAppIntent, CloseAppApplicationResolutionResult, CloseAppIntentResponse;

@interface SiriAppLaunchIntents.CloseAppIntentHandler : NSObject <CloseAppIntentHandling> {
    void /* unknown type, empty encoding */ aceHelper;
    void /* unknown type, empty encoding */ appsSearcher;
}

- (id)init;
- (void).cxx_destruct;
- (void)confirmCloseApp:(CloseAppIntent *)a0 completion:(void (^)(CloseAppIntentResponse *))a1;
- (void)handleCloseApp:(CloseAppIntent *)a0 completion:(void (^)(CloseAppIntentResponse *))a1;
- (void)resolveApplicationForCloseApp:(CloseAppIntent *)a0 withCompletion:(void (^)(CloseAppApplicationResolutionResult *))a1;

@end
