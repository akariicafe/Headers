@class NSString, HDSPEnvironment, NSDate, HKSPSleepScheduleModel, HDSPChargingReminderStateMachine;
@protocol HDSPSleepEventDelegate, HDSPActivityScheduler, NAScheduler;

@interface HDSPChargingReminderManager : NSObject <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPTimeChangeObserver, HDSPDevicePowerObserver, HDSPSleepEventProvider, HDSPSleepScheduleStateObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } chargingReminderLock;
@property (readonly, nonatomic) HDSPChargingReminderStateMachine *stateMachine;
@property (readonly, nonatomic) id<HDSPActivityScheduler> monitoringScheduler;
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
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

+ (id)monitorCriteria;

- (void)significantTimeChangeDetected:(id)a0;
- (id)eventIdentifiers;
- (id)_currentState;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)updateState;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)sleepEventIsDue:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (id)devicePowerMonitor;
- (void)_withLock:(id /* block */)a0;
- (void)postChargingReminderNotification;
- (void)scheduleBatteryMonitoring;
- (void)unscheduleBatteryMonitoring;
- (void)startBatteryMonitoring;
- (void)stopBatteryMonitoring;
- (id)monitoringWindowAfterDate:(id)a0;
- (void)deviceChangedChargingState:(BOOL)a0;
- (id)initWithEnvironment:(id)a0 monitoringScheduler:(id)a1;
- (void)checkBatteryLevel;
- (BOOL)isWaitingOrMonitoring;

@end
