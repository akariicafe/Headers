@class UIView, UIColor, CAMCreativeCameraButton, CAMBottomBar, CAMFlipButton, CFXFeedbackController, NSLayoutConstraint, CUShutterButton, JFXOrientationMonitor;
@protocol CFXCameraControlsViewControllerDelegate;

@interface CFXCameraControlsViewController : UIViewController

@property (weak, nonatomic) UIView *effectButtonContainerPad;
@property (weak, nonatomic) UIView *shutterButtonContainerPad;
@property (weak, nonatomic) UIView *flipButtonContainerPad;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) UIView *bottomBlackView;
@property (retain, nonatomic) UIView *appStripBackgroundView;
@property (weak, nonatomic) UIView *appStripBackgroundContainerView;
@property (weak, nonatomic) NSLayoutConstraint *backgroundViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewWidthConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomBlackViewTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewBottomConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *appStripBackgroundContainerViewTrailingConstraint;
@property (retain, nonatomic) CFXFeedbackController *feedbackController;
@property (nonatomic) long long captureMode;
@property (retain, nonatomic) CAMBottomBar *bottomBar;
@property (retain, nonatomic) CUShutterButton *shutterButton;
@property (nonatomic) BOOL dockIsMagnified;
@property (nonatomic) double dockMagnifiedHeightDelta;
@property (retain, nonatomic) CAMCreativeCameraButton *effectButton;
@property (retain, nonatomic) CAMFlipButton *flipButton;
@property (retain, nonatomic) JFXOrientationMonitor *orientationMonitor;
@property (weak, nonatomic) id<CFXCameraControlsViewControllerDelegate> delegate;
@property (nonatomic) UIColor *backgroundColor;

- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateUIForDockMagnify:(BOOL)a0 dockHeightDelta:(double)a1;
- (id)initWithDelegate:(id)a0 captureMode:(long long)a1;
- (void)configureUIForOrientation;
- (void)setShutterButtonAlpha:(double)a0;
- (void)updateUIForVideoRecording:(BOOL)a0;
- (void)effectsButtonTapped:(id)a0;
- (void)shutterButtonTapped:(id)a0;
- (void)switchCameraButtonTapped:(id)a0;
- (double)CFX_smallPhoneDockHeightAdjustment;
- (void)setShutterButtonEnabled:(BOOL)a0;

@end
