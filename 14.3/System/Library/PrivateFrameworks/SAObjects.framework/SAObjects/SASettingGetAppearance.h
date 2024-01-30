@interface SASettingGetAppearance : SASettingGetValue

+ (id)getAppearance;
+ (id)getAppearanceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
