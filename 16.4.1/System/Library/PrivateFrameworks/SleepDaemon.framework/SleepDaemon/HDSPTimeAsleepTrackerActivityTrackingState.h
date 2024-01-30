@interface HDSPTimeAsleepTrackerActivityTrackingState : HDSPTimeAsleepTrackerAutoTrackingState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)activityDetectedOnDate:(id)a0;
- (BOOL)inExpectedAutoTrackingWindow;
- (BOOL)isActivityTrackingState;

@end
