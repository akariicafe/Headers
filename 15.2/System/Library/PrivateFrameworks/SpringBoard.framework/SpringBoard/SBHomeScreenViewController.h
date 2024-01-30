@class UIView, SBUIController, _UILegibilitySettings, SBAppStatusBarSettingsAssertion, SBIconController, NSMutableSet, SBHIconManager, SBFloatingDockBehaviorAssertion, NSMapTable;
@protocol BSInvalidatable;

@interface SBHomeScreenViewController : UIViewController {
    NSMutableSet *_iconRotationPreventionReasons;
    BOOL _disableAnimationForNextIconRotation;
    SBFloatingDockBehaviorAssertion *_homeScreenFloatingDockAssertion;
    SBAppStatusBarSettingsAssertion *_childOrPresentedStatusBarAssertion;
    UIView *_contentView;
    NSMapTable *_appIconForceTouchControllerOrientationUpdateDeferralAssertions;
    NSMapTable *_appIconForceTouchControllerWindowLevelAssertions;
}

@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *widgetEditFloatingDockAssertion;
@property (retain, nonatomic) id<BSInvalidatable> widgetEditViewControllerOrientationUpdateDeferralAssertion;
@property (nonatomic, getter=isIconControllerHidden) BOOL iconControllerHidden;
@property (readonly, weak, nonatomic) SBIconController *iconController;
@property (readonly, weak, nonatomic) SBHIconManager *iconManager;
@property (readonly, weak, nonatomic) SBUIController *UIController;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging;

- (void)_dismissAllIconForceTouchControllersDidFire:(id)a0;
- (id)iconManager;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)_animateTransitionToSize:(struct CGSize { double x0; double x1; })a0 andInterfaceOrientation:(long long)a1 withTransitionContext:(id)a2;
- (void)setAllowIconRotation:(BOOL)a0 forReason:(id)a1;
- (void)nudgeIconInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)_widgetEditViewWillAppear:(id)a0;
- (void)_acquireForceTouchOrientationUpdateDeferralAssertionForIconView:(id)a0;
- (id)_autorotationPreventionReasons;
- (void)_acquireForceTouchWindowLevelAssertionForIconView:(id)a0;
- (void)_widgetEditViewDidDisappearImplementation;
- (void)loadView;
- (void)_relinquishForceTouchOrientationUpdateDeferralAssertionForIconView:(id)a0;
- (void)_appIconForceTouchControllerWillPresentNotification:(id)a0;
- (void)_cleanupAfterTransitionToSize:(struct CGSize { double x0; double x1; })a0 fromInterfaceOrientation:(long long)a1 withTransitionContext:(id)a2;
- (void)setLegibilitySettings:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_widgetEditViewDidDisappear:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithCoder:(id)a0;
- (id)initWithIconController:(id)a0 UIController:(id)a1;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)a0;
- (id)legibilitySettings;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(BOOL)a0;
- (void)_relinquishForceTouchWindowLevelAssertionForIconView:(id)a0;
- (id)homeScreenView;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_prepareForTransitionToSize:(struct CGSize { double x0; double x1; })a0 andInterfaceOrientation:(long long)a1 withTransitionCoordinator:(id)a2;
- (void)disableAnimationForNextIconRotation;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
