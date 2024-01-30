@class AVPlayerViewController, NSString, NSArray, NSDictionary, NSNumber;
@protocol MFQueuePlayerItem;

@interface MFPlaybackStackControllerImplementation : NSObject <MFPlaybackStackController, MFQueueManagement> {
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

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)reloadItemsKeepingCurrentItem:(BOOL)a0;
- (void)restoreQueue:(id /* block */)a0;
- (void)setQueueWithInitialItem:(id)a0 andPlay:(BOOL)a1 identifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)setAudioSessionActive:(BOOL)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (void)skipWithDirection:(long long)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)jumpTo:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)pauseWithFadeOut:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)playWithRate:(float)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)pauseWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldSkipJumpToItemStart:(long long)a0;
- (void)beginScanningWithDirection:(long long)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)endScanningWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setRate:(float)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithQueueController:(id)a0 assetLoader:(id)a1 errorController:(id)a2 externalPlaybackController:(id)a3 leaseController:(id)a4 queue:(id)a5;
- (void)updateAudioSessionWithConfiguration:(id)a0;
- (void)clearPlaybackQueue;
- (void)beginSeekingWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)seekTo:(double)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)endSeekingWithIdentifier:(id)a0 completion:(id /* block */)a1;

@end
