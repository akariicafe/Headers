@interface SASettingGetAirplaneMode : SASettingGetBool

+ (id)getAirplaneMode;
+ (id)getAirplaneModeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
