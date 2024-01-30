@interface HDSPTimeAsleepTrackerInternalEndState : HDSPTimeAsleepTrackerStateMachineState

- (id)stateName;
- (double)expirationDuration;
- (void)sleepSessionFinished;

@end
