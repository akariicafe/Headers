@interface HDSPSleepScheduleStateCoordinatorWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)bedtimeReached;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (void)bedtimeSkipped;
- (unsigned long long)scheduleState;
- (void)windDownReached;
- (id)stateName;

@end
