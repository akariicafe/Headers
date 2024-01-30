@class NSString, NSDictionary, NSHashTable, CCSModuleSettingsProvider;

@interface CCUIModuleSettingsManager : NSObject <CCSModuleSettingsProviderObserver> {
    CCSModuleSettingsProvider *_settingsProvider;
    NSDictionary *_settingsByIdentifier;
    NSHashTable *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_runBlockOnListeners:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)sortModuleIdentifiers:(id)a0 forInterfaceOrientation:(long long)a1;
- (void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(id)a0;
- (id)moduleSettingsForModuleIdentifier:(id)a0 prototypeSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a1;
- (void).cxx_destruct;
- (id)init;
- (void)_loadSettings;
- (id)orderedEnabledModuleIdentifiers;

@end
