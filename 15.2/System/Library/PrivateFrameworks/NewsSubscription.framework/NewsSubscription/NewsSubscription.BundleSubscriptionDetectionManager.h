@interface NewsSubscription.BundleSubscriptionDetectionManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ postPurchaseOnboardingManager;
    void /* unknown type, empty encoding */ bootstrapperDidComplete;
    void /* unknown type, empty encoding */ router;
}

- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0 hideBundleDetectionUI:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
