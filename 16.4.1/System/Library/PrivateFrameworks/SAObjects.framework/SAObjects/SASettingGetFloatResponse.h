@interface SASettingGetFloatResponse : SASettingGetNumberResponse

+ (id)getFloatResponse;
+ (id)getFloatResponseWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
