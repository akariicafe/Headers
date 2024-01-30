@class NSString, SBMesaUnlockTrigger, CSLockScreenPearlSettings;
@protocol SBBiometricUnlockBehaviorDelegate;

@interface SBDashBoardPearlUnlockBehavior : NSObject <SBMesaUnlockTriggerDelegate, SBBiometricUnlockBehavior> {
    CSLockScreenPearlSettings *_pearlSettings;
}

@property (retain, nonatomic, getter=_trigger, setter=_setTrigger:) SBMesaUnlockTrigger *trigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;

- (void)handleBiometricEvent:(unsigned long long)a0;
- (void)mesaUnlockTriggerFired:(id)a0;
- (id)_feedbackForFailureSettings:(id)a0;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_feedbackForBioUnlockEventThatWasSpontaneous:(BOOL)a0;
- (id)succinctDescriptionBuilder;
- (id)_feedbackForPasscodeEvent;
- (id)initWithPearlSettings:(id)a0 andUnlockTrigger:(id)a1;
- (void)_handlePearlFailure;

@end
