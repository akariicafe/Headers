@class BKSAccelerometer, SBMedusa1oSettings, SBTraitsCoverSheetFollowsSecureAppOrientationPolicySpecifier, SBOrientationLockManager, NSString, BSContinuousMachTimer, SBTraitsHomeInIsolationPolicySpecifier, SBTraitsInputsOrientationLockValidator, SBTraitsHomeFollowsSwitcherRawPolicySpecifier, SBTraitsDockFollowsHomePolicySpecifier, SBTraitsCoverSheetInIsolationPolicySpecifier, SBFTraitsArbitrationInputs, SBTraitsControlCenterInIsolationPolicySpecifier, SBTraitsEmbeddedDisplayRolesAndDefaultPoliciesProvider, SBFTraitsArbitrationKeyboardInputs, SBFTraitsArbitrationInterfaceIdiomInputs, SBFTraitsParticipant, SBDeviceOrientationUpdateDeferralAssertion, SBFTraitsArbitrationDeviceOrientationInputs, SBTraitsInputsOrientationNonFlatOverrideValidator, SBDeviceOrientationUpdateManager, SBTraitsCoverSheetFollowsDeviceOrientationPolicySpecifier;

@interface SBTraitsEmbeddedDisplayPipelineManager : SBTraitsPipelineManager <SBFTraitsArbiterInputsDataSource, BKSAccelerometerDelegate, SBBacklightControllerObserver, SBLayoutStateTransitionObserver, SBFTraitsParticipantDelegate, SBFTraitsArbiterObserver> {
    BKSAccelerometer *_accelerometer;
    long long _lastNonFlatOrientation;
    BSContinuousMachTimer *_uiLockedTimer;
    double _backlightFactor;
    SBFTraitsArbitrationInputs *_inputs;
    SBFTraitsArbitrationKeyboardInputs *_keyboardInputs;
    SBFTraitsArbitrationInterfaceIdiomInputs *_deviceIdiomInputs;
    SBFTraitsArbitrationDeviceOrientationInputs *_orientationInputs;
    SBTraitsInputsOrientationLockValidator *_orientationLockInputsValidator;
    SBTraitsInputsOrientationNonFlatOverrideValidator *_lastNonFlatOverrideInputsValidator;
    SBOrientationLockManager *_userOrientationLockManager;
    SBDeviceOrientationUpdateManager *_systemOrientationLockManager;
    SBDeviceOrientationUpdateDeferralAssertion *_deviceUpdateDeferralAssertion;
    SBMedusa1oSettings *_medusaSettings;
    SBTraitsEmbeddedDisplayRolesAndDefaultPoliciesProvider *_rolesAndDefaultPoliciesProvider;
    SBTraitsHomeFollowsSwitcherRawPolicySpecifier *_homeFollowsSwitcherSpecifier;
    SBTraitsHomeInIsolationPolicySpecifier *_homeIsolationSpecifier;
    SBTraitsDockFollowsHomePolicySpecifier *_dockFollowsHomeSpecifier;
    SBTraitsControlCenterInIsolationPolicySpecifier *_controlCenterIsolationSpecifier;
    BOOL _isCoversheetPresented;
    SBTraitsCoverSheetInIsolationPolicySpecifier *_coverSheetIsolationSpecifier;
    SBTraitsCoverSheetFollowsDeviceOrientationPolicySpecifier *_coverSheetFollowsDeviceOrientationSpecifier;
    SBTraitsCoverSheetFollowsSecureAppOrientationPolicySpecifier *_coverSheetFollowsSecureAppOrientationSpecifier;
    SBFTraitsParticipant *_activeOrientationParticipant;
    unsigned long long _arbiterRunningUpdatesCount;
}

@property (readonly, nonatomic) SBFTraitsArbitrationInputs *inputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accelerometer:(id)a0 didAccelerateWithTimeStamp:(double)a1 x:(float)a2 y:(float)a3 z:(float)a4 eventType:(int)a5;
- (void)_controlCenterWillDismiss:(id)a0;
- (void)accelerometer:(id)a0 didChangeDeviceOrientation:(long long)a1;
- (id)defaultOrientationAnimationSettingsAnimatable:(BOOL)a0;
- (void)_addLastNonFlatOverrideInputsValidatorIfNeeded;
- (id)_layoutCoordinator;
- (void)backlightController:(id)a0 willAnimateBacklightToFactor:(float)a1 source:(long long)a2;
- (void)arbiter:(id)a0 didCompleteUpdateWithContext:(id)a1;
- (void)arbiter:(id)a0 willBeginUpdateWithContext:(id)a1;
- (void)_noteCoverSheetWillPresent;
- (id)initWithArbiter:(id)a0 sceneDelegate:(id)a1;
- (void)_noteCoverSheetDidPresent;
- (void)setKeyboardFocusContext:(id)a0;
- (long long)_bootOrientation;
- (void)startObservingLayoutStateTransitions;
- (void)startListeningForLockScreenUIPresentations;
- (void)_systemOrientationLockChanged:(id)a0;
- (void)_controlCenterDidDismiss:(id)a0;
- (id)orientationStageRoles;
- (void)dealloc;
- (void)_noteCoverSheetDidDismiss;
- (BOOL)_isBacklightOn;
- (void)setupDefaultPipelineForArbiter:(id)a0;
- (void)_evaluateNonFlatOverrideNecessityForCurrentDeviceOrientation:(long long)a0;
- (void)_userOrientationLockChanged:(id)a0;
- (id)zOrderStageRoles;
- (void)didChangeSettingsForParticipant:(id)a0 context:(id)a1;
- (void)_noteCoverSheetWillDismiss;
- (void)_noteInputsDidChangeAnimated:(BOOL)a0 reason:(id)a1;
- (void)_updateOrientationInputsDeferralAnimated:(BOOL)a0;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidEndWithTransitionContext:(id)a1;
- (void).cxx_destruct;
- (void)_updateOrientationEventsEnabledState;
- (void)layoutStateTransitionCoordinator:(id)a0 transitionDidBeginWithTransitionContext:(id)a1;
- (id)_orientationInputsForDeviceOrientation:(long long)a0;
- (void)updatePreferencesForParticipant:(id)a0 updater:(id)a1;

@end
