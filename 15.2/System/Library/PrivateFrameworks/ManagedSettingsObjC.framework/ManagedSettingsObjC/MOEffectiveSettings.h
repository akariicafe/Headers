@class MOEffectiveCellularSettings, MOEffectiveApplicationSettings, MOEffectiveMediaSettings, MOEffectiveDateAndTimeSettings, NSDictionary, MOEffectiveSiriSettings, MOEffectiveWebContentSettings, MOEffectiveAccountSettings, MOEffectiveShieldSettings, MOEffectiveSafariSettings, MOEffectiveAllowedClientSettings, MOEffectivePasscodeSettings, MOEffectiveGameCenterSettings, MOEffectiveAppStoreSettings;

@interface MOEffectiveSettings : NSObject

@property (class, readonly) NSDictionary *effectiveSettings;

@property (readonly) MOEffectiveAccountSettings *account;
@property (readonly) MOEffectiveAllowedClientSettings *allowedClient;
@property (readonly) MOEffectiveAppStoreSettings *appStore;
@property (readonly) MOEffectiveApplicationSettings *application;
@property (readonly) MOEffectiveCellularSettings *cellular;
@property (readonly) MOEffectiveDateAndTimeSettings *dateAndTime;
@property (readonly) MOEffectiveGameCenterSettings *gameCenter;
@property (readonly) MOEffectiveMediaSettings *media;
@property (readonly) MOEffectivePasscodeSettings *passcode;
@property (readonly) MOEffectiveSafariSettings *safari;
@property (readonly) MOEffectiveShieldSettings *shield;
@property (readonly) MOEffectiveSiriSettings *siri;
@property (readonly) MOEffectiveWebContentSettings *webContent;

+ (id)effectiveBoolForKey:(id)a0 withDefault:(BOOL)a1;
+ (void)startObservingChangesWithHandler:(id /* block */)a0;
+ (id)effectiveArrayOfWebDomainsForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveStringForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveWebDomainCategoryPolicyForKey:(id)a0 withDefault:(id)a1;
+ (id)_effectiveWebDomainArrayForItem:(id)a0 forKey:(id)a1;
+ (id)effectiveApplicationCategoryPolicyForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveApplicationForItem:(id)a0 forKey:(id)a1;
+ (id)effectiveWebDomainForItem:(id)a0 forKey:(id)a1;
+ (id)effectiveArrayOfDatasForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveIntegerForKey:(id)a0 withDefault:(long long)a1;
+ (void)subscribeForChangesInGroups:(id)a0 eventName:(id)a1;
+ (id)_effectiveCategoryArrayForItem:(id)a0 forKey:(id)a1;
+ (id)_effectiveApplicationArrayForItem:(id)a0 forKey:(id)a1;
+ (id)effectiveOptionalApplicationForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveArrayOfApplicationsForKey:(id)a0 withDefault:(id)a1;
+ (id)keyForSetting:(id)a0 inGroup:(id)a1;
+ (id)effectiveWebContentFilterPolicyForKey:(id)a0 withDefault:(id)a1;

- (void).cxx_destruct;
- (id)init;

@end
