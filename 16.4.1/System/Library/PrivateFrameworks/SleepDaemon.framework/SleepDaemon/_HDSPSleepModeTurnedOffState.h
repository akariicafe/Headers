@interface _HDSPSleepModeTurnedOffState : HDSPSleepModeStateMachineState

- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (id)expirationDate;
- (void)stateDidExpireWithContext:(id)a0;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (id)nextStateWithContext:(id *)a0;
- (BOOL)shouldUpdateSleepModeStateForState:(unsigned long long)a0 changeReason:(unsigned long long)a1 previousState:(unsigned long long)a2;

@end
