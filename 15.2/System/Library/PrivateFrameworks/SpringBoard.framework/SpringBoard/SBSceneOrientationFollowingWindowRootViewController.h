@class SBIsolatedSceneOrientationFollowingWrapperViewController, UIView;

@interface SBSceneOrientationFollowingWindowRootViewController : UIViewController

@property (weak, nonatomic) SBIsolatedSceneOrientationFollowingWrapperViewController *hostingViewController;
@property (retain, nonatomic) UIView *overlayContentView;

- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)initWithHostingViewController:(id)a0;

@end
