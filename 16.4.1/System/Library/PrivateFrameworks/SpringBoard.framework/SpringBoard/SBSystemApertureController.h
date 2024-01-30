@class UIWindow, SBSystemApertureCaptureVisibilityShimViewController, SBSystemAperturePresentableManager, SBSystemApertureStatusBarPillElementProvider, SBSystemApertureCurtainViewController, SBSystemApertureViewController, FBScene, SBSystemApertureSceneHoster, NSString, SBSystemApertureLayoutMonitorServer, SBSystemApertureSettings, SBSystemApertureDefaults, SBSystemAperturePortalSourceInfoRequestServer, SBFTraitsParticipant;

@interface SBSystemApertureController : NSObject <SBSystemApertureElementOrientationAuthority, SBFTraitsParticipantDelegate, SBSystemApertureProximityBacklightPolicyDelegate, SBSystemApertureViewControllerVisibilityDelegate, SBSystemApertureBacklightSessionAggregator, SBFBacklightEnvironmentSceneProviding, SBSystemApertureLayoutMonitorServerDelegate, PTSettingsKeyObserver, SBSystemApertureStatusBarStyleOverridesSuppressing, SBButtonEventsHandler, SAElementRegistering> {
    UIWindow *_auxillarySuperHighLevelWindow;
    UIWindow *_window;
    SBSystemApertureViewController *_systemApertureViewController;
    SBSystemApertureCaptureVisibilityShimViewController *_mainCloningShimViewController;
    SBSystemApertureCurtainViewController *_systemApertureCurtainViewController;
    SBSystemApertureCaptureVisibilityShimViewController *_curtainCloningShimViewController;
    SBSystemAperturePresentableManager *_systemAperturePresentableManager;
    SBSystemApertureStatusBarPillElementProvider *_legacyStatusBarPillElementProvider;
    SBSystemApertureSceneHoster *_sceneHoster;
    SBFTraitsParticipant *_traitsParticipant;
    SBSystemApertureLayoutMonitorServer *_systemApertureLayoutMonitorServer;
    SBSystemAperturePortalSourceInfoRequestServer *_systemAperturePortalSourceRequestServer;
    SBSystemApertureSettings *_settings;
    SBSystemApertureDefaults *_systemApertureDefaults;
    BOOL _containsAnyContent;
    FBScene *_highLevelWindowScene;
    FBScene *_superHighLevelWindowScene;
    BOOL _registeredBacklightSceneProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindowScene:(id)a0;
- (BOOL)handleHomeButtonLongPress;
- (id)scenesForBacklightSession;
- (BOOL)handleHomeButtonDoublePress;
- (BOOL)handleVolumeUpButtonPress;
- (BOOL)handleVoiceCommandButtonPress;
- (BOOL)handleHomeButtonPress;
- (BOOL)handleLockButtonPress;
- (BOOL)handleVolumeDownButtonPress;
- (BOOL)handleHeadsetButtonPress:(BOOL)a0;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (id)participantAssociatedWindows:(id)a0;
- (void).cxx_destruct;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;
- (id)stateDump;
- (BOOL)systemApertureProximityBacklightPolicyShouldDisableGracePeriod:(id)a0;
- (void)createSuperHighLevelCurtainWindowSceneWithDisplayConfiguration:(id)a0;
- (void)_applyOrientation:(long long)a0 withPreviousOrientation:(long long)a1 animationSettings:(id)a2;
- (void)_configureBacklightEnvironmentSceneProviderIfNecessary;
- (void)_configureLegacyStatusBarPillElementProviderIfNecessary;
- (void)_configureNoticeManagerIfNecessary;
- (id)_createHighLevelSystemApertureSceneWithIdentifier:(id)a0 sceneSpecificiation:(id)a1 displayConfiguration:(id)a2 atLevel:(float)a3;
- (void)_updateVisibilityForCloningAndSnapshots;
- (id)acquireActiveElementAssertionForApplication:(id)a0 reason:(id)a1;
- (id)acquireSuppressionAssertionForStatusBarStyleOverrides:(unsigned long long)a0 reason:(id)a1;
- (long long)activeElementInterfaceOrientationForSystemApertureElementOrientationObserver:(id)a0;
- (void)animateTransitionAcceptanceBounceWithVelocityVector:(struct CGPoint { double x0; double x1; })a0 triggeredBlock:(id /* block */)a1;
- (void)animateTransitionEjectionStretchWithVelocityVector:(struct CGPoint { double x0; double x1; })a0;
- (void)applyFailureRequirementsForCoverSheetPresentationGesture:(id)a0;
- (void)createHighLevelSystemApertureWindowWithWindowScene:(id)a0;
- (void)createHighLevelWindowSceneWithDisplayConfiguration:(id)a0;
- (void)createSuperHighLevelCurtainWithWindowScene:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultIslandFrameInCoordinateSpace:(id)a0;
- (void)hostedScenesDidChange;
- (BOOL)isTransitionTargetForSceneIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)performNegativeResponseAnimation;
- (id)registerElement:(id)a0;
- (id)requireHeavyShadowAssertionForTransition;
- (id)restrictSystemApertureToDefaultLayoutWithReason:(id)a0;
- (id)restrictSystemApertureToInertWithReason:(id)a0;
- (void)systemApertureProximityBacklightPolicy:(id)a0 embedProximityTouchTrackingView:(id)a1 touchBlockingView:(id)a2;
- (BOOL)systemApertureProximityBacklightPolicy:(id)a0 isSystemApertureElementVisibleAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)systemApertureProximityBacklightPolicy:(id)a0 removeProximityTouchTrackingView:(id)a1 touchBlockingView:(id)a2;
- (BOOL)systemApertureProximityBacklightPolicyShouldConsiderSystemApertureInert:(id)a0;
- (id)systemApertureRepresentationSuppressionAssertionForCoversheetVisibility;
- (void)systemApertureViewController:(id)a0 containsAnyContent:(BOOL)a1;

@end
