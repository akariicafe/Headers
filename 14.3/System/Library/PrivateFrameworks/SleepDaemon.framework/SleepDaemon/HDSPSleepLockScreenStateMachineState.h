@class NSString, HDSPSleepLockScreenStateMachine;

@interface HDSPSleepLockScreenStateMachineState : HKSPPersistentStateMachineState <HDSPSleepLockScreenStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)environmentDidBecomeReady;
- (void)presentAlertForGoodMorning;
- (void)dismissAlertForGoodMorning;
- (long long)sleepLockScreenState;
- (void)updateState;
- (void)sleepModeDidChange:(long long)a0 reason:(unsigned long long)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)_updateStateForSleepMode:(long long)a0 reason:(unsigned long long)a1 context:(id)a2;
- (BOOL)isSleepLockScreenDisabled;

@end
