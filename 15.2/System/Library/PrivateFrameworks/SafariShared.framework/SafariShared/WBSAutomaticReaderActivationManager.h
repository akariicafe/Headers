@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}

@property (readonly, nonatomic) WBSPerSitePreference *readerPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)preferences;
- (id)valuesForPreference:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)onValueForPreference:(id)a0;
- (id)offValueForPreference:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (long long)preferencesStoreKeyForPreference:(id)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void)getAutomaticReaderEnabledByDefaultUsingBlock:(id /* block */)a0;
- (void)getAutomaticReaderEnabledForDomain:(id)a0 usingBlock:(id /* block */)a1;
- (void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (void)getAutomaticReaderStateForDomain:(id)a0 usingBlock:(id /* block */)a1;
- (void)setAutomaticReaderEnabled:(BOOL)a0 forDomain:(id)a1;
- (void)setAutomaticReaderEnabledByDefault:(BOOL)a0 removingExistingPreferencesForSites:(BOOL)a1;
- (void)submitOptInOutStateForAnalytics;

@end
