@interface SASettingOpenMapsSettings : SASettingOpenAppSettings

+ (id)openMapsSettings;
+ (id)openMapsSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
