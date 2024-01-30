@interface SASettingGetWiFi : SASettingGetBool

+ (id)getWiFi;
+ (id)getWiFiWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
