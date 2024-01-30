@interface HDSPTimeAsleepTrackerWaitingState : HDSPTimeAsleepTrackerStateMachineState

- (id)stateName;
- (id)expirationDate;
- (void)stateDidExpireWithContext:(id)a0;
- (BOOL)schedulesExpiration;
- (void)bedtimeOccurred;
- (void)startWakeDetectionOccurred;
- (void)userEngagedSleepMode;

@end
