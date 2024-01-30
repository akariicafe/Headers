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

- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)prefersStatusBarHidden;
- (BOOL)canResignFirstResponder;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (BOOL)handleLockButtonPress;
- (long long)preferredWhitePointAdaptivityStyle;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (void)setContainerOrientation:(long long)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (id)initWithSceneHandle:(id)a0;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleOverridesToSuppressTo:(int)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (int)serviceProcessIdentifier;
- (void)setIdleTimerCoordinator:(id)a0;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (BOOL)canBecomeFirstResponder;
- (id)succinctDescriptionBuilder;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)isContentOpaque;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)invalidate;
- (void)viewDidLoad;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)allowsStackingOverlayContentAbove;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)_inCallSceneClientSettingsDiffInspector;
- (void)handleGestureDismissal;
- (long long)preferredLockedGestureDismissalStyle;
- (int)preferredStatusBarStyleOverridesToCancel;
- (id)preferredDisplayLayoutElementIdentifier;
- (id /* block */)sceneDeactivationPredicate;
- (BOOL)shouldUseSceneBasedKeyboardFocus;

@end
