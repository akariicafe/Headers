@class NSString;

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {
    unsigned char _requestExitAfterHidingControls : 1;
    unsigned char _rotateAfterHidingControls : 1;
    unsigned char _showControlsAfterRotate : 1;
    unsigned char _autoHidingForItemChange : 1;
    unsigned char _scheduledAutoHide : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlayer:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)videoView_playbackStateChangedNotification:(id)a0;
- (void)videoView_bufferingStateChangedNotification:(id)a0;
- (void)displayVideoViewOnScreen;
- (void)setItem:(id)a0;
- (BOOL)canDisplayItem:(id)a0 withInterfaceOrientation:(long long)a1;
- (id)init;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)a0 parentViewController:(id)a1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)transportControls:(id)a0 heldButtonPart:(unsigned long long)a1;
- (BOOL)transportControls:(id)a0 releasedHeldButtonPart:(unsigned long long)a1;
- (BOOL)transportControls:(id)a0 tappedButtonPart:(unsigned long long)a1;
- (void)overlayDidBeginScrubbing:(id)a0;
- (void)overlayDidEndScrubbing:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)showOverlayAnimated:(BOOL)a0;
- (BOOL)inhibitOverlay;
- (void)showOverlayIfNecessary;
- (void)setInhibitOverlay:(BOOL)a0;
- (BOOL)forceScaleToFitInPortrait;
- (void)_resumedEventsOnlyNotification:(id)a0;
- (void)hideOverlayAnimated:(BOOL)a0;
- (void)transformVideoForInterfaceOrientation:(long long)a0 animate:(BOOL)a1;
- (void)cancelControlsOverlayAutohide;
- (void)scheduleControlsOverlayAutohideAfterDelay:(double)a0;
- (void)_autohideControlsOverlay;
- (void)_hideOverlayWithAnimation:(BOOL)a0;
- (void)_hideOverlayWithAnimation:(BOOL)a0 shouldUpdateAutohideFlag:(BOOL)a1;
- (long long)_validInterfaceOrientation;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)canHideOverlay:(BOOL)a0;
- (void)swipableView:(id)a0 tappedWithCount:(unsigned long long)a1 atLocation:(struct CGPoint { double x0; double x1; })a2;
- (void)swipableViewHadActivity:(id)a0;
- (void)setControlsOverlayVisible:(BOOL)a0 animate:(BOOL)a1 force:(BOOL)a2;
- (void)setDesiredParts:(unsigned long long)a0 animate:(BOOL)a1;
- (void)setVisibleParts:(unsigned long long)a0 animate:(BOOL)a1;
- (BOOL)canShowControlsOverlay;
- (void)setCanShowControlsOverlay:(BOOL)a0;
- (BOOL)controlsOverlayVisible;
- (void)setDisableControlsAutohide:(BOOL)a0;
- (void)setDisabledParts:(unsigned long long)a0;
- (void)setOrientation:(long long)a0 animate:(BOOL)a1;

@end
