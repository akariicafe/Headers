@interface AppStoreKitInternal.VideoPlayer : AVPlayer {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ videoUrl;
    void /* unknown type, empty encoding */ videoObserver;
    void /* unknown type, empty encoding */ playerItem;
    void /* unknown type, empty encoding */ failure;
    void /* unknown type, empty encoding */ failureCount;
    void /* unknown type, empty encoding */ playbackChecks;
    void /* unknown type, empty encoding */ shouldBePlaying;
    void /* unknown type, empty encoding */ shouldLoopPlayback;
    void /* unknown type, empty encoding */ lastPlaybackTimeGuard;
    void /* unknown type, empty encoding */ lastPlaybackTimeUnsynchronized;
    void /* unknown type, empty encoding */ delegate;
}

- (id)initWithURL:(id)a0;
- (void)pause;
- (void)dealloc;
- (id)init;
- (id)initWithPlayerItem:(id)a0;
- (void).cxx_destruct;
- (void)play;

@end
