@interface NewsUI2.AlternateUniversalLinksDefaultSettingsManager : NSObject <FCBundleSubscriptionChangeObserver, FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
}

- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
