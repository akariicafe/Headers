@interface HDSPSleepScheduleStateCoordinatorBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)wakeTimeReached;
- (unsigned long long)scheduleState;
- (id)stateName;
- (void)wakeUpConfirmed;

@end
