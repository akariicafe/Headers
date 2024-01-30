@interface NewsUI2.ArticleAudioPrewarmer : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ avAssetPrewarmer;
    void /* unknown type, empty encoding */ isBundleSubscribed;
}

- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
