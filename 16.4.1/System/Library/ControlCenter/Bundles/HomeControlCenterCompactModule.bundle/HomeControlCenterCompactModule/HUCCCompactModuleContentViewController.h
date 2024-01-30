@class HUCCDashboardContainerViewController, NSString, UIView;
@protocol HUCCCompactModuleContentViewControllerDelegate, NSObject;

@interface HUCCCompactModuleContentViewController : CCUIButtonModuleViewController <HUCCDashboardContainerViewControllerDelegate, HUCCCompactModulePropertyAnimatorDelegate>

@property (retain, nonatomic) id<NSObject> activeAssertion;
@property (retain, nonatomic) UIView *expandedView;
@property (retain, nonatomic) HUCCDashboardContainerViewController *dashboardContainerViewController;
@property (weak, nonatomic) id<HUCCCompactModuleContentViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *transitionIconView;
@property (nonatomic) double transitionDeviceCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionCompressedAnimationStartFrame;
@property (nonatomic) BOOL accessAllowedForCurrentLockState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)preferredExpandedContentHeight;
- (double)preferredExpandedContinuousCornerRadius;
- (double)preferredExpandedContentWidth;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)displayWillTurnOff;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)customAnimator;
- (void)resetToInitialState;
- (void)requestDismissal;
- (void)quickControlsPresentationDidUpdate:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_expandedContentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconViewInHomeGridCellFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_iconViewInNavigationHeaderViewFrame;
- (void)_openHomeApp;
- (void)_setUpHomeControlService;
- (void)_tearDownHomeControlService;
- (struct CGSize { double x0; double x1; })preferredExpandedSize;
- (void)propertyAnimatorDidStartAnimating:(id)a0;
- (void)remoteDashboard:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)requestAuthenticationIfLockedWithCompletionHandler:(id /* block */)a0;

@end
