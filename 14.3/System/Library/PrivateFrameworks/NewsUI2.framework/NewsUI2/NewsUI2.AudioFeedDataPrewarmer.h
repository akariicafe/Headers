@interface NewsUI2.AudioFeedDataPrewarmer : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ session;
}

- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
