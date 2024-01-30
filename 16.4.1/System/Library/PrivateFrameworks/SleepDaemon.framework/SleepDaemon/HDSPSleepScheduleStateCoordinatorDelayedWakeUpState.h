@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (void)bedtimeReached;
- (id)expirationDate;
- (void)wakeUpConfirmed;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (id)nextStateWithContext:(id *)a0 forceUpdate:(BOOL)a1;
- (unsigned long long)scheduleState;
- (void)significantScheduleChangeOccurred:(unsigned long long)a0;
- (void)windDownReached;

@end
