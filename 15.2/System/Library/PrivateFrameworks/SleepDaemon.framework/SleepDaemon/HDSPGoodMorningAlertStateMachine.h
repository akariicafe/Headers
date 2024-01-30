@class HKSPSleepScheduleModel, NSString, HDSPGoodMorningAlertWaitingState, NSDate, HDSPGoodMorningAlertPresentingState, HDSPGoodMorningAlertDisabledState;
@protocol HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineDelegate, NAScheduler;

@interface HDSPGoodMorningAlertStateMachine : HKSPPersistentStateMachine <HDSPGoodMorningAlertStateMachineDelegate, HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPGoodMorningAlertStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPGoodMorningAlertStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPGoodMorningAlertDisabledState *disabledState;
@property (readonly, nonatomic) HDSPGoodMorningAlertWaitingState *waitingState;
@property (readonly, nonatomic) HDSPGoodMorningAlertPresentingState *presentingState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL goodMorningAlertEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL isOnCharger;

- (unsigned long long)loggingCategory;
- (void)dismissAlertForGoodMorning;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void)presentAlertForGoodMorning;
- (void)sleepScheduleStateChangedToWakeUp;
- (void)goodMorningAlertTimedOut;
- (void).cxx_destruct;
- (void)sleepScheduleStateChangedToBedtime;
- (void)scheduleGoodMorningTimeOut;
- (void)unscheduleGoodMorningTimeOut;

@end
