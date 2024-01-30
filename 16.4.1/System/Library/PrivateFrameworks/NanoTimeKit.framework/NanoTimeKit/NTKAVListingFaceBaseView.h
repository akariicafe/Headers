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

@property (getter=isHandlingScreenWake) BOOL handlingScreenWake;
@property (retain, nonatomic) id<NTKAVListing> currentListing;
@property (nonatomic) BOOL shouldChangeVariantForScreenWake;
@property (getter=isContentUnloadedForFaceSwiping) BOOL contentUnloadedForFaceSwiping;
@property (readonly, nonatomic) BOOL paused;
@property (readonly, nonatomic) BOOL shouldPause;

- (void)_reset;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_cancelAllTasks;
- (void)_activatePauseLockout;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applySlow;
- (void)_cancelDelayedPlayback;
- (void)_cancelPauseLockout;
- (BOOL)_changeCurrentListing;
- (void)_cleanupAfterOrb:(BOOL)a0;
- (id)_complicationFlickerWorkgroundAnimationWithDuration:(double)a0 applier:(id /* block */)a1;
- (id)_curtainView;
- (BOOL)_curtainViewVisible;
- (void)_endScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_fadeFromCurtainViewWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)_fadeToCurtainViewWithDuration:(double)a0 completion:(id /* block */)a1;
- (void)_handleFaceStyleDidChange;
- (void)_handleOrdinaryScreenWake;
- (void)_handleScreenWake;
- (void)_handleWristRaiseScreenWake;
- (void)_hideCurtainView;
- (void)_loadSnapshotContentViews;
- (void)_loadVideoForListing;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (void)_pauseImmediately;
- (void)_performPreloadVideoTask;
- (void)_playNextVideo;
- (void)_playNextVideoAfterDelay:(double)a0;
- (void)_playQueuedUpVideo;
- (void)_playVideo;
- (void)_playVideoForScreenWake:(id)a0;
- (void)_prepareForEditing;
- (void)_prepareForOrb;
- (void)_queuePreloadVideoTask;
- (void)_resetVideoForListing;
- (void)_selectDefaultListing;
- (void)_showCurtainView;
- (void)_startScrubbingAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)_timeLabelUsesLegibility;
- (void)_transitionToPosterView:(id)a0;
- (void)_unloadSnapshotContentViews;
- (void)_unpauseFromSwitcher;
- (void)_updateImageToBlur;
- (void)_updatePaused;
- (void)faultInFaceContentSkippedDuringSwiping;
- (id)initWithFaceStyle:(long long)a0 forDevice:(id)a1 clientIdentifier:(id)a2;
- (void)screenDidTurnOffAnimated:(BOOL)a0;
- (void)screenWillTurnOnAnimated:(BOOL)a0;
- (void)setNormalComplicationDisplayWrapper:(id)a0 forSlot:(id)a1;

@end
