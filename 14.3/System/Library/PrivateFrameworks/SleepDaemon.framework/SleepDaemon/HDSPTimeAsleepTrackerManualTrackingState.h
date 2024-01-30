@interface HDSPTimeAsleepTrackerManualTrackingState : HDSPTimeAsleepTrackerSleepTrackingState

+ (unsigned long long)defaultStartReason;
+ (unsigned long long)defaultEndReason;

- (void)didExitWithNextState:(id)a0 context:(id)a1;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)stateName;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)bedtimeOccurred;
- (void)sleepTrackingEventDue;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)startWakeDetectionOccurred;
- (BOOL)isSleepTrackingSchedulingState;

@end
