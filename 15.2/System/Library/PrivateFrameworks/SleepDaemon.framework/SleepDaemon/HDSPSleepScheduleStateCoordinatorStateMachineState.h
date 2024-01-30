@class HDSPSleepScheduleStateCoordinatorStateMachine, NSString;

@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState <HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) unsigned long long scheduleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)significantTimeChange;
- (void)updateStateWithChangeReason:(unsigned long long)a0;
- (void)updateState;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)timeZoneChange;
- (void)windDownReached;
- (void)wakeTimeReached;
- (void)scheduleModelChanged:(id)a0;
- (void)bedtimeReached;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)wakeUpConfirmed;
- (void)significantScheduleChangeOccurred:(unsigned long long)a0;
- (BOOL)isAlarmEnabled;
- (BOOL)isSleepScheduleDisabled;
- (id)determineNextStateFromTimeline;
- (id)_timelineForDate:(id)a0;

@end
