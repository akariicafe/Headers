@interface SASettingSetNumberResponse : SASettingSetValueResponse

+ (id)setNumberResponse;
+ (id)setNumberResponseWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
