@interface SASettingGetAppearanceResponse : SASettingGetValueResponse

+ (id)getAppearanceResponse;
+ (id)getAppearanceResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
