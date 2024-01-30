@interface HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState : HDSPTimeAsleepTrackerActivityTrackingState

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)determineExpirationDateForCurrentDate:(id)a0;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)appLaunchedOnDate:(id)a0;
- (void)activityDetectedOnDate:(id)a0;
- (void)_updateStateSpecific;

@end
