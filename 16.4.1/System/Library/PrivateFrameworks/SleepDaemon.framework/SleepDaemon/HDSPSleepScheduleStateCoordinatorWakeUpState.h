@interface HDSPSleepScheduleStateCoordinatorWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (id)stateName;
- (void)bedtimeReached;
- (id)expirationDate;
- (unsigned long long)scheduleState;
- (void)windDownReached;

@end
