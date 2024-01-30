@interface HDSPSleepScheduleStateCoordinatorSkippedBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)wakeUpConfirmed;
- (unsigned long long)scheduleState;
- (void)wakeTimeReached;
- (id)stateName;

@end
