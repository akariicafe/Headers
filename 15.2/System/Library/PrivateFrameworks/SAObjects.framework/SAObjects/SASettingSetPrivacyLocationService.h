@interface SASettingSetPrivacyLocationService : SASettingSetBool

@property (nonatomic) BOOL userConfirmed;

+ (id)setPrivacyLocationService;
+ (id)setPrivacyLocationServiceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
