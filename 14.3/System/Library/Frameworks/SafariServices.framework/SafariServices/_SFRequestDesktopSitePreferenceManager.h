@class WBSPerSitePreference, NSString, _SFRequestDesktopSiteQuirksManager, NSMutableSet, WBSPerSitePreferencesSQLiteStore;

@interface _SFRequestDesktopSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    _SFRequestDesktopSiteQuirksManager *_quirksManager;
    NSMutableSet *_observers;
}

@property (readonly, nonatomic) WBSPerSitePreference *requestDesktopSitePreference;
@property (nonatomic) BOOL clientPrefersMobileUserAgentByDefault;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (long long)preferencesStoreKeyForPreference:(id)a0;
- (id)init;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getRequestDesktopSitePreferenceForDomain:(id)a0 withTimeout:(double)a1 completionHandler:(id /* block */)a2;
- (long long)_defaultPreferenceValue;
- (void)addRequestDesktopSitePerSitePreferenceObserver:(id)a0;
- (id)offValueForPreference:(id)a0;
- (id)valuesForPreference:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (void)getDefaultPreferenceValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void)removeRequestDesktopSitePerSitePreferenceObserver:(id)a0;
- (void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)a0 domain:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAllRequestDesktopSitePerSitePreferenceValues:(id /* block */)a0;
- (void)_requestDesktopSitePerSitePreferenceDidChange:(id)a0;
- (void)_notifyObserversOfPerSitePreferenceDomainValuesUpdate;
- (id)onValueForPreference:(id)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)initWithPerSitePreferencesStore:(id)a0 quirksManager:(id)a1;
- (id)preferences;
- (void)_notifyObserversOfPerSitePreferenceDefaultValueUpdate;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;

@end
