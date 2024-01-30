@class HDSPSleepLockScreenStateMachine, NSString, HDSPEnvironment, NSDictionary, NSDate, HKSPSleepScheduleModel, HDSPSleepLockScreenAssertionManager;
@protocol NAScheduler;

@interface HDSPSleepLockScreenManager : NSObject <HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenAssertionManagerDelegate, HKSPSensitiveUIObserver, HDSPDiagnosticsProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPGoodMorningAlertObserver, HDSPEnvironmentAware> {
    long long _state;
    long long _overrideState;
    NSDictionary *_overrideUserInfo;
}

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } sleepLockScreenLock;
@property (readonly, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly, nonatomic) HDSPSleepLockScreenAssertionManager *assertionManager;
@property (nonatomic) long long currentLockScreenState;
@property (copy, nonatomic) id /* block */ didUpdateAlertAssertion;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)presentAlertForGoodMorning;
- (void)dismissAlertForGoodMorning;
- (BOOL)_lock_overridingLockScreenState;
- (void)environmentDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (void)sensitiveUIStateChanged;
- (long long)_lock_resolvedLockScreenState;
- (id)_currentState;
- (id)initWithEnvironment:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 source:(id)a1 didUpdateSleepSettings:(id)a2;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;
- (void)lockScreenDidConnect;
- (void)sleepLockScreenStateDidChange:(long long)a0 previousState:(long long)a1;
- (id)diagnosticDescription;
- (void)overrideLockScreenState:(long long)a0 userInfo:(id)a1;
- (void)_lock_updateLockScreenAssertion;
- (BOOL)_lock_shouldShowLockScreenForState:(long long)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (id)initWithEnvironment:(id)a0 assertionManager:(id)a1;

@end
