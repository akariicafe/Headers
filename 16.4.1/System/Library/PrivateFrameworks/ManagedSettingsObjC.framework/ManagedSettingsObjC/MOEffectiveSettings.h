@class MOEffectiveManagedSettingsSettings, MOEffectiveCellularSettings, MOEffectiveApplicationSettings, MOEffectiveMediaSettings, MOEffectiveDateAndTimeSettings, NSDictionary, MOEffectiveDeviceActivitySettings, MOEffectiveSiriSettings, MOEffectiveWebContentSettings, MOEffectiveAccountSettings, MOEffectiveShieldSettings, MOEffectiveUserSettings, MOEffectiveAllowedClientSettings, MOEffectiveSafariSettings, MOEffectivePasscodeSettings, MOEffectiveGameCenterSettings, MOEffectiveAppStoreSettings;

@interface MOEffectiveSettings : NSObject

@property (class, readonly) NSDictionary *effectiveSettings;

@property (readonly) MOEffectiveAccountSettings *account;
@property (readonly) MOEffectiveAllowedClientSettings *allowedClient;
@property (readonly) MOEffectiveAppStoreSettings *appStore;
@property (readonly) MOEffectiveApplicationSettings *application;
@property (readonly) MOEffectiveCellularSettings *cellular;
@property (readonly) MOEffectiveDateAndTimeSettings *dateAndTime;
@property (readonly) MOEffectiveDeviceActivitySettings *deviceActivity;
@property (readonly) MOEffectiveGameCenterSettings *gameCenter;
@property (readonly) MOEffectiveManagedSettingsSettings *managedSettings;
@property (readonly) MOEffectiveMediaSettings *media;
@property (readonly) MOEffectivePasscodeSettings *passcode;
@property (readonly) MOEffectiveSafariSettings *safari;
@property (readonly) MOEffectiveShieldSettings *shield;
@property (readonly) MOEffectiveSiriSettings *siri;
@property (readonly) MOEffectiveUserSettings *user;
@property (readonly) MOEffectiveWebContentSettings *webContent;

+ (id)effectiveArrayOfApplicationsForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveBoolForKey:(id)a0 withDefault:(BOOL)a1;
+ (id)effectiveOptionalApplicationForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveWebDomainCategoryPolicyForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveApplicationForItem:(id)a0 forKey:(id)a1;
+ (id)effectiveArrayOfDatasForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveDataForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveIntegerForKey:(id)a0 withDefault:(long long)a1;
+ (id)effectiveWebContentFilterPolicyForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveWebDomainForItem:(id)a0 forKey:(id)a1;
+ (id)keyForSetting:(id)a0 inGroup:(id)a1;
+ (void)startObservingChangesWithHandler:(id /* block */)a0;
+ (id)effectiveStringForKey:(id)a0 withDefault:(id)a1;
+ (id)_effectiveWebDomainArrayForItem:(id)a0 forKey:(id)a1;
+ (id)_effectiveApplicationArrayForItem:(id)a0 forKey:(id)a1;
+ (void)subscribeForChangesInGroups:(id)a0 eventName:(id)a1;
+ (id)effectiveApplicationCategoryPolicyForKey:(id)a0 withDefault:(id)a1;
+ (id)effectiveArrayOfWebDomainsForKey:(id)a0 withDefault:(id)a1;
+ (id)_effectiveCategoryArrayForItem:(id)a0 forKey:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
