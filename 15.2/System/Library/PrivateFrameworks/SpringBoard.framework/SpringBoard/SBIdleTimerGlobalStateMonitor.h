@class NSHashTable, NSString, _SBIdleTimerGlobalNumericSettingMonitor, _SBIdleTimerGlobalBoolSettingMonitor, SBLocalDefaults, SBIdleTimerAggregateClientConfiguration, NSNumber, SBIdleTimerService;
@protocol SBFThermalBlockProvider, BSInvalidatable;

@interface SBIdleTimerGlobalStateMonitor : NSObject <SBPocketStateMonitorObserver, _SBIdleTimerGlobalSettingMonitorDelegate, SBIdleTimerServiceDelegate, SBFThermalConditionObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    NSHashTable *_observers;
    SBIdleTimerService *_idleTimerService;
    SBLocalDefaults *_localDefaults;
    id<SBFThermalBlockProvider> _thermalBlockProvider;
    id /* block */ _dontLockEver;
    id /* block */ _dontDimOrLockOnAC;
    id /* block */ _disableAttentionAwareness;
    id /* block */ _minimumLockscreenIdleTime;
    _SBIdleTimerGlobalNumericSettingMonitor *_autoLockTimeoutMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_batterySaverModeMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_onACPowerMonitor;
    BOOL _autoDimDisabled;
    BOOL _thermalBlocked;
    id<BSInvalidatable> _stateCaptureAssertion;
}

@property (readonly, nonatomic) long long pocketState;
@property (readonly, nonatomic) BOOL dontLockEver;
@property (readonly, nonatomic) BOOL dontDimOrLockOnAC;
@property (readonly, nonatomic) BOOL disableAttentionAwareness;
@property (readonly, nonatomic) double minimumLockscreenIdleTime;
@property (readonly, nonatomic) NSNumber *autoLockTimeout;
@property (readonly, nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive;
@property (readonly, nonatomic, getter=isOnACPower) BOOL onACPower;
@property (readonly, nonatomic, getter=isFaceDownOnTable) BOOL faceDownOnTable;
@property (readonly, nonatomic, getter=isAutoDimDisabled) BOOL autoDimDisabled;
@property (readonly, nonatomic) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration;
@property (readonly, nonatomic, getter=isThermalBlocked) BOOL thermalBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_addStateCaptureHandlers;
- (id)_initWithLocalDefaults:(id)a0 profileConnection:(id)a1 pocketStateMonitor:(id)a2 uiController:(id)a3 idleTimerService:(id)a4 thermalBlockProvider:(id)a5;
- (void)idleTimerGlobalSettingMonitor:(id)a0 changedForReason:(id)a1;
- (id /* block */)_timeIntervalMonitorForProperty:(id)a0 inDefaults:(id)a1 fetchingWith:(id /* block */)a2;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)thermalBlockStatusChanged:(id)a0;
- (void)idleTimerServiceTimeoutAssertionsDidChange:(id)a0;
- (void)_updateAutoDimDisabled;
- (void).cxx_destruct;
- (id)_init;
- (void)pocketStateMonitor:(id)a0 pocketStateDidChangeFrom:(long long)a1 to:(long long)a2;
- (void)_updateObserversForReason:(id)a0;
- (void)_updateFaceDownOnTable;
- (void)dealloc;
- (id /* block */)_boolMonitorForProperty:(id)a0 inDefaults:(id)a1 fetchingWith:(id /* block */)a2;
- (id)_stateCaptureDescription;

@end
