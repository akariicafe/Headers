@interface NewsArticles.ANFDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding> {
    void /* unknown type, empty encoding */ observers;
}

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (long long)overrideBundleSubscriptionStatus:(long long)a0;
- (long long)overrideChannelSubscriptionStatus:(long long)a0;
- (unsigned long long)overrideNewsletterSubscriptionStatus:(unsigned long long)a0;
- (long long)overrideOfferUpsellScenario:(long long)a0;
- (long long)overrideSubscriptionActivationEligibility:(long long)a0;
- (unsigned long long)overrideViewingLocation:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
