@class HKSPSleepSettings, NSString, BSTimer, NSHashTable, DNDStateService, HKSPSleepStore;

@interface CSDNDBedtimeController : NSObject <DNDStateUpdateListener, HKSPSleepStoreObserver> {
    DNDStateService *_stateService;
    NSHashTable *_observers;
    BSTimer *_greetingGracePeriodTimer;
    BOOL _deactivated;
    HKSPSleepStore *_sleepStore;
    HKSPSleepSettings *_sleepSettings;
}

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL shouldShowGreeting;
@property (readonly, nonatomic, getter=isGreetingDisabled) BOOL greetingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_setShouldShowGreeting:(BOOL)a0 forceUpdateObservers:(BOOL)a1;
- (void)_setShouldShowGreeting:(BOOL)a0;
- (void)_cleanUpGreetingGracePeriodTimer;
- (void)dealloc;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (id)initWithStateService:(id)a0 initialObserver:(id)a1;

@end
