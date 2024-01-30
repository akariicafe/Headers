@interface SASettingGetMidnightMode : SASettingGetBool

+ (id)getMidnightMode;
+ (id)getMidnightModeWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
