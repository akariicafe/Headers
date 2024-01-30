@class NSString, HDSPSleepModeStateMachine, HKSPObserverSet, NSDate, HKSPSleepScheduleModel, HDSPEnvironment;
@protocol HDSPSleepFocusModeBridge, HDSPSleepProactiveBridge, NAScheduler;

@interface HDSPSleepModeManager : NSObject <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPDiagnosticsProvider, HKSPSleepFocusModeBridgeDelegate, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepScheduleStateObserver>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } sleepModeLock;
@property (readonly, nonatomic) HDSPSleepModeStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *sleepModeObservers;
@property (readonly, nonatomic) id<HDSPSleepFocusModeBridge> sleepFocusModeBridge;
@property (readonly, nonatomic) id<HDSPSleepProactiveBridge> sleepProactiveBridge;
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
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (unsigned long long)_sleepModeChangeReasonForBiomeReason:(unsigned long long)a0 source:(long long)a1;

- (BOOL)sleepScreenEnabled;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (BOOL)_shouldHandleBiomeEvent:(id)a0;
- (void)createHomeScreenPageWithCompletion:(id /* block */)a0;
- (id)diagnosticDescription;
- (id)currentState;
- (id)initWithEnvironment:(id)a0;
- (void)_createFocusModeIfNeeded;
- (void)addObserver:(id)a0;
- (void)_userTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)_sleepModeTurnedOnForUnknownReason;
- (BOOL)createFocusModeWithError:(id *)a0;
- (void)_handleFocusModeEvent:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)_powerLogSleepMode:(long long)a0 sleepScreenEnabled:(BOOL)a1;
- (BOOL)_isSleepModeDuringWindDownEnabled;
- (void)_userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (BOOL)deleteFocusModeWithError:(id *)a0;
- (id)diagnosticInfo;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepFocusModeBridge:(id)a0 didUpdateSleepFocusConfiguration:(id)a1;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)significantTimeChangeDetected:(id)a0;
- (void)_ensureFocusModeCreatedForSleepMode:(long long)a0 reason:(unsigned long long)a1;
- (id)computeUserVisibleEndDate;
- (void)scheduledEventIsDue;
- (void)_sleepModeTurnedOffForUnknownReason;
- (void)removeObserver:(id)a0;
- (void)_automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (BOOL)inUserRequestedSleepMode;
- (BOOL)shouldGoIntoSleepModeDuringState:(unsigned long long)a0;
- (BOOL)_isScheduledSleepModeEnabled;
- (void)_automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (BOOL)isInDemoMode;
- (void)setSleepMode:(long long)a0 reason:(unsigned long long)a1;
- (void)updateState;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 sleepFocusModeBridge:(id)a1 sleepProactiveBridge:(id)a2;
- (void)notifyObserversForSleepModeChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;

@end
