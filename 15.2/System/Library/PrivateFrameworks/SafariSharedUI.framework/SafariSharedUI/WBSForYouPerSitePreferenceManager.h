@class NSString, WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference;

@interface WBSForYouPerSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {
    WBSPerSitePreferencesSQLiteStore *_preferencesStore;
    WBSPerSitePreference *_preference;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)preferences;
- (id)valuesForPreference:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)preferencesStoreKeyForPreference:(id)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (void)allowedForYouRecommendationsFromRecommendations:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPreferenceValue:(long long)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;

@end
