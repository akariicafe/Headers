@interface SASettingOpenNotificationSettings : SASettingOpenSettings

+ (id)openNotificationSettings;
+ (id)openNotificationSettingsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
