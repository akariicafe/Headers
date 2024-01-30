@class NSString, UITapGestureRecognizer, MPSwipableView, UIPinchGestureRecognizer, MPAVItem, MPWeakTimer, MPInlineVideoController, MPVolumeController, MPVideoPlaybackOverlayView, UIActivityIndicatorView;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {
    BOOL _disableTaps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPWeakTimer *_idleTimer;
    BOOL _isAnimatingOverlay;
    UIActivityIndicatorView *_loadingIndicator;
    MPVideoPlaybackOverlayView *_overlayView;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    BOOL _shouldForwardRotationEvents;
    MPSwipableView *_swipableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned long long _activeOverlayUserEvents;
    BOOL _statusBarWasHidden;
    MPVolumeController *_volumeController;
}

@property (weak, nonatomic) MPInlineVideoController *masterController;
@property (retain, nonatomic) MPAVItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (BOOL)prefersStatusBarHidden;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showAlternateTracks;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)overlayTappedBackButton:(id)a0;
- (BOOL)transportControls:(id)a0 tappedButtonPart:(unsigned long long)a1;
- (void)overlayTappedFullscreenButton:(id)a0;
- (void)overlay:(id)a0 didBeginUserEvent:(unsigned long long)a1;
- (void)overlay:(id)a0 didCancelUserEvent:(unsigned long long)a1;
- (void)overlay:(id)a0 didEndUserEvent:(unsigned long long)a1;
- (void)_viewWasTapped:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_hideOverlayAnimated:(BOOL)a0;
- (void)_hideOverlayDidEnd;
- (void)_viewWasPinched:(id)a0;
- (void)cancelOverlayIdleTimer;
- (void)hideLoadingIndicator;
- (void)prepareForTransitionFromFullscreen;
- (void)resetOverlayIdleTimer;
- (void)showLoadingIndicator;
- (void)showOverlayAnimated:(BOOL)a0;
- (void)updateOverlayView;
- (void)_overlayIdleTimerFired;
- (void)_showOverlayDidEnd;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)swipableViewHadActivity:(id)a0;

@end
