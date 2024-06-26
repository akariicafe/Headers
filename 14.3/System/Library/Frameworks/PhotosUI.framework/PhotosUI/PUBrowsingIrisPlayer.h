@class ISLivePhotoPlayer, ISWrappedAVPlayer, NSArray, NSString, PHLivePhoto, NSMutableSet, PUBrowsingIrisPlayerChange, PUMediaProvider;
@protocol PUDisplayAsset;

@interface PUBrowsingIrisPlayer : PUViewModel <ISChangeObserver, PXVideoScrubberControllerTarget> {
    struct { BOOL livePhoto; BOOL playerContent; BOOL playerLoadingTarget; BOOL playerItemScrubbingPhotoTime; BOOL playing; } _isValid;
    id _videoPeriodicObserver;
}

@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (readonly, nonatomic) NSMutableSet *livePhotoLoadingDisablingReasons;
@property (readonly, nonatomic) NSMutableSet *livePhotoPlaybackDisablingReasons;
@property (nonatomic) long long _currentUnloadRequestId;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (nonatomic, getter=isLivePhotoLoadingAllowed) BOOL livePhotoLoadingAllowed;
@property (nonatomic) long long livePhotoRequestState;
@property (nonatomic) int livePhotoRequestID;
@property (copy, nonatomic) NSArray *currentlyDisplayedTimes;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (copy, nonatomic) id /* block */ seekCompletionHandler;
@property (readonly, nonatomic) PUBrowsingIrisPlayerChange *currentChange;
@property (nonatomic) BOOL isLivePhotoPlaybackAllowed;
@property (nonatomic) BOOL appIsInBackground;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } vitalityTransform;
@property (retain, nonatomic) id<PUDisplayAsset> asset;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly, nonatomic) ISLivePhotoPlayer *player;
@property (nonatomic) long long loadingTarget;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } scrubbingPhotoTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentPhotoTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentVideoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ durationChangeHandler;
@property (copy, nonatomic) id /* block */ statusChangeHandler;
@property (copy, nonatomic) id /* block */ playerItemChangeHandler;

+ (id)new;

- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (id)init;
- (void)removeTimeObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didPerformChanges;
- (struct CGSize { double x0; double x1; })_targetSize;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)_needsUpdate;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1;
- (void)unloadLivePhoto;
- (void)_updateIfNeeded;
- (void)setLivePhotoLoadingDisabled:(BOOL)a0 forReason:(id)a1;
- (id)newViewModelChange;
- (void)_updateVitalityTransform;
- (long long)_contentMode;
- (float)playRate;
- (id)debugDetailedDescription;
- (long long)playerStatus;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })playerCurrentTime;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentItemDuration;
- (void)videoScrubberController:(id)a0 seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 completionHandler:(id /* block */)a4;
- (void)playPreviewHintWhenReady;
- (void)setLivePhotoPlaybackDisabled:(BOOL)a0 forReason:(id)a1;
- (void)setScrubbingPhotoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completion:(id /* block */)a1;
- (id)_playerCreateIfNeeded:(BOOL)a0;
- (id)playerCreateIfNeeded;
- (void)_handleLivePhotoResult:(id)a0 info:(id)a1 requestID:(int)a2;
- (void)_cancelAllRequests;
- (BOOL)isContentLoadingRequestInProgress;
- (void)_invalidateLivePhoto;
- (void)_updateLivePhotoIfNeeded;
- (void)_invalidatePlayerContent;
- (void)_invalidatePlaying;
- (void)_updatePlayerContentIfNeeded;
- (void)_handleLoadedVitalityTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 forAsset:(id)a1;
- (void)_invalidatePlayerItemLoadingTarget;
- (void)_updatePlayerItemLoadingTargetIfNeeded;
- (void)_invalidatePlayerItemScrubbingPhotoTime;
- (void)_updatePlayingIfNeeded;
- (void)_updatePlayerItemScrubbingPhotoTimeIfNeeded;
- (void)_handlePeriodicObserverWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_handlePlaybackStyleChanged;
- (id)playerItem;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)cancelPendingSeeks;

@end
