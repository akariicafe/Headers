@interface SASettingOpenWiFi : SASettingOpenSettings

+ (id)openWiFiWithDictionary:(id)a0 context:(id)a1;
+ (id)openWiFi;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
