@class NSString, HDSPSleepLockScreenStateMachine;

@interface HDSPSleepLockScreenStateMachineState : HKSPPersistentStateMachineState <HDSPSleepLockScreenStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly, nonatomic) long long sleepLockScreenState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAlertForGoodMorning;
- (void)presentAlertForGoodMorning;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)sleepModeDidChange:(long long)a0 reason:(unsigned long long)a1;
- (id)nextStateWithContext:(id *)a0;
- (void)environmentDidBecomeReady;
- (BOOL)_isSleepLockScreenDisabled;
- (id)_nextStateForSleepMode:(long long)a0 reason:(unsigned long long)a1 context:(id *)a2;

@end
