@class NSString, DNDModeConfigurationService, DNDStateService, NSHashTable, DNDModeConfiguration;

@interface NCModeManager : NSObject <DNDStateUpdateListener, DNDModeConfigurationServiceListener> {
    DNDStateService *_stateService;
    DNDModeConfigurationService *_modeConfigurationService;
    NSHashTable *_observers;
    DNDModeConfiguration *_currentModeConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchCurrentModeConfiguration;
- (void)_updateWithModeConfiguration:(id)a0 previousModeConfiguration:(id)a1;
- (id)currentModeConfiguration;
- (void)setModeConfiguration:(id)a0;

@end
