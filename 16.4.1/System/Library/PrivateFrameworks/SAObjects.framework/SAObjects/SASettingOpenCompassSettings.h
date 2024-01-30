@interface SASettingOpenCompassSettings : SASettingOpenAppSettings

+ (id)openCompassSettings;
+ (id)openCompassSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
