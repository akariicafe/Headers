@interface SASettingGetGuidedAccess : SASettingGetBool

+ (id)getGuidedAccess;
+ (id)getGuidedAccessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
