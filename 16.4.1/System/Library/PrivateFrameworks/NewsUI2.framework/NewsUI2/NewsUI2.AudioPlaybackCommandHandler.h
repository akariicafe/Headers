@interface NewsUI2.AudioPlaybackCommandHandler : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ playbackConductor;
    void /* unknown type, empty encoding */ audioPlaybackTracker;
    void /* unknown type, empty encoding */ playbackQueue;
    void /* unknown type, empty encoding */ resumeSlot;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ offlineManager;
    void /* unknown type, empty encoding */ offlineArticleManager;
    void /* unknown type, empty encoding */ offlineAlertControllerFactory;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ sceneProvider;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
