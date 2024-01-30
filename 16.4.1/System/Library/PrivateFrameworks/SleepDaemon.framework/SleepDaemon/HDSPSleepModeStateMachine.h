@class NSDate, NSString, HDSPSleepModeAutomatedOffFromManualState, HDSPSleepModeOffState, HDSPSleepModeManualBedtimeState, HDSPSleepModeAutomatedOffState, HDSPSleepModeWindDownState, HKSPSleepScheduleModel, HDSPSleepModeBedtimeState, HDSPSleepModeManualOffState;
@protocol NAScheduler, HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider;

@interface HDSPSleepModeStateMachine : HKSPPersistentStateMachine <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPSleepModeStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPSleepModeStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPSleepModeStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPSleepModeOffState *offState;
@property (readonly, nonatomic) HDSPSleepModeWindDownState *windDownState;
@property (readonly, nonatomic) HDSPSleepModeManualOffState *manualOffState;
@property (readonly, nonatomic) HDSPSleepModeBedtimeState *bedtimeState;
@property (readonly, nonatomic) HDSPSleepModeManualBedtimeState *manualBedtimeState;
@property (readonly, nonatomic) HDSPSleepModeAutomatedOffState *automatedOffState;
@property (readonly, nonatomic) HDSPSleepModeAutomatedOffFromManualState *automatedOffFromManualState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;

- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (unsigned long long)loggingCategory;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0;
- (void)sleepModeTurnedOffForUnknownReason;
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepModeTurnedOnForUnknownReason;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (BOOL)shouldGoIntoSleepModeDuringState:(unsigned long long)a0;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
