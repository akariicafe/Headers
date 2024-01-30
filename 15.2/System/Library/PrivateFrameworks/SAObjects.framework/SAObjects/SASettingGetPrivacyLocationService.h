@interface SASettingGetPrivacyLocationService : SASettingGetBool

+ (id)getPrivacyLocationService;
+ (id)getPrivacyLocationServiceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
