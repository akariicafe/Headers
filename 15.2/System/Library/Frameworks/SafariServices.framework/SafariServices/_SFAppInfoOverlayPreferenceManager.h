@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface _SFAppInfoOverlayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}

@property (readonly, nonatomic) WBSPerSitePreference *appInfoOverlayPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)preferences;
- (long long)_defaultPreferenceValue;
- (id)valuesForPreference:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)onValueForPreference:(id)a0;
- (id)offValueForPreference:(id)a0;
- (long long)preferencesStoreKeyForPreference:(id)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (void)getAppInfoOverlayPreferenceForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)setAppInfoOverlayPreferenceForDomain:(id)a0 settings:(long long)a1 completionHandler:(id /* block */)a2;

@end
