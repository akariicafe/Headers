@class NSString, BiometricKit;
@protocol SBUIBiometricResource;

@interface SBBiometricEventLogger : NSObject <SBUIBiometricResourceObserver> {
    BiometricKit *_biometricKit;
    BOOL _isScreenOn;
    BOOL _passcodeSuccessAfterBioFailureTriggerArmed;
    id<SBUIBiometricResource> _biometricResource;
}

@property (nonatomic) unsigned long long keybagUnlockTime;
@property (nonatomic) unsigned long long fingerOnTime;
@property (nonatomic) BOOL fingerOnWithScreenOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)logEvent:(unsigned int)a0;
+ (void)logClass:(unsigned char)a0 code:(unsigned int)a1;

- (void)_prearmMatch:(id)a0;
- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (void)_resetPasscodeStateMachine;
- (void)_passcodeAuthenticationSucceeded;
- (void)_authRequestCompleted:(id)a0;
- (void)_passcodeViewTransitionedToPasscode:(id)a0;
- (void)timestampEvent:(unsigned long long)a0;
- (void)_backlightLevelChanged:(id)a0;
- (BOOL)_shouldSyslogTimestamps;
- (void)_unlockAnimationWillStart:(id)a0;
- (void)_screenTurnedOn:(id)a0;
- (void)_keybagBioUnlock:(id)a0;
- (unsigned long long)_machTimeInMilliseconds;
- (void)_passcodePromptCancelled:(id)a0;
- (void).cxx_destruct;
- (void)_tryAgain:(id)a0;
- (id)init;
- (void)_biometricAuthenticationFailed;
- (void)_biometricAuthenticationSucceeded;
- (void)_fingerOn:(id)a0;
- (void)_systemDidWakeFromSleep:(id)a0;
- (void)_coversheetSwipedForDismissal:(id)a0;
- (void)_clearEverything;

@end
