@interface SASettingSetUIGuidedAccess : SASettingSetBool

+ (id)setUIGuidedAccess;
+ (id)setUIGuidedAccessWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
