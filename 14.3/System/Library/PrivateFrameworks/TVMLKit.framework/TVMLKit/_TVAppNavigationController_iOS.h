@interface _TVAppNavigationController_iOS : _TVAppNavigationController

@property (nonatomic) BOOL shouldFakeStatusBarVisible;
@property (nonatomic) BOOL shouldPreventContentFromShiftingVertically;
@property (nonatomic) BOOL originalValueForNavigationBarForceFullHeightInLandscape;

- (long long)preferredStatusBarStyle;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)willPresentTraitsOverridingViewController;
- (void)didPresentTraitsOverridingViewController;

@end
