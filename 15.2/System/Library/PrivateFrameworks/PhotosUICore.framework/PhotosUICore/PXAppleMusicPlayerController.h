@class NSString, MPMusicPlayerApplicationController, PXExpectation, NSObject;
@protocol OS_dispatch_queue;

@interface PXAppleMusicPlayerController : PXObservable <PXMutableAppleMusicPlayerController> {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queue_itemStoreID;
    NSString *_queue_currentClientIdentifier;
    MPMusicPlayerApplicationController *_queue_player;
    float _queue_volume;
    id /* block */ _queue_preparationCompletionHandler;
    PXExpectation *_queue_preparationExpectation;
    id _playbackStateChangeObserver;
    id _playbackDidEndObserver;
    long long _preparationSignpostID;
}

@property (class, readonly, nonatomic) PXAppleMusicPlayerController *sharedInstance;

@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) BOOL isAtEnd;
@property (readonly, nonatomic) double volume;
@property (copy) NSString *currentClientIdentifier;

+ (BOOL)canApplyWorkaroundFor80278485;

- (void)setPlaybackState:(long long)a0;
- (void)setVolume:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (id)_init;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)a0;
- (void)play;
- (void)dealloc;
- (void)setItemWithStoreID:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)clientIdentifier:(id)a0 performAsyncPlayerTransaction:(id /* block */)a1;
- (void)clientIdentifier:(id)a0 becomeCurrentClientIfNeeded:(BOOL)a1 performAsyncPlayerTransaction:(id /* block */)a2;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })fetchCurrentTime;
- (void)_queue_handlePreparationExpectationFulfilled:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_handleDidPrepareToPlayWithExpectation:(id)a0 error:(id)a1;
- (void)_queue_handleDidPrepareToPlayWithError:(id)a0;
- (void)_queue_setCurrentClientIdentifier:(id)a0;
- (void)_queue_callPreparationCompletionHandler:(BOOL)a0 error:(id)a1;
- (void)setIsAtEnd:(BOOL)a0;
- (void)_handlePlaybackStateDidChange;
- (void)_handleItemPlaybackDidEnd;

@end
