@interface SiriInformationSearch.AudioQueueStateManager : NSObject <SOMediaNowPlayingListening> {
    void /* unknown type, empty encoding */ updateAudioQueueStateCacheGroup;
    void /* unknown type, empty encoding */ queueStateObserver;
    void /* unknown type, empty encoding */ isObserverRegistered;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ nowPlayingInfoCache;
    void /* unknown type, empty encoding */ queueStateCache;
    void /* unknown type, empty encoding */ applicationBundleIdentifierCache;
}

- (void)nowPlayingObserver:(id)a0 playbackStateDidChangeFrom:(long long)a1 to:(long long)a2 lastPlayingDate:(id)a3;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
