@interface NewsUI2.AudioDataManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ dailyBriefingStore;
    void /* unknown type, empty encoding */ playlistStore;
    void /* unknown type, empty encoding */ recentlyPlayedStore;
    void /* unknown type, empty encoding */ suggestionsStore;
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ audioTabVisibilitySignal;
    void /* unknown type, empty encoding */ audioStateFactory;
    void /* unknown type, empty encoding */ completedListeningProcessor;
    void /* unknown type, empty encoding */ expirationTimer;
    void /* unknown type, empty encoding */ topOfFeedTrack;
    void /* unknown type, empty encoding */ dailyBriefingTrack;
    void /* unknown type, empty encoding */ upNextTracks;
    void /* unknown type, empty encoding */ suggestedTracks;
    void /* unknown type, empty encoding */ recentlyPlayedTracks;
    void /* unknown type, empty encoding */ ignoreStoreUpdates;
}

- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
