@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)bedtimeReached;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)wakeUpConfirmed;
- (unsigned long long)scheduleState;
- (void)windDownReached;
- (id)stateName;
- (void)updateStateWithCheckExpiration:(BOOL)a0;

@end
