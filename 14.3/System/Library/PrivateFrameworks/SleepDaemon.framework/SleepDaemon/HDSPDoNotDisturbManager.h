@class NSString, HDSPDoNotDisturbStateMachine, HDSPEnvironment, HDSPDoNotDisturbListener, NSDate, HKSPSleepScheduleModel;
@protocol HDSPSource, HDSPDNDModeAssertionService, NAScheduler;

@interface HDSPDoNotDisturbManager : NSObject <HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPDoNotDisturbStateMachineDelegate, HDSPDoNotDisturbStateMachineInfoProvider, HDSPNotificationObserver, HDSPSource, HDSPDiagnosticsProvider, HDSPDoNotDisturbListenerDelegate, HDSPEnvironmentAware>

@property (readonly, nonatomic) HDSPDoNotDisturbListener *doNotDisturbListener;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } dndLock;
@property (readonly, nonatomic) HDSPDoNotDisturbStateMachine *stateMachine;
@property (readonly, copy, nonatomic) id /* block */ assertionServiceProvider;
@property (readonly, copy, nonatomic) NSString *assertionServiceClientIdentifier;
@property (readonly, nonatomic) id<HDSPDNDModeAssertionService> assertionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)significantTimeChangeDetected:(id)a0;
- (void)disengageDoNotDisturb;
- (void)userTurnedOffDoNotDisturb;
- (void)engageDoNotDisturbDuringBedtimeWithUserVisibleEndDate:(id)a0 updateOnly:(BOOL)a1;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (void)environmentDidBecomeReady:(id)a0;
- (void)engageDoNotDisturbDuringWindDownWithUserVisibleEndDate:(id)a0 updateOnly:(BOOL)a1;
- (void).cxx_destruct;
- (void)_takeDoNotDisturbAssertionWithIdentifier:(id)a0 userVisibleEndDate:(id)a1 updateOnly:(BOOL)a2;
- (id)_currentState;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepScheduleModel:(id)a2;
- (id)initWithEnvironment:(id)a0;
- (void)_updateDoNotDisturbAssertionService;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;
- (id)_assertionServiceClientIdentifierForPairedDevice;
- (id)diagnosticDescription;
- (void)_locked_cleanUpUnexpectedActiveAssertion;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (id)initWithEnvironment:(id)a0 assertionServiceProvider:(id /* block */)a1 doNotDisturbListener:(id)a2;

@end
