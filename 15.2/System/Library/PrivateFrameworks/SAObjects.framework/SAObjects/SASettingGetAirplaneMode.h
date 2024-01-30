@interface SASettingGetAirplaneMode : SASettingGetBool

+ (id)getAirplaneMode;
+ (id)getAirplaneModeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
