@class AVPlayerViewController, NSString, NSArray, NSDictionary, NSNumber;
@protocol MFQueuePlayerItem;

@interface MFPlaybackStackControllerImplementation : NSObject <MFPlaybackStackController, MFQueueManagement> {
    void /* unknown type, empty encoding */ signpostSubscription;
    void /* unknown type, empty encoding */ internalStack;
}

@property (class, nonatomic, readonly) NSString *errorDomain;

@property (nonatomic) long long maximumPlayerQueueLength;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) long long currentState;
@property (nonatomic, readonly) long long interruptedState;
@property (nonatomic, readonly) long long currentItemTransition;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) float effectiveRate;
@property (nonatomic, readonly) float targetRate;
@property (nonatomic, readonly) NSNumber *targetTime;
@property (nonatomic, readonly) id<MFQueuePlayerItem> currentItem;
@property (nonatomic, readonly) NSArray *nextItems;
@property (nonatomic, readonly) id<MFQueuePlayerItem> currentQueueItem;
@property (nonatomic, readonly) AVPlayerViewController *videoViewController;
@property (nonatomic, readonly) NSDictionary *stateDictionary;
@property (nonatomic, readonly) NSString *modeDescription;
@property (nonatomic, readonly) BOOL isModeSolo;
@property (nonatomic, readonly) BOOL isModeShared;
@property (nonatomic, readonly) BOOL isModeManagedSession;

- (void)skipWithDirection:(long long)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)beginScanningWithDirection:(long long)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)pauseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setRelativeVolume:(float)a0;
- (void)setRate:(float)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)pauseForLeasePreventionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)endScanningWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)playWithRate:(float)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)reloadItemsKeepingCurrentItem:(BOOL)a0;
- (void)reset;
- (void)setupForManagedSessionWithAudioSession:(id)a0;
- (id)initWithPlayerID:(id)a0 queueController:(id)a1 assetLoader:(id)a2 errorController:(id)a3 externalPlaybackController:(id)a4 leaseController:(id)a5 defaults:(id)a6 queue:(id)a7;
- (void)jumpTo:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldSkipJumpToItemStart:(long long)a0;
- (void)pauseWithFadeOut:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)updateAudioSessionWithConfiguration:(id)a0;
- (void)activateAudioSessionWithCompletion:(id /* block */)a0;
- (void)setQueueWithInitialItem:(id)a0 andPlay:(BOOL)a1 identifier:(id)a2 completion:(id /* block */)a3;
- (void)setupForSolo;
- (void)setupForShared;
- (void)restoreQueue:(id /* block */)a0;
- (void)setSpatializationFormat:(long long)a0;
- (void)reloadCurrentItemWithReason:(long long)a0 completion:(id /* block */)a1;
- (void)clearPlaybackQueue;
- (void)beginSeekingWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)seekTo:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)endSeekingWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
