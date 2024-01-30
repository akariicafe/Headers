@interface SASettingSetPrivacyLocationService : SASettingSetBool

@property (nonatomic) BOOL userConfirmed;

+ (id)setPrivacyLocationService;
+ (id)setPrivacyLocationServiceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
