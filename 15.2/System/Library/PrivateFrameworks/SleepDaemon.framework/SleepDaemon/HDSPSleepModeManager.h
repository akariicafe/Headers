@class NSString, HDSPSleepModeStateMachine, HKSPObserverSet, NSDate, HKSPSleepScheduleModel, HDSPEnvironment;
@protocol HDSPSleepFocusModeBridge, NAScheduler;

@interface HDSPSleepModeManager : NSObject <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPDiagnosticsProvider, HKSPSleepFocusModeBridgeDelegate, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepScheduleStateObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } sleepModeLock;
@property (readonly, nonatomic) HDSPSleepModeStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *sleepModeObservers;
@property (readonly, nonatomic) id<HDSPSleepFocusModeBridge> sleepFocusModeBridge;
@property (nonatomic) long long sleepMode;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (unsigned long long)_sleepModeChangeReasonForBiomeReason:(unsigned long long)a0 source:(long long)a1;

- (void)significantTimeChangeDetected:(id)a0;
- (BOOL)inUserRequestedSleepMode;
- (void)_automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)environmentDidBecomeReady:(id)a0;
- (BOOL)_isSleepModeDuringWindDownEnabled;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)currentState;
- (void)updateState;
- (BOOL)shouldGoIntoSleepModeDuringState:(unsigned long long)a0;
- (BOOL)_shouldHandleBiomeEvent:(id)a0;
- (BOOL)_isScheduledSleepModeEnabled;
- (void)_enableSleepModeControlCenterModuleIfNeeded;
- (void)addObserver:(id)a0;
- (void)_userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)removeObserver:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)setSleepMode:(long long)a0 reason:(unsigned long long)a1;
- (void)_userTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)_automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)_ensureFocusModeCreatedForSleepMode:(long long)a0 reason:(unsigned long long)a1;
- (void)_powerLogSleepMode:(long long)a0;
- (id)initWithEnvironment:(id)a0 sleepFocusModeBridge:(id)a1;
- (void).cxx_destruct;
- (BOOL)deleteFocusModeWithError:(id *)a0;
- (void)sleepFocusModeBridge:(id)a0 didUpdateSleepFocusConfiguration:(id)a1;
- (void)_createFocusModeIfNeeded;
- (BOOL)isInDemoMode;
- (void)_handleFocusModeEvent:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)notifyObserversForSleepModeChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (id)computeUserVisibleEndDate;
- (void)_withLock:(id /* block */)a0;
- (BOOL)createFocusModeWithError:(id *)a0;
- (void)scheduledEventIsDue;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;

@end
