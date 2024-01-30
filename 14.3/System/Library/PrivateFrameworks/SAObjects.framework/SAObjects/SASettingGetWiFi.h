@interface SASettingGetWiFi : SASettingGetBool

+ (id)getWiFi;
+ (id)getWiFiWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
