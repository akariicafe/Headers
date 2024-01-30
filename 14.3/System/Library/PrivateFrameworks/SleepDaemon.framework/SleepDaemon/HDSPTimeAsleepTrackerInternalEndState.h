@interface HDSPTimeAsleepTrackerInternalEndState : HDSPTimeAsleepTrackerStateMachineState

- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)sleepSessionFinished;

@end
