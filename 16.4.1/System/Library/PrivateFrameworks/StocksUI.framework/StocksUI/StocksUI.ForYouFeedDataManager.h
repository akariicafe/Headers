@interface StocksUI.ForYouFeedDataManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ priceDataManager;
    void /* unknown type, empty encoding */ feedService;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ watchlistManager;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ lastRefreshDate;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
