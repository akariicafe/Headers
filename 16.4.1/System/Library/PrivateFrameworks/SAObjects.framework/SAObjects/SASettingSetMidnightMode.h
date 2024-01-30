@interface SASettingSetMidnightMode : SASettingSetBool

+ (id)setMidnightMode;
+ (id)setMidnightModeWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
