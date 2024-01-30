@interface _SFPageZoomPreferenceManager : WBSPageZoomPreferenceManager

+ (id)sharedManager;

- (void)_historyWasCleared:(id)a0;
- (void)_didRemoveHostnames:(id)a0;
- (void)dealloc;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)setDefaultValue:(id)a0 ofPreference:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithPerSitePreferencesStore:(id)a0;

@end
