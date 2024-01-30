@class HKSPThrottler, NSString, HDSPEnvironment, HKSPSleepScheduleModel, NSDate, HDSPSleepWidgetStateMachine;
@protocol HDSPWidgetReloader, NAScheduler, HDSPSleepEventDelegate, HDSPWidgetRelevanceDonor;

@interface HDSPSleepWidgetManager : NSObject <HDSPSleepWidgetStateMachineInfoProvider, HDSPSleepWidgetStateMachineDelegate, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sleepWidgetLock;
    HDSPSleepWidgetStateMachine *_stateMachine;
    id<HDSPWidgetReloader> _widgetReloader;
    HKSPThrottler *_reloadThrottler;
    id<HDSPWidgetRelevanceDonor> _relevanceDonor;
    BOOL _isOverridingWidgetState;
    long long _overrideState;
}

@property (readonly, nonatomic) long long currentSleepWidgetState;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL inUserRequestedSleepMode;
@property (readonly, nonatomic) BOOL isOnboarded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)timeZoneChangeDetected:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)overrideWidgetState:(long long)a0;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)unscheduleStateExpiration;
- (void)scheduleStateExpiration;
- (id)diagnosticDescription;
- (id)eventIdentifiers;
- (id)initWithEnvironment:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)sleepWidgetShouldReload;
- (void)_withLock:(id /* block */)a0;
- (long long)_lock_currentSleepWidgetState;
- (void)environmentDidBecomeReady:(id)a0;
- (void)clearWidgetOverrideState;
- (id)diagnosticInfo;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)significantTimeChangeDetected:(id)a0;
- (id)initWithEnvironment:(id)a0 widgetReloader:(id)a1 reloadThrottler:(id)a2 relevanceDonor:(id)a3;
- (void)sleepWidgetStateDidChange:(long long)a0 previousState:(long long)a1;
- (void)updateState;
- (void).cxx_destruct;

@end
