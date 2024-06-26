@class SBDeviceApplicationSceneStatusBarBreadcrumbProvider, NSString, NSData, _UIStatusBarData, NSDictionary, NSMutableSet, SBModalAlertPresenter, SBDeviceApplicationSceneStatusBarStateProvider;
@protocol SBIdleTimerCoordinating;

@interface SBDeviceApplicationSceneHandle : SBApplicationSceneHandle <FBApplicationProcessObserver, SBIdleTimerProviding> {
    SBModalAlertPresenter *_modalAlertPresenter;
    NSMutableSet *_statusBarForcedHiddenReasons;
    unsigned long long _keyboardLayerMaskStyle;
    long long _statusBarParts;
    NSDictionary *_alertSuppressionContextsBySectionIdentifier;
    SBDeviceApplicationSceneStatusBarStateProvider *_statusBarStateProvider;
}

@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) id<SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic) long long lastActivationSource;
@property (copy, nonatomic) NSString *lastActivationIconLeafIdentifier;
@property (nonatomic) BOOL hasMainSceneBeenForegroundAtLeastOnce;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (nonatomic) long long whitePointAdaptivityStyle;
@property (nonatomic) long long statusBarParts;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } statusBarAvoidanceFrame;
@property (readonly, nonatomic, getter=isEffectivelyForeground) BOOL effectivelyForeground;
@property (readonly, nonatomic, getter=isReachabilitySupported) BOOL reachabilitySupported;
@property (readonly, nonatomic, getter=isShowingModalAlert) BOOL showingModalAlert;
@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) long long wallpaperStyle;
@property (readonly, nonatomic, getter=isTranslucent) BOOL translucent;
@property (readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarBreadcrumbProvider *breadcrumbProvider;
@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarStateProvider *statusBarStateProvider;
@property (readonly, copy, nonatomic) _UIStatusBarData *overlayStatusBarData;
@property (readonly, copy, nonatomic) NSString *sceneTitle;
@property (readonly, copy, nonatomic) NSData *activationConditionsData;
@property (readonly, nonatomic) long long activationBias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)statusBarOrientation;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)a0;
- (id)newSceneViewController;
- (void)_modifyApplicationTransitionContext:(id)a0 fromRequestContext:(id)a1 entity:(id)a2;
- (void)_modifyApplicationSceneClientSettings:(id)a0 fromRequestContext:(id)a1 entity:(id)a2 initialSceneSettings:(id)a3;
- (void)_populateSettingsWithDefaultStatusBarHeight:(id)a0;
- (id)displayEdgeInfoForForLayoutEnvironment:(long long)a0 isInsetForHomeAffordance:(BOOL)a1;
- (void)_commonInit;
- (id)_sceneCornerRadiusConfigurationFromRequestContext:(id)a0 forEntity:(id)a1;
- (id)newSceneViewWithReferenceSize:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 hostRequester:(id)a2;
- (void)_modifyProcessExecutionContext:(id)a0 fromRequestContext:(id)a1 entity:(id)a2;
- (void)_modifyApplicationSceneSettings:(id)a0 fromRequestContext:(id)a1 entity:(id)a2;
- (long long)activationInterfaceOrientationForOrientation:(long long)a0;
- (double)statusBarAlpha;
- (int)effectiveStatusBarStyleOverrides;
- (BOOL)forbidsActivationByBreadcrumbAction;
- (void).cxx_destruct;
- (BOOL)_mainSceneSupportsInterfaceOrientation:(long long)a0;
- (id)mostRecentSceneSnapshotsForScale:(double)a0 launchingOrientation:(long long)a1;
- (void)removeObserver:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_updateIdleTimerForReason:(id)a0;
- (BOOL)isStatusBarForceHidden;
- (double)statusBarHeightForOrientation:(long long)a0;
- (void)addObserver:(id)a0;
- (id)_generateIdleTimerBehavior;
- (long long)defaultInterfaceOrientation;
- (id)additionalActionsForActivatingSceneEntity:(id)a0 withTransitionContext:(id)a1;
- (void)_didDestroyScene:(id)a0;
- (id)statusBarEffectiveStyleRequestWithStyle:(long long)a0;
- (void)_didCreateScene:(id)a0;
- (long long)currentStatusBarStyle;
- (BOOL)defaultStatusBarHiddenForOrientation:(long long)a0;
- (long long)currentInterfaceOrientation;
- (long long)activationInterfaceOrientationForCurrentOrientation;
- (id)_potentiallyJailedDisplayConfiguration;
- (void)setKeyboardContextMaskStyle:(unsigned long long)a0;
- (BOOL)isDeviceApplicationSceneHandle;
- (BOOL)wantsDeviceOrientationEventsEnabled;
- (id)_sceneDataStoreCreatingIfNecessary:(BOOL)a0;
- (void)_noteMainSceneBackgroundStyleChanged;
- (BOOL)prefersKillingInSwitcherDisabled;
- (void)_didUpdateSettingsWithDiff:(id)a0 previousSettings:(id)a1;
- (BOOL)isStatusBarForcedHiddenForOrientation:(long long)a0;
- (BOOL)isAutoHideEnabledForHomeAffordance;
- (void)_didUpdateClientSettingsWithDiff:(id)a0 transitionContext:(id)a1;
- (BOOL)isCurrentStatusBarHiddenForOrientation:(long long)a0;
- (unsigned long long)preferredHardwareButtonEventTypes;
- (void)_updateSceneHostingInfoForSnapshottingWithView:(id)a0;
- (void)_modifySafeAreaInsetsOnApplicationSceneSettings:(id)a0 isInsetForHomeAffordance:(BOOL)a1 isFloating:(BOOL)a2;
- (unsigned long long)_mainSceneSupportedInterfaceOrientations;
- (void)applicationProcessDidExit:(id)a0 withContext:(id)a1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)a0;
- (long long)_resumingInterfaceOrientationForOrientation:(long long)a0;
- (double)defaultStatusBarAlpha;
- (BOOL)shouldSuppressAlertForSuppressionContexts:(id)a0 sectionIdentifier:(id)a1;
- (long long)_launchingInterfaceOrientationForOrientation:(long long)a0;
- (BOOL)handleHardwareButtonEventType:(long long)a0;
- (BOOL)_overriddenStatusBarStyleForApp:(id)a0 style:(out long long *)a1;
- (BOOL)isStatusBarHiddenForActivation:(id)a0 forOrientation:(long long)a1;
- (BOOL)isEdgeProtectEnabledForHomeGesture;
- (void)setStatusBarForceHidden:(BOOL)a0 forReason:(id)a1 animationSettings:(id)a2;
- (long long)_initialMainSceneCompabilityMode:(id)a0;
- (void)_noteSceneTitleChanged;
- (BOOL)shouldPrioritizeForSwitcherOrdering;
- (long long)_statusBarStyleWithActivationSettings:(id)a0;
- (void)setAlertSuppressionContextsBySectionIdentifier:(id)a0;
- (void)_noteActivationConditionsChanged;
- (id)currentEffectiveStatusBarStyleRequest;
- (id)effectiveStatusBarStyleRequestForActivation:(id)a0;
- (void)saveSuspendSnapshot:(id)a0;
- (BOOL)prefersHeaderHiddenInSwitcher;
- (double)defaultStatusBarHeightForOrientation:(long long)a0;
- (id)_defaultStatusBarHeights;
- (long long)defaultStatusBarStyle;
- (BOOL)shouldAlwaysDisplayLiveContent;
- (BOOL)_currentClassicModeAllowsLaunchingToAnySupportedOrientation;

@end
