@interface SASettingGetBoolResponse : SASettingGetValueResponse

+ (id)getBoolResponse;
+ (id)getBoolResponseWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
