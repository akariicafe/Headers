@interface SiriAppLaunchIntents.CloseAppIntentHandler : NSObject <CloseAppIntentHandling> {
    void /* unknown type, empty encoding */ aceHelper;
    void /* unknown type, empty encoding */ appsSearcher;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveApplicationForCloseApp:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmCloseApp:(id)a0 completion:(id /* block */)a1;
- (void)handleCloseApp:(id)a0 completion:(id /* block */)a1;

@end
