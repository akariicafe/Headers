@interface SASettingOpenBackgroundAppRefreshSettings : SASettingOpenSettings

+ (id)openBackgroundAppRefreshSettings;
+ (id)openBackgroundAppRefreshSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
