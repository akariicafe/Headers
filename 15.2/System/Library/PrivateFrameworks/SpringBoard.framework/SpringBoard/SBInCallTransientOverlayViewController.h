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

- (long long)preferredWhitePointAdaptivityStyle;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleTo:(long long)a1;
- (BOOL)prefersStatusBarHidden;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleOverridesToSuppressTo:(unsigned long long)a1;
- (id)initWithSceneHandle:(id)a0;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarHiddenTo:(BOOL)a1 withAnimation:(long long)a2;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarAlphaTo:(double)a1;
- (long long)preferredStatusBarStyle;
- (void)setContainerOrientation:(long long)a0;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (void)viewDidLoad;
- (BOOL)canResignFirstResponder;
- (void)viewWillAppear:(BOOL)a0;
- (id)idleTimerProvider:(id)a0 didProposeBehavior:(id)a1 forReason:(id)a2;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)handleLockButtonPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)_canShowWhileLocked;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (BOOL)handleVolumeDownButtonPress;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)handleVolumeUpButtonPress;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canBecomeFirstResponder;
- (id)succinctDescriptionBuilder;
- (BOOL)isContentOpaque;
- (void)invalidate;
- (int)serviceProcessIdentifier;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setIdleTimerCoordinator:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)preferredUnlockedGestureDismissalStyle;
- (BOOL)allowsStackingOverlayContentAbove;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)_inCallSceneClientSettingsDiffInspector;
- (void)handleGestureDismissal;
- (long long)preferredLockedGestureDismissalStyle;
- (unsigned long long)preferredStatusBarStyleOverridesToCancel;
- (id)preferredDisplayLayoutElementIdentifier;
- (id /* block */)sceneDeactivationPredicate;
- (BOOL)shouldUseSceneBasedKeyboardFocus;

@end
