@interface NewsUI2.SubscriberStatusConditionProvider : NSObject <FCBundleSubscriptionChangeObserver, FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ statusConditions;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
