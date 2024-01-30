@class NSString, BiometricKit;
@protocol SBUIBiometricResource;

@interface SBBiometricEventLogger : NSObject <SBUIBiometricResourceObserver> {
    BiometricKit *_biometricKit;
    BOOL _isScreenOn;
    BOOL _passcodeSuccessAfterBioFailureTriggerArmed;
    id<SBUIBiometricResource> _biometricResource;
}

@property (nonatomic) unsigned long long fingerOnTime;
@property (nonatomic) BOOL fingerOnWithScreenOn;
@property (nonatomic) unsigned long long keybagUnlockTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)logClass:(unsigned char)a0 code:(unsigned int)a1;
+ (void)logEvent:(unsigned int)a0;

- (void)_coversheetSwipedForDismissal:(id)a0;
- (void)_prearmMatch:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_shouldSyslogTimestamps;
- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (void)_keybagBioUnlock:(id)a0;
- (void)_unlockAnimationWillStart:(id)a0;
- (void)_resetPasscodeStateMachine;
- (void)_tryAgain:(id)a0;
- (void)timestampEvent:(unsigned long long)a0;
- (void)_authRequestCompleted:(id)a0;
- (void)_screenTurnedOn:(id)a0;
- (void)_clearEverything;
- (void)_systemDidWakeFromSleep:(id)a0;
- (void)_biometricAuthenticationSucceeded;
- (void)_fingerOn:(id)a0;
- (void)_passcodeViewTransitionedToPasscode:(id)a0;
- (void)_passcodePromptCancelled:(id)a0;
- (void)_backlightLevelChanged:(id)a0;
- (unsigned long long)_machTimeInMilliseconds;
- (void)_biometricAuthenticationFailed;
- (void)_passcodeAuthenticationSucceeded;

@end
