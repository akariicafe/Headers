@interface SASettingGetAppearance : SASettingGetValue

+ (id)getAppearance;
+ (id)getAppearanceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
