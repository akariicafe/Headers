@interface SASettingGetNumber : SASettingGetValue

+ (id)getNumber;
+ (id)getNumberWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
