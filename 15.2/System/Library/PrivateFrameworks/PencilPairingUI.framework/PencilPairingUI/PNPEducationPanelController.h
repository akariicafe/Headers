@class NSTimer, PencilEducationViewController, NSLayoutConstraint;

@interface PNPEducationPanelController : PNPWelcomeController <PencilEducationViewControllerDelegate>

@property (retain, nonatomic) PencilEducationViewController *educationController;
@property (retain, nonatomic) NSTimer *watchdogTimer;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL didAdjustHeightForWidth;
@property (nonatomic) struct CGPoint { double x; double y; } forcedContentOffset;
@property (retain, nonatomic) NSLayoutConstraint *forcedHeightLayoutConstraint;

+ (id)_controllerWithType:(long long)a0 buttonType:(long long)a1 deviceType:(long long)a2 delegate:(id)a3;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)buttonPressed:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setUpForIsAnimating:(BOOL)a0;
- (void)scheduleWatchdogTimer;
- (void)cancelWatchdogTimer;
- (void)setIsAnimating:(BOOL)a0 animated:(BOOL)a1;
- (void)educationController:(id)a0 didChangeAnimationState:(BOOL)a1;
- (void)educationControllerDidChangePanel:(id)a0;
- (void)educationControllerWillReplay:(id)a0;

@end
