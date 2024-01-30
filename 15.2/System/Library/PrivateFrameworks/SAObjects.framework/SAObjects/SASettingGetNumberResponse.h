@interface SASettingGetNumberResponse : SASettingGetValueResponse

+ (id)getNumberResponse;
+ (id)getNumberResponseWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
