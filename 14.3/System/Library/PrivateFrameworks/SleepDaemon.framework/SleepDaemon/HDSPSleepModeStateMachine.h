@class NSDate, NSString, HKSPSleepScheduleModel, HDSPSleepModeOffState, HDSPSleepModeManualBedtimeState, HDSPSleepModeWindDownState, HDSPSleepModeBedtimeState, HDSPSleepModeManualOffState;
@protocol NAScheduler, HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider;

@interface HDSPSleepModeStateMachine : HKSPPersistentStateMachine <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPSleepModeStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPSleepModeStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPSleepModeStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPSleepModeOffState *offState;
@property (readonly, nonatomic) HDSPSleepModeWindDownState *windDownState;
@property (readonly, nonatomic) HDSPSleepModeManualOffState *manualOffState;
@property (readonly, nonatomic) HDSPSleepModeBedtimeState *bedtimeState;
@property (readonly, nonatomic) HDSPSleepModeManualBedtimeState *manualBedtimeState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL isInDemoMode;

- (id)stateMachineLog;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void).cxx_destruct;
- (void)userDisengagedCurrentMode;
- (void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)a0;
- (void)userEngagedBedtimeMode;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;

@end
