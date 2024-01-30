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

- (id)sortModuleIdentifiers:(id)a0 forInterfaceOrientation:(long long)a1;
- (id)moduleSettingsForModuleIdentifier:(id)a0 prototypeSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a1;
- (void)addObserver:(id)a0;
- (void)_loadSettings;
- (void)orderedEnabledModuleIdentifiersChangedForSettingsProvider:(id)a0;
- (void)removeObserver:(id)a0;
- (id)orderedEnabledModuleIdentifiers;
- (id)init;
- (void).cxx_destruct;
- (void)_runBlockOnListeners:(id /* block */)a0;

@end
