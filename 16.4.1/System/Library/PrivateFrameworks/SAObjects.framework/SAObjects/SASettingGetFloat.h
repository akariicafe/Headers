@interface SASettingGetFloat : SASettingGetNumber

+ (id)getFloat;
+ (id)getFloatWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
