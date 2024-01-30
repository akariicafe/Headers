@class NSString, SBUIBiometricResource;
@protocol SBUIPasscodeBiometricMatchingAssertionFactory;

@interface SBUIPasscodeBiometricResource : NSObject <SBUIBiometricResource> {
    SBUIBiometricResource *_biometricResource;
    id<SBUIPasscodeBiometricMatchingAssertionFactory> _overrideMatchingAssertionFactory;
}

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)resumeMatchingForAssertion:(id)a0 advisory:(BOOL)a1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)a0 reason:(id)a1;
- (void)resumeMatchingAdvisory:(BOOL)a0;
- (id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)a0 forReason:(id)a1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)a0 HIDEventsOnly:(BOOL)a1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)a0;
- (void)refreshMatchMode;
- (id)initWithBiometricResource:(id)a0 overrideMatchingAssertionFactory:(id)a1;
- (id)acquireFaceDetectionWantedAssertionForReason:(id)a0;

@end
