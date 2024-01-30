@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)updateStateWithChangeReason:(unsigned long long)a0;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)windDownReached;
- (unsigned long long)scheduleState;
- (id)stateName;
- (void)bedtimeReached;
- (void)wakeUpConfirmed;
- (void)significantScheduleChangeOccurred:(unsigned long long)a0;

@end
