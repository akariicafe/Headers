@class NSString;
@protocol WBSPerSitePreferenceManagerDelegate, WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate;

@interface WBSPerSitePreferenceManager : NSObject <WBSPerSitePreferenceManager>

@property (weak, nonatomic) id<WBSPerSitePreferenceManagerStorageDelegate> storageDelegate;
@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDefaultsDelegate> defaultsDelegate;
@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (id)valuesForPreference:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (void)getDefaultPreferenceValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)_validatePreferenceValue:(id)a0 inPreference:(id)a1;
- (void)_recursivelySetDefaultPreferenceValues:(id)a0 orderedKeys:(id)a1 currentIndex:(long long)a2 existingResult:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)setDefaultPreferenceValues:(id)a0 completionHandler:(id /* block */)a1;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)setDefaultValue:(id)a0 ofPreference:(id)a1 completionHandler:(id /* block */)a2;
- (id)preferences;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;

@end
