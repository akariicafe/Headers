@interface HDSPTimeAsleepTrackerAutoTrackingState : HDSPTimeAsleepTrackerSleepTrackingState

- (id)stateName;
- (void)wakeUpOccurredWithReason:(unsigned long long)a0;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)startWakeDetectionOccurred;
- (void)_updateStateSpecific;

@end
