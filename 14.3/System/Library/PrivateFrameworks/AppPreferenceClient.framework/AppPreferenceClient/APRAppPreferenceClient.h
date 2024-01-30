@interface APRAppPreferenceClient : NSObject <APRAppPreferenceInterface>

+ (id)sharedInstance;

- (void)prewarmWithReply:(id /* block */)a0;
- (void)getAppPredictionsForIntent:(id)a0 candidateBundleIdentifiers:(id)a1 reply:(id /* block */)a2;
- (void)getAppPredictionsForIntent:(id)a0 candidateBundleIdentifiers:(id)a1 limit:(int)a2 reply:(id /* block */)a3;
- (void)sendFeedbackForIntent:(id)a0 aprResponse:(id)a1;
- (void)getAppPredictionsForIntent:(id)a0 reply:(id /* block */)a1;

@end
