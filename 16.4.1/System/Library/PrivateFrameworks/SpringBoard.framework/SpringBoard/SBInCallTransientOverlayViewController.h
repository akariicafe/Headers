@class UIView, NSString, SBDeviceApplicationSceneHandle, SBIdleTimerCoordinatorHelper, _SBInCallProxySceneBackgroundView, SBInCallSettings, SBSUIInCallSceneClientSettingsDiffInspector, SBDeviceApplicationSceneViewController;
@protocol SBApplicationSceneBackgroundView, SBInCallTransientOverlayViewControllerDelegate;

@interface SBInCallTransientOverlayViewController : SBTransientOverlayViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBIdleTimerCoordinating, BSInvalidatable> {
    UIView<SBApplicationSceneBackgroundView> *_existingSceneBackgroundView;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    _SBInCallProxySceneBackgroundView *_proxySceneBackgroundView;
    SBDeviceApplicationSceneViewController *_sceneViewController;
    SBInCallSettings *_settings;
}

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (weak, nonatomic) id<SBInCallTransientOverlayViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleOverridesToSuppressTo:(unsigned long long)a1;
- (id)initWithSceneHandle:(id)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (id)associatedBundleIdentifiersToSuppressInSystemAperture;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleLockButtonPress;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (BOOL)handleVolumeDownButtonPress;
- (void)setIdleTimerCoordinator:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setContainerOrientation:(long long)a0;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)prefersStatusBarHidden;
- (BOOL)_canShowWhileLocked;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (long long)preferredWhitePointAdaptivityStyle;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (id)associatedSceneIdentifiersToSuppressInSystemAperture;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)supportsAlwaysOnDisplay;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canResignFirstResponder;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isContentOpaque;
- (int)serviceProcessIdentifier;
- (id)hostedSceneIdentityTokens;
- (BOOL)prefersEmbeddedDisplayPresentation;
- (unsigned long long)preferredStatusBarStyleOverridesToSuppress;
- (id)_inCallSceneClientSettingsDiffInspector;
- (BOOL)allowsStackingOverlayContentAbove;
- (void)handleGestureDismissal;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (long long)preferredLockedGestureDismissalStyle;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)preventsSystemApertureSuppressionFromBelow;
- (id /* block */)sceneDeactivationPredicate;
- (BOOL)shouldDisableBanners;
- (BOOL)shouldUseSceneBasedKeyboardFocus;

@end
