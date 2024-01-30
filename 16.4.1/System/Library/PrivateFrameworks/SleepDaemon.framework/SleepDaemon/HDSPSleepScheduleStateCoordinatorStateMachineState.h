@class HDSPSleepScheduleStateCoordinatorStateMachine, NSString;

@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState <HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) unsigned long long scheduleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)significantTimeChange;
- (void)scheduleModelChanged:(id)a0;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)bedtimeReached;
- (void)timeZoneChange;
- (void)wakeUpConfirmed;
- (void)stateDidExpireWithContext:(id)a0;
- (id)nextStateWithContext:(id *)a0;
- (id)nextStateWithContext:(id *)a0 forceUpdate:(BOOL)a1;
- (void)wakeTimeReached;
- (void)significantScheduleChangeOccurred:(unsigned long long)a0;
- (void)windDownReached;
- (id)_determineNextStateFromTimeline;
- (void)_forceUpdateStateWithChangeReason:(unsigned long long)a0;
- (id)_timelineForDate:(id)a0;
- (BOOL)isAlarmEnabled;
- (BOOL)isSleepScheduleDisabled;

@end
