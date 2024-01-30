@interface NewsUI2.AudioFeedContentPrefetcher : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ feedConfigManager;
    void /* unknown type, empty encoding */ formatService;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ backgroundAppRefreshEnabled;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
