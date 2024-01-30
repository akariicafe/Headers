@interface SASettingOpenKeyboardSettings : SASettingOpenSettings

+ (id)openKeyboardSettings;
+ (id)openKeyboardSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
