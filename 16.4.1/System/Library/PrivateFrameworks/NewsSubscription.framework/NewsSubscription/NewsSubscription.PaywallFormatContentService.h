@interface NewsSubscription.PaywallFormatContentService : NSObject <FCNewsAppConfigurationObserving, FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ formatService;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ resourceService;
    void /* unknown type, empty encoding */ formatContentCache;
    void /* unknown type, empty encoding */ paywallConfig;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)configurationManagerPaywallConfigDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
