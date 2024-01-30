@interface SASettingOpenPhoneSettings : SASettingOpenAppSettings

+ (id)openPhoneSettings;
+ (id)openPhoneSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
