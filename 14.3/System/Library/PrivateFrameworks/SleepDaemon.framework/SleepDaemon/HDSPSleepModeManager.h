@class NSString, HDSPSleepModeStateMachine, HKSPObserverSet, NSDate, HKSPSleepScheduleModel, HDSPEnvironment;
@protocol NAScheduler;

@interface HDSPSleepModeManager : NSObject <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepScheduleStateObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } sleepModeLock;
@property (readonly, nonatomic) HDSPSleepModeStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *sleepModeObservers;
@property (nonatomic) long long sleepMode;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL isInDemoMode;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)significantTimeChangeDetected:(id)a0;
- (id)currentState;
- (void)environmentDidBecomeReady:(id)a0;
- (void)scheduledEventIsDue;
- (BOOL)inUserRequestedSleepMode;
- (void)updateState;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_userDisengagedCurrentMode;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepScheduleModel:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (void)addObserver:(id)a0;
- (void)_powerLogSleepMode:(BOOL)a0;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;
- (id)diagnosticDescription;
- (void)_userEngagedBedtimeMode;
- (void)_enableSleepModeControlCenterModuleIfNeeded;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;

@end
