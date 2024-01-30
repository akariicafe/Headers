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
- (id)onValueForPreference:(id)a0;
- (id)offValueForPreference:(id)a0;
- (id)valuesForPreference:(id)a0;
- (id)preferenceNameForPreference:(id)a0;
- (id)init;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (void).cxx_destruct;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void)getAutomaticReaderEnabledForDomain:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (void)submitOptInOutStateForAnalytics;
- (void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
- (void)getAutomaticReaderEnabledByDefaultUsingBlock:(id /* block */)a0;
- (void)getAutomaticReaderStateForDomain:(id)a0 usingBlock:(id /* block */)a1;
- (void)setAutomaticReaderEnabled:(BOOL)a0 forDomain:(id)a1;
- (void)setAutomaticReaderEnabledByDefault:(BOOL)a0 removingExistingPreferencesForSites:(BOOL)a1;

@end
