@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSPageZoomPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}

@property (readonly, nonatomic) WBSPerSitePreference *pageZoomPreference;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageZoomFactors;

- (id)preferences;
- (id)valuesForPreference:(id)a0;
- (void).cxx_destruct;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (long long)preferencesStoreKeyForPreference:(id)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (double)_pageZoomStepToZoomFactor:(long long)a0;
- (void)_getDefaultZoomStep:(id /* block */)a0;
- (void)_getZoomStepForDomain:(id)a0 usingBlock:(id /* block */)a1;
- (void)_incrementOrDecreaseZoomStep:(BOOL)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_canChangePageZoom:(BOOL)a0 fromStep:(long long)a1;
- (void)getPageZoomFactorForURL:(id)a0 usingBlock:(id /* block */)a1;
- (void)zoomInOnURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)zoomOutOnURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetZoomLevelOnURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)getAvailableActionsForURL:(id)a0 usingBlock:(id /* block */)a1;
- (void)removePageZoomPreferencesForHostnames:(id)a0;
- (void)removeAllPageZoomPreferences;

@end
