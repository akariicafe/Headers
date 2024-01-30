@interface HDSPTimeAsleepTrackerInternalEndState : HDSPTimeAsleepTrackerStateMachineState

- (id)stateName;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)sleepSessionFinished;

@end
