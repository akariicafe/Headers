@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSGeolocationPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate>

@property (readonly, nonatomic) WBSPerSitePreference *geolocationPreference;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferencesStoreKeyForPreference:(id)a0;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (id)valuesForPreference:(id)a0;
- (void)removeAllPermissions;
- (void)_setValue:(id)a0 forDomain:(id)a1 shouldIncludeTimestamp:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void)setDefaultGeolocationSetting:(long long)a0 completionHandler:(id /* block */)a1;
- (id)perSitePreferenceValueForGeolocationSetting:(long long)a0;
- (void)_removePermissionsPassingTest:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)removeAllPermissionsWithCompletionHandler:(id /* block */)a0;
- (BOOL)_isDateLessThanOneDayAgo:(id)a0;
- (void)getGeolocationSettingForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)setGeolocationSetting:(long long)a0 forDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDefaultGeolocationSetting:(long long)a0;
- (void)removeAllTemporaryPermissions;
- (void)removeTemporaryPermissionsAddedAfterDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePermissionsAddedAfterDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)preferences;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;

@end
