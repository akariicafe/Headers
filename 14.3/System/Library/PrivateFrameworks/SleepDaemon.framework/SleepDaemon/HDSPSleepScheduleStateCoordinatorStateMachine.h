@class HDSPSleepScheduleStateCoordinatorDelayedWakeUpState, HDSPSleepScheduleStateCoordinatorBedtimeState, NSString, HKSPSleepScheduleModel, HDSPSleepScheduleStateCoordinatorDisabledState, HDSPSleepScheduleStateCoordinatorWindDownState, HKSPSleepScheduleOccurrence, NSDate, HDSPSleepScheduleStateCoordinatorInitialState, HDSPSleepScheduleStateCoordinatorWakeUpState, HDSPSleepScheduleStateCoordinatorSkippedBedtimeState;
@protocol HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, NAScheduler, HDSPSleepScheduleStateCoordinatorStateMachineDelegate;

@interface HDSPSleepScheduleStateCoordinatorStateMachine : HKSPPersistentStateMachine <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPSleepScheduleStateCoordinatorStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorDisabledState *disabledState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorWakeUpState *wakeUpState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorBedtimeState *bedtimeState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorWindDownState *windDownState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorDelayedWakeUpState *delayedWakeUpState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorSkippedBedtimeState *skippedBedtimeState;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorInitialState *initialState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) NSDate *currentDate;

- (void)significantTimeChange;
- (id)stateMachineLog;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void)timeZoneChange;
- (void).cxx_destruct;
- (void)bedtimeReached;
- (void)bedtimeDelayed;
- (void)snoozeFireDateShouldBeReset;
- (void)wakeUpConfirmed;
- (void)bedtimeSkipped;
- (void)windDownReached;
- (void)windDownSkipped;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)wakeTimeReached;
- (void)scheduleModelChanged;

@end
