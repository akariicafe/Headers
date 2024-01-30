@interface SASettingOpenSafariSettings : SASettingOpenAppSettings

+ (id)openSafariSettings;
+ (id)openSafariSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
