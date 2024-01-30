@interface SASettingOpenStoreSettings : SASettingOpenAppSettings

+ (id)openStoreSettings;
+ (id)openStoreSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
