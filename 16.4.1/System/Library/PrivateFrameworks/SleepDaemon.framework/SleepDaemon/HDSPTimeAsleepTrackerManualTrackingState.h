@interface HDSPTimeAsleepTrackerManualTrackingState : HDSPTimeAsleepTrackerSleepTrackingState

+ (unsigned long long)defaultEndReason;
+ (unsigned long long)defaultStartReason;

- (id)stateName;
- (id)expirationDate;
- (void)stateDidExpireWithContext:(id)a0;
- (BOOL)schedulesExpiration;
- (void)bedtimeOccurred;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)startWakeDetectionOccurred;

@end
