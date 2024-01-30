@class HDSPSleepLockScreenStateMachine, NSString, HDSPEnvironment, NSDictionary, HKSPSleepScheduleModel, NSDate;
@protocol HDSPSleepLockScreenAssertionManager, NAScheduler, HDSPSleepEventDelegate;

@interface HDSPSleepLockScreenManager : NSObject <HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenAssertionManagerDelegate, HKSPSensitiveUIObserver, HDSPTimeChangeObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPDiagnosticsProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPGoodMorningAlertObserver, HDSPEnvironmentAware> {
    long long _state;
    long long _overrideState;
    NSDictionary *_overrideUserInfo;
}

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } sleepLockScreenLock;
@property (readonly, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly, nonatomic) id<HDSPSleepLockScreenAssertionManager> assertionManager;
@property (nonatomic) long long currentLockScreenState;
@property (copy, nonatomic) id /* block */ didUpdateAlertAssertion;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL isLockScreenActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)timeZoneChangeDetected:(id)a0;
- (void)dismissAlertForGoodMorning;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)presentAlertForGoodMorning;
- (void)unscheduleStateExpiration;
- (void)lockScreenDidConnect;
- (id)_currentState;
- (void)_lock_updateLockScreenAssertion;
- (void)scheduleStateExpiration;
- (id)diagnosticDescription;
- (id)eventIdentifiers;
- (id)initWithEnvironment:(id)a0;
- (long long)_lock_resolvedLockScreenState;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepSettings:(id)a1;
- (void)sleepEventIsDue:(id)a0;
- (void)sensitiveUIStateChanged;
- (void)_withLock:(id /* block */)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (id)diagnosticInfo;
- (void)sleepLockScreenStateDidChange:(long long)a0 previousState:(long long)a1;
- (BOOL)_lock_shouldShowLockScreenForState:(long long)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)significantTimeChangeDetected:(id)a0;
- (void)overrideLockScreenState:(long long)a0 userInfo:(id)a1;
- (id)initWithEnvironment:(id)a0 assertionManager:(id)a1;
- (BOOL)_lock_overridingLockScreenState;
- (void).cxx_destruct;

@end
