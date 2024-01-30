@class HDSPDoNotDisturbOffState, HDSPDoNotDisturbDuringWindDownState, HDSPDoNotDisturbManualOffState, NSString, NSDate, HDSPDoNotDisturbDuringBedtimeState, HKSPSleepScheduleModel;
@protocol NAScheduler, HDSPDoNotDisturbStateMachineDelegate, HDSPDoNotDisturbStateMachineInfoProvider;

@interface HDSPDoNotDisturbStateMachine : HKSPPersistentStateMachine <HDSPDoNotDisturbStateMachineDelegate, HDSPDoNotDisturbStateMachineInfoProvider, HDSPDoNotDisturbStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPDoNotDisturbStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPDoNotDisturbStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPDoNotDisturbOffState *offState;
@property (readonly, nonatomic) HDSPDoNotDisturbDuringWindDownState *dndDuringWindDownState;
@property (readonly, nonatomic) HDSPDoNotDisturbDuringBedtimeState *dndDuringBedtimeState;
@property (readonly, nonatomic) HDSPDoNotDisturbManualOffState *manualOffState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;

- (void)disengageDoNotDisturb;
- (id)stateMachineLog;
- (void)userTurnedOffDoNotDisturb;
- (void)engageDoNotDisturbDuringBedtimeWithUserVisibleEndDate:(id)a0 updateOnly:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void)engageDoNotDisturbDuringWindDownWithUserVisibleEndDate:(id)a0 updateOnly:(BOOL)a1;
- (void).cxx_destruct;

@end
