@class HKSPObserverSet, NSString, HDSPGoodMorningAlertStateMachine, NSDate, HKSPSleepScheduleModel, HDSPEnvironment;
@protocol NAScheduler, HDSPSleepEventDelegate;

@interface HDSPGoodMorningAlertManager : NSObject <HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineDelegate, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPSleepActionObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } goodMorningAlertLock;
@property (readonly, nonatomic) HDSPGoodMorningAlertStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *goodMorningAlertObservers;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL goodMorningAlertEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL isOnCharger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)dismissAlertForGoodMorning;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)presentAlertForGoodMorning;
- (void)goodMorningWasDismissed;
- (void)unscheduleStateExpiration;
- (id)_currentState;
- (void)scheduleStateExpiration;
- (id)diagnosticDescription;
- (id)eventIdentifiers;
- (id)initWithEnvironment:(id)a0;
- (void)addObserver:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (id)diagnosticInfo;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)significantTimeChangeDetected:(id)a0;
- (void)removeObserver:(id)a0;
- (void)updateState;
- (void).cxx_destruct;

@end
