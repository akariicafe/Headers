@class HDSPSleepScheduleStateCoordinatorStateMachine, HKSPSleepScheduleModel, NSString;

@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState <HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) unsigned long long scheduleState;
@property (copy, nonatomic) HKSPSleepScheduleModel *persistedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)significantTimeChange;
- (void)timeZoneChange;
- (void)updateState;
- (void).cxx_destruct;
- (void)bedtimeReached;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)bedtimeDelayed;
- (id)equalsBuilderWithObject:(id)a0;
- (void)willEnterWithPreviousState:(id)a0 context:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)wakeUpConfirmed;
- (void)bedtimeSkipped;
- (void)windDownReached;
- (void)windDownSkipped;
- (void)wakeTimeReached;
- (void)scheduleModelChanged;
- (void)didEnterWithPreviousState:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isAlarmEnabled;
- (BOOL)isSleepScheduleDisabled;
- (void)updateStateWithCheckExpiration:(BOOL)a0;
- (id)determineNextStateFromTimeline;
- (id)_timelineForDate:(id)a0;
- (BOOL)significantScheduleChangeOccurred;

@end
