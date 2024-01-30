@interface HDSPSleepScheduleStateCoordinatorBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)bedtimeDelayed;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)wakeUpConfirmed;
- (void)bedtimeSkipped;
- (unsigned long long)scheduleState;
- (void)wakeTimeReached;
- (id)stateName;

@end
