@interface SASettingOpenStoreSettings : SASettingOpenAppSettings

+ (id)openStoreSettings;
+ (id)openStoreSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
