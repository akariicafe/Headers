@interface SASettingGetPrivacyLocationService : SASettingGetBool

+ (id)getPrivacyLocationService;
+ (id)getPrivacyLocationServiceWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
