@class NSDate, NSString, HKSPObserverSet, HDSPEnvironment, HDSPSleepScheduleStateCoordinatorStateMachine, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence;
@protocol NAScheduler;

@interface HDSPSleepScheduleStateCoordinator : NSObject <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPDiagnosticsProvider, HDSPSleepActionObserver, HDSPSleepAlarmObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateMachineLock;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)wakeNotificationWasConfirmed:(id)a0;
- (void)bedtimeWasDelayed:(id)a0;
- (void)windDownWasSkipped:(id)a0;
- (id)eventIdentifiers;
- (void)significantTimeChangeDetected:(id)a0;
- (id)currentState;
- (void)environmentDidBecomeReady:(id)a0;
- (void)_updateSleepScheduleState;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)timeZoneChangeDetected:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepScheduleModel:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (void)addObserver:(id)a0;
- (void)bedtimeWasSkipped:(id)a0;
- (void)snoozeFireDateShouldBeReset;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;
- (id)diagnosticDescription;
- (void)wakeUpAlarmWasDismissed:(id)a0;
- (unsigned long long)currentSleepScheduleState;
- (void)sleepEventIsDue:(id)a0;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;

@end
