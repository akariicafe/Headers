@class NSString, HDSPSleepLockScreenStateMachine;

@interface HDSPSleepLockScreenStateMachineState : HKSPPersistentStateMachineState <HDSPSleepLockScreenStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly, nonatomic) long long sleepLockScreenState;
@property (readonly, nonatomic) BOOL schedulesLockScreenStateChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAlertForGoodMorning;
- (void)presentAlertForGoodMorning;
- (void)environmentDidBecomeReady;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)updateState;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)bedtimeExpiredEventDue;
- (void)sleepModeDidChange:(long long)a0 reason:(unsigned long long)a1;
- (void)_updateStateForSleepMode:(long long)a0 reason:(unsigned long long)a1 context:(id)a2;
- (BOOL)_isSleepLockScreenDisabled;

@end
