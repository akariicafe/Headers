@class NSString, MPCPlaybackEngine, NSMutableSet, AVPlayerLayer, MPAVItem, MPQueuePlayer;
@protocol MPAVQueueController;

@interface _MPCAVController : MPAVController <MPCPlaybackEngineImplementation>

@property (copy, nonatomic) NSString *firstPlaybackItemIdentifier;
@property (retain, nonatomic) NSMutableSet *failedItemsIdentifiers;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) long long actionAtQueueEnd;
@property (retain, nonatomic) id<MPAVQueueController> queueController;
@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, nonatomic) MPQueuePlayer *queuePlayer;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) float currentRate;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long stateBeforeInterruption;
@property (readonly, nonatomic) BOOL hasPlayedSuccessfully;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (readonly, nonatomic, getter=isReloadingPlaybackContext) BOOL reloadingPlaybackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefersApplicationAudioSession;

- (void)_setState:(long long)a0;
- (void)endPlayback;
- (void)queueController:(id)a0 didChangeActionAtQueueEnd:(long long)a1;
- (void)loadSessionWithQueueController:(id)a0 completionHandler:(id /* block */)a1;
- (void)playWithOptions:(unsigned long long)a0;
- (void)_updateStateForPlaybackPrevention;
- (void)togglePlaybackWithOptions:(unsigned long long)a0;
- (id)_expectedAssetTypesForPlaybackMode:(long long)a0;
- (void)_itemDidChange:(id)a0;
- (void)_itemPlaybackDidEndNotification:(id)a0;
- (void)_itemWillChange:(id)a0;
- (void)_configureAudioSession;
- (void)_connectAVPlayer;
- (void)_connectAVPlayerDeferringItemLoading:(BOOL)a0;
- (void)_streamBufferFull:(id)a0;
- (void)_streamLikelyToKeepUp:(id)a0;
- (void)_setQueueController:(id)a0 deferItemLoading:(BOOL)a1;
- (void)playbackHasStartedForItem:(id)a0;
- (void)handlePlaybackErrorWithUserInfo:(id)a0;
- (void)_enforcingPolicy:(BOOL)a0;
- (void)_queueDidEndWithReason:(id)a0 lastItem:(id)a1;
- (void)_itemDidSignificantlyChangeElapsedTime:(double)a0 rate:(float)a1;
- (void)updateAudioSession;
- (void)queueController:(id)a0 didChangeShuffleType:(long long)a1;
- (void)reloadWithPlaybackContext:(id)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_contentsChanged;
- (void)queueController:(id)a0 didIncrementVersionForSegment:(id)a1;
- (void).cxx_destruct;
- (id)initWithPlaybackEngine:(id)a0;
- (void)replaceCurrentItemWithPlaybackContext:(id)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)queueController:(id)a0 didChangeRepeatType:(long long)a1;
- (void)_playbackUserDefaultsEQPresetDidChangeNotification:(id)a0;
- (void)_networkPolicyItemCellularRestrictedNotification:(id)a0;

@end
