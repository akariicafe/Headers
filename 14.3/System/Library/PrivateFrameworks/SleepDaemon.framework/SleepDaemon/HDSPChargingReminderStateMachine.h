@class HDSPChargingReminderMonitoringState, HDSPChargingReminderNotifiedState, HDSPChargingReminderDisabledState, NSString, NSDate, HKSPSleepScheduleModel, HDSPChargingReminderWaitingState;
@protocol NAScheduler, HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider;

@interface HDSPChargingReminderStateMachine : HKSPPersistentStateMachine <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPChargingReminderStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPChargingReminderStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPChargingReminderStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPChargingReminderDisabledState *disabledState;
@property (readonly, nonatomic) HDSPChargingReminderWaitingState *waitingState;
@property (readonly, nonatomic) HDSPChargingReminderMonitoringState *monitoringState;
@property (readonly, nonatomic) HDSPChargingReminderNotifiedState *notifiedState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL isCharging;

- (id)stateMachineLog;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void).cxx_destruct;
- (void)batteryMonitoringEventDue;
- (void)batteryLevelChanged:(float)a0;
- (void)postChargingReminderNotification;
- (void)scheduleBatteryMonitoring;
- (void)unscheduleBatteryMonitoring;
- (void)startBatteryMonitoring;
- (void)stopBatteryMonitoring;
- (id)monitoringWindowAfterDate:(id)a0;

@end
