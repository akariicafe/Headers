@interface SASettingOpenCompassSettings : SASettingOpenAppSettings

+ (id)openCompassSettings;
+ (id)openCompassSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
