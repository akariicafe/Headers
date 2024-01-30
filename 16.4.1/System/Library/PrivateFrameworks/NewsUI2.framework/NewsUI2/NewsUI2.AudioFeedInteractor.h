@interface NewsUI2.AudioFeedInteractor : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ pipeline;
    void /* unknown type, empty encoding */ modifierFactory;
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ offlineManager;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ playbackState;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
