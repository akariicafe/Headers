@class UIView, SBUIController, _UILegibilitySettings, NSString, NSMapTable, SBFZStackParticipant, SBIconController, NSMutableSet, SBHIconManager, SBFloatingDockBehaviorAssertion, SBWindowSceneStatusBarSettingsAssertion;
@protocol BSInvalidatable;

@interface SBHomeScreenViewController : UIViewController <SBFloatingDockControllerObserver, SBFZStackParticipantDelegate> {
    NSMutableSet *_iconRotationPreventionReasons;
    BOOL _disableAnimationForNextIconRotation;
    SBWindowSceneStatusBarSettingsAssertion *_childOrPresentedStatusBarAssertion;
    UIView *_contentView;
    NSMapTable *_appIconForceTouchControllerOrientationUpdateDeferralAssertions;
    NSMapTable *_appIconForceTouchControllerWindowLevelAssertions;
}

@property (readonly, weak, nonatomic) SBUIController *UIController;
@property (readonly, weak, nonatomic) SBIconController *iconController;
@property (readonly, weak, nonatomic) SBHIconManager *iconManager;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *homeScreenFloatingDockAssertion;
@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *widgetEditFloatingDockAssertion;
@property (retain, nonatomic) id<BSInvalidatable> widgetEditViewControllerOrientationUpdateDeferralAssertion;
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant;
@property (nonatomic, getter=isIconControllerHidden) BOOL iconControllerHidden;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) BOOL homeScreenAutorotatesEvenWhenIconIsDragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_animateTransitionToSize:(struct CGSize { double x0; double x1; })a0 andInterfaceOrientation:(long long)a1 withTransitionContext:(id)a2;
- (BOOL)shouldAutorotate;
- (void)_dismissAllIconForceTouchControllersDidFire:(id)a0;
- (id)_homeScreenView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setLegibilitySettings:(id)a0;
- (void)_appIconForceTouchControllerWillPresentNotification:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)_autorotationPreventionReasons;
- (void)nudgeIconInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)_cleanupAfterTransitionToSize:(struct CGSize { double x0; double x1; })a0 fromInterfaceOrientation:(long long)a1 withTransitionContext:(id)a2;
- (id)initWithIconController:(id)a0 UIController:(id)a1;
- (void)_relinquishForceTouchWindowLevelAssertionForIconView:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)_widgetEditViewDidDisappearImplementation;
- (void)_relinquishForceTouchOrientationUpdateDeferralAssertionForIconView:(id)a0;
- (void)_iconEditingDidChange:(id)a0;
- (void)_widgetEditViewWillAppear:(id)a0;
- (void)floatingDockControllerDidRegister:(id)a0;
- (void)_acquireFloatingDockBehaviorAssertionIfNecessaryForFloatingDockController:(id)a0;
- (void)zStackParticipant:(id)a0 updatePreferences:(id)a1;
- (void)disableAnimationForNextIconRotation;
- (id)legibilitySettings;
- (void)dealloc;
- (void)zStackParticipantDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_prepareForTransitionToSize:(struct CGSize { double x0; double x1; })a0 andInterfaceOrientation:(long long)a1 withTransitionCoordinator:(id)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)_appIconForceTouchControllerDidDismissNotification:(id)a0;
- (void)_widgetEditViewDidDisappear:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_acquireForceTouchOrientationUpdateDeferralAssertionForIconView:(id)a0;
- (void).cxx_destruct;
- (void)_acquireForceTouchWindowLevelAssertionForIconView:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)setAllowIconRotation:(BOOL)a0 forReason:(id)a1;
- (void)viewWillAppear:(BOOL)a0;

@end
