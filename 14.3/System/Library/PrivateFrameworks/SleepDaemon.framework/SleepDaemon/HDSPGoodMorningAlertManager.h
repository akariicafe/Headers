@class HKSPObserverSet, NSString, HDSPGoodMorningAlertStateMachine, NSDate, HKSPSleepScheduleModel, HDSPEnvironment;
@protocol NAScheduler;

@interface HDSPGoodMorningAlertManager : NSObject <HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPSleepActionObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } goodMorningAlertLock;
@property (readonly, nonatomic) HDSPGoodMorningAlertStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *goodMorningAlertObservers;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL goodMorningAlertEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)goodMorningWasDismissed:(id)a0;
- (void)significantTimeChangeDetected:(id)a0;
- (void)presentAlertForGoodMorning;
- (void)dismissAlertForGoodMorning;
- (void)environmentDidBecomeReady:(id)a0;
- (void)updateState;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)_currentState;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepScheduleModel:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (void)addObserver:(id)a0;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;
- (id)diagnosticDescription;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;

@end
