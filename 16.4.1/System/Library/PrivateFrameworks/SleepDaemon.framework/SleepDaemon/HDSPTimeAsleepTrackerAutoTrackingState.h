@interface HDSPTimeAsleepTrackerAutoTrackingState : HDSPTimeAsleepTrackerSleepTrackingState

- (id)stateName;
- (id)nextStateWithContext:(id *)a0;
- (BOOL)inExpectedAutoTrackingWindow;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)startWakeDetectionOccurred;
- (void)wakeUpOccurredWithReason:(unsigned long long)a0;

@end
