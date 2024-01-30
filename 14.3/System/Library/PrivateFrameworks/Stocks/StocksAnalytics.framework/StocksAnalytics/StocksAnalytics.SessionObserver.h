@interface StocksAnalytics.SessionObserver : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ watchlistService;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ userContext;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ window;
}

- (void)pushOrientationData;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (void)bundleSubscriptionDidSubscribe:(id)a0;

@end
