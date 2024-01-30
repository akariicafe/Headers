@interface NewsUI2.TodayDataManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ feedManager;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ pluginManager;
    void /* unknown type, empty encoding */ pluginFactory;
    void /* unknown type, empty encoding */ sharedItemManager;
    void /* unknown type, empty encoding */ appConfigManager;
    void /* unknown type, empty encoding */ subscriptionList;
    void /* unknown type, empty encoding */ nativeAdService;
    void /* unknown type, empty encoding */ _lastRefreshContext;
    void /* unknown type, empty encoding */ sharedItemAdditions;
    void /* unknown type, empty encoding */ subscriptionService;
    void /* unknown type, empty encoding */ cachePreFlushTask;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
