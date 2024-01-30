@class WBSPerSitePreference, NSString, WBSPerSitePreferencesSQLiteStore, WBSDomainWhitelistManager;

@interface WBSAutoplayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSDomainWhitelistManager *_autoplayWhitelistManager;
}

@property (readonly, nonatomic) WBSPerSitePreference *autoplayPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (long long)preferencesStoreKeyForPreference:(id)a0;
- (id)init;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)prepareForTermination;
- (id)initWithPerSitePreferencesStore:(id)a0 whitelistManager:(id)a1;
- (void)getAutoplayPreferenceValueForDomain:(id)a0 withTimeout:(double)a1 fallbackValue:(long long)a2 completionHandler:(id /* block */)a3;
- (void)setAutoplayPreferenceValue:(long long)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)valuesForPreference:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)preferences;

@end
