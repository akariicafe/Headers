@interface SASettingGetAppearanceResponse : SASettingGetValueResponse

+ (id)getAppearanceResponse;
+ (id)getAppearanceResponseWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
