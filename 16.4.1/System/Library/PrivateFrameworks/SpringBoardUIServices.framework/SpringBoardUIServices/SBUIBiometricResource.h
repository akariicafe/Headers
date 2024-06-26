@class _SBUIBiometricKitInterface, NSString, NSMutableOrderedSet, SBFMobileKeyBag, MCProfileConnection, SBFCredentialSet, NSHashTable;
@protocol SBUIBiometricAuthenticationPolicy;

@interface SBUIBiometricResource : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver, _SBUIBiometricKitInterfaceDelegate, SBUIBiometricResource> {
    id<SBUIBiometricAuthenticationPolicy> _authPolicy;
    unsigned long long _lastEvent;
    BOOL _hasMesaHardware;
    BOOL _hasPoseidonMesaTypeHardware;
    BOOL _hasPearlHardware;
    BOOL _isPresenceDetectionAllowed;
    BOOL _isForegroundFingerDetectionEnabled;
    BOOL _isBackgroundFingerDetectionEnabled;
    BOOL _isFingerDetectionEnabledThroughHIDChannel;
    BOOL _isFaceDetectionEnabled;
    BOOL _screenIsOn;
    BOOL _isAuthenticated;
    BOOL _shouldSendFingerOffNotification;
    BOOL _shouldSendFaceOutOfViewNotification;
    BOOL _wasMatchingBeforeKeybagStateChangeOccurred;
    NSHashTable *_observers;
    NSMutableOrderedSet *_matchAssertions;
    NSMutableOrderedSet *_normalFingerDetectAssertions;
    NSMutableOrderedSet *_HIDEventsOnlyFingerDetectAssertions;
    NSMutableOrderedSet *_faceDetectAssertions;
    NSMutableOrderedSet *_simulatedLockoutAssertions;
    Class _bkMatchPearlOperationClass;
}

@property (retain, nonatomic, getter=_keybagInterface, setter=_setKeybagInterface:) SBFMobileKeyBag *keybagInterface;
@property (retain, nonatomic, getter=_biometricKitInterface, setter=_setBiometricKitInterface:) _SBUIBiometricKitInterface *biometricKitInterface;
@property (retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection;
@property (retain, nonatomic) id<SBUIBiometricAuthenticationPolicy> authenticationPolicy;
@property (retain, nonatomic) SBFCredentialSet *unlockCredentialSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasEnrolledIdentities;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly, nonatomic, getter=isFingerOn) BOOL fingerOn;
@property (readonly, nonatomic, getter=isFingerDetectEnabled) BOOL fingerDetectEnabled;
@property (readonly, nonatomic) BOOL hasMesaSupport;
@property (readonly, nonatomic) BOOL hasPoseidonSupport;
@property (readonly, nonatomic) BOOL hasPearlSupport;
@property (readonly, nonatomic, getter=isPearlDetectEnabled) BOOL pearlDetectEnabled;
@property (readonly, nonatomic, getter=isMatchingEnabled) BOOL matchingEnabled;
@property (readonly, nonatomic, getter=isMatchingAllowed) BOOL matchingAllowed;
@property (readonly, nonatomic) unsigned long long biometricLockoutState;
@property (readonly, nonatomic, getter=isPeriocularMatchingEnabled) BOOL periocularMatchingEnabled;

+ (id)sharedInstance;

- (void)_deactivateAssertion:(id)a0;
- (void)noteScreenDidTurnOff;
- (void)_deviceWillWake;
- (void)keybag:(id)a0 extendedStateDidChange:(id)a1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)a0 reason:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)a0;
- (void)_reevaluateFaceDetection;
- (id)succinctDescriptionBuilder;
- (id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)a0 forReason:(id)a1;
- (void)_forceBioLockout;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)a0 HIDEventsOnly:(BOOL)a1;
- (void)addObserver:(id)a0;
- (void)_reevaluateFingerDetection;
- (id)acquireFaceDetectionWantedAssertionForReason:(id)a0;
- (void)_removeFingerDetectionWantedAssertion:(id)a0 HIDEventsOnly:(BOOL)a1;
- (void)_profileSettingsChanged:(id)a0;
- (void)refreshMatchMode;
- (void)_reallySetAuthenticated:(BOOL)a0 keybagState:(id)a1;
- (id)initWithBiometricKitInterface:(id)a0;
- (void)biometricKitInterface:(id)a0 enrolledIdentitiesDidChange:(BOOL)a1;
- (void)dealloc;
- (void)_reevaluateMatching;
- (void)removeObserver:(id)a0;
- (void)biometricKitInterface:(id)a0 handleEvent:(unsigned long long)a1;
- (void)_activateFingerDetectAssertion:(id)a0;
- (void)_addSimulatedLockoutAssertion:(id)a0;
- (void)_deactivateAllPearlAssertions;
- (void)_removeSimulatedLockoutAssertion:(id)a0;
- (void)_removeFaceDetectionWantedAssertion:(id)a0;
- (void)_clearFinishedOperationsIfNeededForAssertion:(id)a0;
- (id)succinctDescription;
- (void)_activateFaceDetectAssertion:(id)a0;
- (id)init;
- (void)resumeMatchingForAssertion:(id)a0 advisory:(BOOL)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_removeMatchingAssertion:(id)a0;
- (void)_addFingerDetectionWantedAssertion:(id)a0 HIDEventsOnly:(BOOL)a1;
- (void)resumeMatchingAdvisory:(BOOL)a0;
- (void)_activateMatchAssertion:(id)a0;
- (void)_addMatchingAssertion:(id)a0;
- (void)_updateHandlersForEvent:(unsigned long long)a0;
- (void)_setAuthenticated:(BOOL)a0;
- (void)_reallyResumeMatchingForAssertion:(id)a0 advisory:(BOOL)a1;
- (void)_presenceDetectAllowedStateMayHaveChangedForReason:(id)a0;
- (void)noteScreenWillTurnOff;
- (void).cxx_destruct;
- (void)_addFaceDetectionWantedAssertion:(id)a0;
- (void)_notifyObserversOfEvent:(unsigned long long)a0;
- (void)noteScreenWillTurnOn;
- (void)_matchingAllowedStateMayHaveChangedForReason:(id)a0;

@end
