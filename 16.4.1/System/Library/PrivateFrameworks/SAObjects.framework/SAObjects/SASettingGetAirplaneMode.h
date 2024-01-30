@interface SASettingGetAirplaneMode : SASettingGetBool

+ (id)getAirplaneMode;
+ (id)getAirplaneModeWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
