@class NSArray, AVQueuePlayer, AVWeakReference, AVPlayerInterstitialEvent, AVPlayer;

@interface AVPlayerInterstitialEventMonitor : NSObject {
    AVPlayer *_primaryPlayer;
    AVQueuePlayer *_interstitialPlayer;
    AVWeakReference *_weakReference;
    struct OpaqueFigPlayerInterstitialCoordinator { } *_observedCoord;
}

@property (readonly, weak, nonatomic) AVPlayer *primaryPlayer;
@property (readonly, nonatomic) AVQueuePlayer *interstitialPlayer;
@property (readonly, copy) NSArray *events;
@property (readonly) AVPlayerInterstitialEvent *currentEvent;

+ (id)interstitialEventMonitorWithPrimaryPlayer:(id)a0;

- (void)_removeMonitorListeners;
- (void)_addMonitorListeners:(struct OpaqueFigPlayerInterstitialCoordinator { } *)a0;
- (void)dealloc;
- (id)makeCopyOf:(id)a0 immutable:(BOOL)a1;
- (id)initWithPrimaryPlayer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
