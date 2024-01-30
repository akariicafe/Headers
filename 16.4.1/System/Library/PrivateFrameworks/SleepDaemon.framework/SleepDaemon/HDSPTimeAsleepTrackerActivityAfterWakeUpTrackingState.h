@interface HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState : HDSPTimeAsleepTrackerActivityTrackingState

- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)stateDidExpireWithContext:(id)a0;
- (double)expirationDuration;
- (void)activityDetectedOnDate:(id)a0;
- (void)appLaunchedOnDate:(id)a0;
- (BOOL)inExpectedAutoTrackingWindow;

@end
