@class UIViewController, TUCall;

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController <CNKFaceTimeInCallControlsDragControllerDelegate, CNKFaceTimeInCallControlsViewControllerDelegate, CFXEffectBrowserContentPresenterDelegate, AVCEffectsDelegate, CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate> {
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ mostActiveParticipantsController;
    void /* unknown type, empty encoding */ avcEffects;
    void /* unknown type, empty encoding */ effectsCaptureInfo;
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ hideInactiveParticipantsTimer;
    void /* unknown type, empty encoding */ effectsLayoutController;
    void /* unknown type, empty encoding */ pipZoomControl;
    void /* unknown type, empty encoding */ shouldShowZoomControls;
    void /* unknown type, empty encoding */ isPipped;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ inCallControlsDismissTimer;
@property (nonatomic, readonly) TUCall *call;
@property (nonatomic, readonly) BOOL wantsApplicationDismissalStyle;
@property (nonatomic) void /* unknown type, empty encoding */ deviceOrientation;
@property (nonatomic) void /* unknown type, empty encoding */ isOnScreen;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ effectsEnabled;
@property (nonatomic, readonly) UIViewController *pipViewController;

- (void)didCaptureVideoFrame:(id)a0;
- (void)serverDidTimeout:(id)a0;
- (void)didSelectApp:(id)a0;
- (void)inCallControlsViewController:(id)a0 didTap:(long long)a1;
- (void)didCreateTableViewForInCallControlsViewController:(id)a0;
- (void)resetEffectsState;
- (id)audioRouteMenuForInCallControlsViewController:(id)a0;
- (id)audioRouteGlyphForInCallControlsViewController:(id)a0 route:(id)a1 buttonStyle:(long long)a2;
- (long long)inCallControlsDragControllerShortestState:(id)a0;
- (void)inCallControlsDragController:(id)a0 willStartDragFrom:(long long)a1;
- (void)inCallControlsDragController:(id)a0 didStartDragTo:(long long)a1;
- (void)inCallControlsDragController:(id)a0 didEndDragAt:(long long)a1;
- (void)setControlsState:(long long)a0 animated:(BOOL)a1;
- (void)cameraViewController:(id)a0 didChangeEffectsState:(long long)a1;
- (void)cameraViewController:(id)a0 didRenderFrame:(id)a1;
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(id)a0;
- (void)cameraViewController:(id)a0 presentationRectWasPinchedWithState:(long long)a1 scale:(double)a2 velocity:(double)a3;
- (void)effectBrowserViewController:(id)a0 willChangeDockHeight:(double)a1;
- (BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)a0;
- (void)effectBrowserViewController:(id)a0 presentExpandedAppViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)effectBrowserViewController:(id)a0 dismissExpandedAppViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })expandedAppViewControllerSizeForEffectBrowserViewController:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithActiveCall:(id)a0;
- (void)restartAutoHideInCallControlsDrawerTimer;
- (id)initWithActiveCall:(id)a0 stagingAreaViewController:(id)a1;
- (void)toggleAudioMute;
- (void)toggleVideoMute;
- (void)muteVideo;
- (void)openMessagesConversation;
- (void)hideEffectsBrowser;
- (void)setControllerIsPipped:(BOOL)a0;
- (id)accessibilityConstraintController;

@end
