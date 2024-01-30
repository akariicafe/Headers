@interface HDSPTimeAsleepTrackerActivityTrackingState : HDSPTimeAsleepTrackerAutoTrackingState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)activityDetectedOnDate:(id)a0;
- (BOOL)isActivityTrackingState;

@end
