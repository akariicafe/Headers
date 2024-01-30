@class HDSPSleepWidgetWaitingState, HDSPSleepWidgetDisabledState, NSString, NSDate, HDSPSleepWidgetGreetingState, HKSPSleepScheduleModel, HDSPSleepWidgetNotOnboardedState, HDSPSleepWidgetBedtimeInProgressState, HDSPSleepWidgetWindDownState, HDSPSleepWidgetUpcomingState, HDSPSleepWidgetBedtimeState;
@protocol HDSPSleepWidgetStateMachineDelegate, NAScheduler, HDSPSleepWidgetStateMachineInfoProvider;

@interface HDSPSleepWidgetStateMachine : HKSPPersistentStateMachine <HDSPSleepWidgetStateMachineDelegate, HDSPSleepWidgetStateMachineInfoProvider, HDSPSleepWidgetStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPSleepWidgetStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPSleepWidgetStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPSleepWidgetDisabledState *disabledState;
@property (readonly, nonatomic) HDSPSleepWidgetWaitingState *waitingState;
@property (readonly, nonatomic) HDSPSleepWidgetUpcomingState *upcomingState;
@property (readonly, nonatomic) HDSPSleepWidgetWindDownState *windDownState;
@property (readonly, nonatomic) HDSPSleepWidgetBedtimeState *bedtimeState;
@property (readonly, nonatomic) HDSPSleepWidgetBedtimeInProgressState *bedtimeInProgressState;
@property (readonly, nonatomic) HDSPSleepWidgetGreetingState *greetingState;
@property (readonly, nonatomic) HDSPSleepWidgetNotOnboardedState *notOnboardedState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL isOnboarded;

- (void)sleepScheduleModelDidChange:(id)a0;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (unsigned long long)loggingCategory;
- (void)significantTimeChangeOccurred;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (void)sleepWidgetShouldReload;
- (id)allStates;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (void)sleepWidgetStateDidChange:(long long)a0 previousState:(long long)a1;
- (void).cxx_destruct;

@end
