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

+ (id)monitorActivity;
+ (id)monitorCriteria;

- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)unscheduleStateExpiration;
- (id)_currentState;
- (void)scheduleStateExpiration;
- (id)diagnosticDescription;
- (id)eventIdentifiers;
- (id)initWithEnvironment:(id)a0;
- (id)devicePowerMonitor;
- (void)sleepEventIsDue:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (id)diagnosticInfo;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)significantTimeChangeDetected:(id)a0;
- (void)updateState;
- (void).cxx_destruct;
- (void)checkBatteryLevel;
- (void)deviceChangedChargingState:(BOOL)a0;
- (id)initWithEnvironment:(id)a0 monitoringScheduler:(id)a1;
- (id)monitoringWindowAfterDate:(id)a0;
- (void)postChargingReminderNotification;
- (void)startBatteryMonitoring;
- (void)stopBatteryMonitoring;

@end
