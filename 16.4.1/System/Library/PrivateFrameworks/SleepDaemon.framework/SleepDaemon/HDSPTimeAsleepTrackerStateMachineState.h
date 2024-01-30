@class NSString, HDSPTimeAsleepTrackerStateMachine;

@interface HDSPTimeAsleepTrackerStateMachineState : HKSPPersistentStateMachineState <HDSPTimeAsleepTrackerStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPTimeAsleepTrackerStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nextStateWithContext:(id *)a0;
- (void)bedtimeOccurred;
- (void)activityDetectedOnDate:(id)a0;
- (void)appLaunchedOnDate:(id)a0;
- (BOOL)inTrackingWindow;
- (BOOL)inWakeDetectionWindow;
- (BOOL)isActivityTrackingState;
- (BOOL)isSleepScheduleDisabled;
- (BOOL)isSleepTrackingState;
- (BOOL)isTimeAsleepTrackingDisabled;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)sleepSessionEndRequestedInternally;
- (void)sleepSessionFinished;
- (BOOL)sleepTrackingIsDisabledWithContext:(id *)a0;
- (void)startWakeDetectionOccurred;
- (void)userEngagedSleepMode;
- (void)wakeUpOccurredWithReason:(unsigned long long)a0;

@end
