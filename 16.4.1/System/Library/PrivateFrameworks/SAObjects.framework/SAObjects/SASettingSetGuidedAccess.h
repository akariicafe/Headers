@interface SASettingSetGuidedAccess : SASettingSetBool

+ (id)setGuidedAccess;
+ (id)setGuidedAccessWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
