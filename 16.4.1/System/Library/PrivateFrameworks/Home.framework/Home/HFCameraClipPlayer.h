@class NSError, NSString, HFCameraClipPlayerItem, NSArray, HMCameraProfile, AVQueuePlayer, HFCameraClipPosition, HFCameraClipQueuePlayer;
@protocol HFCameraClipPlayerDelegate, HFCameraClipScrubbing;

@interface HFCameraClipPlayer : NSObject <HFCameraClipQueueing, HFCameraClipPlaying>

@property (nonatomic, getter=isMutatingQueue) BOOL mutatingQueue;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) HFCameraClipPlayerItem *lastPlayerItem;
@property (readonly, nonatomic) HFCameraClipQueuePlayer *queuePlayer;
@property (readonly, nonatomic) AVQueuePlayer *player;
@property (nonatomic) BOOL shouldBypassScrubbing;
@property (readonly, nonatomic) NSArray *queuableItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSArray *clips;
@property (weak, nonatomic) id<HFCameraClipPlayerDelegate> delegate;
@property (weak, nonatomic) id<HFCameraClipScrubbing> scrubber;
@property (copy, nonatomic) HFCameraClipPosition *currentPosition;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) long long timeControlStatus;
@property (readonly, nonatomic) BOOL hasFatalError;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing;

- (void)pause;
- (double)currentTime;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)play;
- (void)removeTimeObserver:(id)a0;
- (id)addPeriodicTimeObserverForInterval:(double)a0 usingBlock:(id /* block */)a1;
- (void)playerItemDidPlayToEndTime:(id)a0;
- (void)_rebuildPlayerQueueForPosition:(id)a0;
- (void)_setupObservationForLastPlayerItem:(id)a0;
- (void)_setupPlayerObservation;
- (void)_updateErrorState;
- (void)_updatePlayerActionAtItemEnd;
- (id)createQueueableItemForClipManager:(id)a0 clip:(id)a1;
- (void)endScrubbingWithOffset:(double)a0;
- (id)initWithCameraProfile:(id)a0 clips:(id)a1;
- (id)initWithCameraProfile:(id)a0 clips:(id)a1 queuePlayer:(id)a2;
- (void)insertQueueableItem:(id)a0 afterItem:(id)a1;
- (void)removeQueueableItem:(id)a0;
- (void)seekToOffset:(double)a0 inItem:(id)a1;

@end
