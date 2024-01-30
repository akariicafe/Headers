@interface SASettingOpenNotificationSettings : SASettingOpenSettings

+ (id)openNotificationSettings;
+ (id)openNotificationSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
