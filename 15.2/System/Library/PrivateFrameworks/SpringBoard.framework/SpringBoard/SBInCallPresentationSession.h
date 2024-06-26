@class SBMainSwitcherViewController, SBMainWorkspace, NSUUID, SBUIController, NSMutableArray, NSString, SBBannerManager, SpringBoard, NSMutableSet, UIApplicationSceneDeactivationAssertion, NSMutableDictionary, SBInCallTransientOverlayViewController, SBLockScreenManager, UIApplicationSceneDeactivationManager, SBAppStatusBarSettingsAssertion, UIScreen, BSEventQueue, SBWorkspaceKeyboardFocusController, SBMainDisplaySceneManager, SBSUIInCallSceneClientSettingsDiffInspector, SBDeviceApplicationSceneHandle, SBPIPControllerCoordinator, SBBacklightController, SBLayoutElement, NSMapTable, SBSetupManager, SBInCallBannerPresentableViewController;
@protocol SBInCallPresentationSessionDelegate, BSInvalidatable;

@interface SBInCallPresentationSession : NSObject <SBApplicationSceneHandleUpdateContributing, SBBannerUnfurlSourceContextProviding, SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBInCallBannerPresentableViewControllerDelegate, SBInCallTransientOverlayViewControllerDelegate, SBSceneHandleActionConsuming, SBWorkspaceApplicationSceneTransitionContextDelegate, SBLayoutStateTransitionObserver, SBUIActiveOrientationObserver, FBSceneObserver, BSInvalidatable, SBApplicationHosting> {
    NSMutableSet *_activeSystemGestureDeactivationReasons;
    NSMutableSet *_activeSystemAnimationDeactivationReasons;
    NSMutableArray *_assertionAnalyticSources;
    SBBacklightController *_backlightController;
    SBInCallBannerPresentableViewController *_bannerPresentableViewController;
    SBBannerManager *_bannerManager;
    NSMutableArray *_deviceLockHandlingCompletionHandlers;
    id<BSInvalidatable> _ignoreSuspendedUnderLockAssertion;
    BOOL _isHandlingDeviceLock;
    BOOL _hasBegunHandlingPresentationRequest;
    BOOL _hasHandledInitialPresentationRequest;
    BOOL _hasReceivedFinalizeSceneDestructionRequest;
    BSEventQueue *_localEventQueue;
    SBLockScreenManager *_lockScreenManager;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    SBMainDisplaySceneManager *_sceneManager;
    UIScreen *_screen;
    SBInCallTransientOverlayViewController *_transientOverlayViewController;
    NSMapTable *_entityToSceneUpdateContext;
    NSMapTable *_entityToUnfurlSourceContext;
    SBMainWorkspace *_workspace;
    SBMainSwitcherViewController *_mainSwitcherViewController;
    SBSetupManager *_setupManager;
    SBPIPControllerCoordinator *_pipControllerCoordinator;
    SpringBoard *_springBoard;
    SBUIController *_uiController;
    NSMutableDictionary *_bannerDidDisappearHandlerByUUID;
    BOOL _isInvalidated;
    BOOL _isBannerPresentationActive;
    BOOL _isTransientOverlayPresentationActive;
    BOOL _hasAdoptedFullscreenOverlayAPI;
    BOOL _isPerformingSwitcherPresentation;
    BOOL _isHandlingTransientOverlayDismissalRequest;
    unsigned long long _presentationModeRevisionID;
    BOOL _isAttachedToWindowedAccessory;
    BOOL _isScreenSharingPresentation;
    id<BSInvalidatable> _suppressHomeIndicatorWhileAttachedToWindowedAccessoryAssertion;
    UIApplicationSceneDeactivationManager *_deactivationManager;
    UIApplicationSceneDeactivationAssertion *_systemAnimationSceneDeactivationAssertion;
    UIApplicationSceneDeactivationAssertion *_systemGestureSceneDeactivationAssertion;
    id<BSInvalidatable> _allowHiddenAppAssertion;
    SBAppStatusBarSettingsAssertion *_appStatusBarSettingsAssertion;
    SBLayoutElement *_preferredDismissalPrimaryElement;
    id<BSInvalidatable> _preventKeyboardFocusAssertion;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    NSUUID *_requestedPresentationConfigurationIdentifier;
    SBDeviceApplicationSceneHandle *_sceneHandleToObserveForShowSystemControlsAction;
    BOOL _observedSceneHandlePrefersHomeIndicatorAutoHidden;
    id<BSInvalidatable> _hideSharePlayContentFromClonedDisplayAssertion;
}

@property (weak, nonatomic) id<SBInCallPresentationSessionDelegate> delegate;
@property (nonatomic) double preferredBannerHeight;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) BOOL supportsHandlingDeviceLock;
@property (readonly, nonatomic) BOOL disallowsLockHardwareButtonDoublePress;
@property (nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings;
@property (readonly, nonatomic) BOOL isFullscreenCallInSwitcher;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredPIPDodgingInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (void)sceneWithIdentifier:(id)a0 didChangeStatusBarStyleOverridesToSuppressTo:(unsigned long long)a1;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (BOOL)canHostAnApp;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)previousLayoutStateForApplicationTransitionContext:(id)a0;
- (id)hostedAppSceneHandle;
- (void)sceneHandle:(id)a0 didCreateScene:(id)a1;
- (BOOL)supportsBecomingVisibleWhenUnlockingFromSource:(int)a0 wakingDisplay:(BOOL)a1;
- (BOOL)isHostingAnApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)a0;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void)_windowedAccessoryDidAttachOrDetach:(id)a0;
- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (id)succinctDescription;
- (void)conformsToSBApplicationHosting;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (id)hostedAppSceneHandles;
- (void).cxx_destruct;
- (void)sceneHandle:(id)a0 didDestroyScene:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationTransitionContext:(id)a0 frameForApplicationSceneEntity:(id)a1;
- (id)overrideAppSceneEntityForLaunchingApplication:(id)a0;
- (BOOL)handleAccessoryAttachWithCompletion:(id /* block */)a0;
- (id)initWithSceneHandle:(id)a0 screen:(id)a1 sceneManager:(id)a2 workspace:(id)a3 bannerManager:(id)a4 lockScreenManager:(id)a5 deactivationManager:(id)a6 mainSwitcherViewController:(id)a7 backlightController:(id)a8 keyboardFocusController:(id)a9 springBoard:(id)a10 setupManager:(id)a11 uiController:(id)a12 pipCoordinator:(id)a13;
- (id)_inCallSceneClientSettingsDiffInspector;
- (void)inCallBannerPresentableViewController:(id)a0 viewWillTransitionSizeWithAnimationSettings:(id)a1;
- (void)inCallBannerPresentableViewControllerDidAppear:(id)a0;
- (void)inCallBannerPresentableViewControllerWillAppear:(id)a0;
- (void)inCallBannerPresentableViewController:(id)a0 willDisappearWithReason:(id)a1;
- (void)inCallBannerPresentableViewController:(id)a0 didDisappearWithReason:(id)a1;
- (void)inCallBannerPresentableViewControllerUserInteractionWillBegin:(id)a0;
- (void)inCallBannerPresentableViewControllerUserInteractionDidEnd:(id)a0;
- (void)inCallBannerPresentableViewControllerCallConnectedStatusChanged:(id)a0;
- (void)inCallBannerPresentableViewControllerDidReceiveTap:(id)a0;
- (void)inCallBannerPresentableViewControllerDidCrossDefaultDraggingThreshold:(id)a0;
- (void)_uiLockStateDidChange:(id)a0;
- (void)_updateAppStatusBarSettingsAssertionForLayoutState:(id)a0;
- (void)_updatePIPInsetsForExpanseHUDForUnlockedEnvironmentMode:(long long)a0 shouldConsiderPrimary:(BOOL)a1;
- (long long)_currentPresentationModeForLayoutState:(id)a0;
- (BOOL)_systemControlsShouldPresentAsEmbeddedForLayoutState:(id)a0;
- (void)_performBannerToTransientOverlayPresentationTransitionAnimated:(BOOL)a0 analyticsSource:(id)a1 completion:(id /* block */)a2;
- (void)_performBannerToFullScreenPresentationTransitionAnimated:(BOOL)a0 analyticsSource:(id)a1 completion:(id /* block */)a2;
- (void)_addSystemAnimationDeactivationReason:(id)a0;
- (void)_removeSystemAnimationDeactivationReason:(id)a0;
- (void)_setBannerPresentationActive:(BOOL)a0;
- (BOOL)_shouldExcludeFromSwitcherWhenDismissed;
- (void)_performSceneUpdateTransactionWithContext:(id)a0;
- (void)_addSystemGestureDeactivationReason:(id)a0;
- (void)_removeSystemGestureDeactivationReason:(id)a0;
- (void)_setTransientOverlayPresentationActive:(BOOL)a0;
- (BOOL)_hasExistingSceneSettingsPresentationModeForLayoutState:(id)a0;
- (void)_performBlockUsingMainEventQueueWithReason:(id)a0 handler:(id /* block */)a1;
- (void)_performTransientOverlayDismissalTransitionAnimated:(BOOL)a0 shouldInsertIntoSwitcherModel:(BOOL)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (void)_updateKeyboardFocusPreventionAssertionWithLayoutState:(id)a0;
- (BOOL)_shouldConsiderScenePrimaryForLayoutState:(id)a0;
- (void)_updateSceneHandleToObserveForSendingShowNoticeForSystemControlsAction:(id)a0;
- (void)_updateVisibilityInSwitcherForPrefersHiddenWhenDismissedIfNeededForLayoutState:(id)a0;
- (BOOL)_isValidForSceneUpdates;
- (void)_performTransientOverlayPresentationTransitionAnimated:(BOOL)a0 analyticsSource:(id)a1 completion:(id /* block */)a2;
- (void)_sendShowNoticeForSystemControlsActionIfNeeded;
- (id)_clientSettingsIfExists;
- (void)_handleRequestInCallPresentationModeAction:(id)a0;
- (void)_performPresentationWithRequestedPresentationMode:(long long)a0 isUserInitiated:(BOOL)a1 animated:(BOOL)a2 analyticsSource:(id)a3 completion:(id /* block */)a4;
- (BOOL)_isInSwitcherModel;
- (BOOL)_isDismissedForLayoutState:(id)a0;
- (void)_insertIntoSwitcherAsDismissedWithAnalyticsSource:(id)a0 transitionValidator:(id /* block */)a1 completion:(id /* block */)a2;
- (unsigned long long)_incrementPresentationModeRevisionIDWithReason:(id)a0;
- (id)_acquireAssertionForAnalyticsSource:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentedBannerBounds;
- (BOOL)_allowsBannerPresentation;
- (void)dismissAnimated:(BOOL)a0 shouldFinalizeSceneDestruction:(BOOL)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (void)_performBannerPresentationTransitionWithAnalyticsSource:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldUseTransientOverlayForFullScreenPresentation;
- (void)_performSwitcherPresentationTransitionAnimated:(BOOL)a0 isUserInitiated:(BOOL)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (void)_updateSceneDeactivationAssertions;
- (void)_updateSystemControlsShouldPresentAsEmbedded;
- (void)_presentWithRequestedConfiguration:(id)a0 animated:(BOOL)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (BOOL)_allowsInitiallyDismissedPresentation;
- (void)_destroySceneEntityIfExists;
- (void)_dispatchBlockToMainEventQueueWithReason:(id)a0 block:(id /* block */)a1;
- (void)_performBannerDismissalTransitionAnimated:(BOOL)a0 analyticsSource:(id)a1 completion:(id /* block */)a2;
- (void)_performSwitcherDismissalTransitionAnimated:(BOOL)a0 shouldDestroyScene:(BOOL)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (BOOL)_sceneSupportsHandlingDeviceLock;
- (BOOL)_isCallConnectedForScene;
- (void)_notifySceneOfDeviceLockFromSource:(int)a0 completion:(id /* block */)a1;
- (BOOL)_isShowingFullScreenForLayoutState:(id)a0;
- (id)_createTransientOverlayViewController;
- (void)_configureTransitionRequest:(id)a0 forPresentingTransientOverlay:(id)a1 animated:(BOOL)a2;
- (BOOL)_isShowingInPIP;
- (void)_removeFromSwitcherForPrefersHiddenWhenDismissedWithValidator:(id /* block */)a0;
- (void)applicationSceneHandle:(id)a0 appendToSceneSettings:(id)a1 fromRequestContext:(id)a2 entity:(id)a3;
- (void)applicationSceneHandle:(id)a0 appendToTransitionContext:(id)a1 fromRequestContext:(id)a2 entity:(id)a3;
- (id)bannerUnfurlSourceContextForTransitionRequest:(id)a0;
- (void)inCallTransientOverlayViewController:(id)a0 willAppearAnimated:(BOOL)a1;
- (void)inCallTransientOverlayViewController:(id)a0 didAppearAnimated:(BOOL)a1;
- (void)inCallTransientOverlayViewController:(id)a0 willDisappearAnimated:(BOOL)a1;
- (void)inCallTransientOverlayViewController:(id)a0 didDisappearAnimated:(BOOL)a1;
- (void)inCallTransientOverlayViewControllerRequestsDismissal:(id)a0;
- (void)inCallTransientOverlayViewController:(id)a0 viewWillTransitionSizeWithAnimationSettings:(id)a1;
- (BOOL)sceneHandle:(id)a0 didReceiveAction:(id)a1;
- (void)ensureInclusionInSwitcherForRestoreFromPIPWithCompletion:(id /* block */)a0;
- (void)presentWithRequestedConfiguration:(id)a0 animated:(BOOL)a1 analyticsSource:(id)a2 completion:(id /* block */)a3;
- (void)dismissAndFinalizeSceneDestructionAnimated:(BOOL)a0 analyticsSource:(id)a1 completion:(id /* block */)a2;
- (BOOL)canBeRestored;
- (void)handleDeviceLockFromSource:(int)a0 completion:(id /* block */)a1;
- (void)_prepareForTransientOverlayPresentationTransactionWithAnimation:(BOOL)a0 analyticsSource:(id)a1 completion:(id /* block */)a2;

@end
