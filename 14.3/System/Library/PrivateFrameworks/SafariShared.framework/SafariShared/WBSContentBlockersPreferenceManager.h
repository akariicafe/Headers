@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSContentBlockersPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}

@property (readonly, nonatomic) WBSPerSitePreference *contentBlockersPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (long long)preferencesStoreKeyForPreference:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)getContentBlockersEnabledStateForDomain:(id)a0 withTimeout:(double)a1 fallbackEnabledState:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)offValueForPreference:(id)a0;
- (id)valuesForPreference:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (id)onValueForPreference:(id)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)preferences;

@end
