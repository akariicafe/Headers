@class NSString, HDSPTimeAsleepTrackerStateMachine;

@interface HDSPTimeAsleepTrackerStateMachineState : HKSPPersistentStateMachineState <HDSPTimeAsleepTrackerStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPTimeAsleepTrackerStateMachine *stateMachine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (void)appLaunchedOnDate:(id)a0;
- (void)bedtimeOccurred;
- (void)wakeUpOccurredWithReason:(unsigned long long)a0;
- (void)sleepTrackingEventDue;
- (void)userEngagedSleepMode;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)activityDetectedOnDate:(id)a0;
- (void)sleepSessionEndRequestedInternally;
- (void)startWakeDetectionOccurred;
- (void)sleepSessionFinished;
- (BOOL)isActivityTrackingState;
- (void)_updateStateSpecific;
- (BOOL)isSleepScheduleDisabled;
- (BOOL)isSleepTrackingState;
- (BOOL)isSleepTrackingSchedulingState;
- (BOOL)_updateStateCommon;
- (BOOL)isTimeAsleepTrackingDisabled;
- (BOOL)inTrackingWindow;

@end
