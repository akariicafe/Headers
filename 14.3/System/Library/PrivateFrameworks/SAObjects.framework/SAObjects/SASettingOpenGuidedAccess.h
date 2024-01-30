@interface SASettingOpenGuidedAccess : SASettingOpenSettings

+ (id)openGuidedAccess;
+ (id)openGuidedAccessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
