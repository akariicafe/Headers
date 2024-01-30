@interface SASettingGetWiFi : SASettingGetBool

+ (id)getWiFi;
+ (id)getWiFiWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
