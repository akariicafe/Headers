@interface SASettingOpenGuidedAccess : SASettingOpenSettings

+ (id)openGuidedAccess;
+ (id)openGuidedAccessWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
