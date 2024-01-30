@interface CNKStagingAreaViewController : UIViewController <CFXEffectBrowserContentPresenterDelegate, AVCEffectsDelegate, CNKFaceTimeInCallControlsViewControllerDelegate, CNKFaceTimeInCallControlsDragControllerDelegate, CNKFaceTimeCameraViewControllerDelegate, CFXCameraViewControllerDelegate> {
    void /* unknown type, empty encoding */ participantLabel;
    void /* unknown type, empty encoding */ secondaryParticipantLabel;
    void /* unknown type, empty encoding */ localPreviewFrontView;
    void /* unknown type, empty encoding */ localPreviewBackView;
    void /* unknown type, empty encoding */ audioVisualizationView;
    void /* unknown type, empty encoding */ controlsViewController;
    void /* unknown type, empty encoding */ constraintController;
    void /* unknown type, empty encoding */ controlsDragController;
    void /* unknown type, empty encoding */ avcEffects;
    void /* unknown type, empty encoding */ effectsCaptureInfo;
    void /* unknown type, empty encoding */ effectsViewController;
    void /* unknown type, empty encoding */ effectsBrowserViewController;
    void /* unknown type, empty encoding */ effectsLayoutController;
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ videoDeviceController;
    void /* unknown type, empty encoding */ numberFormatter;
    void /* unknown type, empty encoding */ scheduledUpdateTimer;
    void /* unknown type, empty encoding */ isWaitingToConnect;
}

@property (nonatomic) void /* unknown type, empty encoding */ effectsEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ hasJoined;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ stagingAreaDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ call;
@property (nonatomic) void /* unknown type, empty encoding */ deviceOrientation;
@property (nonatomic) void /* unknown type, empty encoding */ isOnScreen;

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
- (void)cameraViewController:(id)a0 didChangeEffectsState:(long long)a1;
- (void)cameraViewController:(id)a0 didRenderFrame:(id)a1;
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(id)a0;
- (void)effectBrowserViewController:(id)a0 willChangeDockHeight:(double)a1;
- (BOOL)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)a0;
- (void)effectBrowserViewController:(id)a0 presentExpandedAppViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void)effectBrowserViewController:(id)a0 dismissExpandedAppViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (struct CGSize { double x0; double x1; })expandedAppViewControllerSizeForEffectBrowserViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithActiveCall:(id)a0;
- (void)toggleVideoMute;
- (void)muteVideo;
- (void)hideEffectsBrowser;
- (id)initWithActiveCall:(id)a0 hasJoined:(BOOL)a1;
- (void)didTapJoinButton;
- (void)didTapLeaveButton;
- (void)didTapSwapLocalParticipantCamera;

@end
