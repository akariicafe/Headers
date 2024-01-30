@class NSString, SBMesaUnlockTrigger;
@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate> {
    id<SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    SBMesaUnlockTrigger *_baseTrigger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)screenOff;
- (void).cxx_destruct;
- (void)fingerOn;
- (BOOL)bioUnlock;
- (void)fingerOff;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)a0 baseTrigger:(id)a1;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)mesaUnlockTriggerFired:(id)a0;
- (void)significantUserInteractionOccurred;

@end
