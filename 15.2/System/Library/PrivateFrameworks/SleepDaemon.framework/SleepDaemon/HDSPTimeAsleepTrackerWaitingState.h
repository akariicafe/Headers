@interface HDSPTimeAsleepTrackerWaitingState : HDSPTimeAsleepTrackerStateMachineState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)bedtimeOccurred;
- (void)sleepTrackingEventDue;
- (void)userEngagedSleepMode;
- (void)startWakeDetectionOccurred;
- (BOOL)isSleepTrackingSchedulingState;

@end
