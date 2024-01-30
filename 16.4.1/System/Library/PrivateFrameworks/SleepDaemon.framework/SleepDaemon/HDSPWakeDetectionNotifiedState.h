@interface HDSPWakeDetectionNotifiedState : HDSPWakeDetectionStateMachineState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)expirationDate;
- (void)stateDidExpireWithContext:(id)a0;
- (id)nextStateWithContext:(id *)a0;

@end
