@class NSTimer, NTKTaskScheduler, UIView, NTKDelayedBlock;
@protocol NTKAVListing;

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView {
    BOOL _updateWhenUnpausing;
    NTKTaskScheduler *_taskScheduler;
    BOOL _preLoadingVideoOnSleep;
    BOOL _preLoadedVideoOnSleep;
    BOOL _shouldPlayOnWake;
    BOOL _isPauseLockedout;
    NSTimer *_playOnWakeTimeout;
    NTKDelayedBlock *_playNextVideoDelayBlock;
    NTKDelayedBlock *_pauseLockoutBlock;
    UIView *_blackView;
    long long _previousDataMode;
}

@property (retain, nonatomic) id<NTKAVListing> currentListing;
@property (nonatomic) BOOL shouldChangeVariantForScreenWake;
@property (nonatomic) BOOL contentUnloadedForFaceSwiping;
@property (readonly, nonatomic) BOOL paused;
@property (readonly, nonatomic) BOOL shouldPause;

- (void)_reset;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_curtainView;
- (void)_cancelAllTasks;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_prepareForEditing;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (void)_applyFrozen;
- (void)_unpauseFromSwitcher;
- (id)_nextListing;
- (void)_loadVideoForListing;
- (void)_resetVideoForListing;
- (void)_updateImageToBlur;
- (BOOL)_changeCurrentListing;
- (void)_performPreloadVideoTask;
- (void)_handleScreenWake;
- (void)_playVideoForScreenWake:(id)a0;
- (void)_showCurtainView;
- (void)_hideCurtainView;
- (void)_prepareForOrb;
- (void)_updatePaused;
- (void)_cleanupAfterOrb:(BOOL)a0;
- (void)setNormalComplicationDisplayWrapper:(id)a0 forSlot:(id)a1;
- (void)_cancelDelayedPlayback;
- (void)_cancelPauseLockout;
- (void)faultInFaceContentSkippedDuringSwiping;
- (void)_queuePreloadVideoTask;
- (id)_onDeckPosterImageView;
- (void)_selectDefaultListing;
- (void)_applySlow;
- (void)_pauseImmediately;
- (void)_playQueuedUpVideo;
- (void)_playNextVideo;
- (void)_playVideo;
- (void)_activatePauseLockout;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_transitionToPosterView:(id)a0;
- (void)_fadeToCurtainViewWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)_fadeFromCurtainViewWithDuration:(double)a0 completion:(id /* block */)a1;
- (BOOL)_curtainViewVisible;
- (BOOL)_needsVignette;
- (BOOL)_timeLabelUsesLegibility;
- (id)_complicationFlickerWorkgroundAnimationWithDuration:(double)a0 applier:(id /* block */)a1;
- (void)_playNextVideoAfterDelay:(double)a0;
- (void)_handleFaceStyleDidChange;

@end
