@interface SASettingOpenStoreSettings : SASettingOpenAppSettings

+ (id)openStoreSettings;
+ (id)openStoreSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
