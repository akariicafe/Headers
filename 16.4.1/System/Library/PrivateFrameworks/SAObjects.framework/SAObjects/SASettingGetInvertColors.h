@interface SASettingGetInvertColors : SASettingGetBool

+ (id)getInvertColors;
+ (id)getInvertColorsWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
