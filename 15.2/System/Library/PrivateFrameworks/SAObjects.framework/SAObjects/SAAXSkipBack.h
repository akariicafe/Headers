@interface SAAXSkipBack : SADomainCommand

+ (id)skipBack;
+ (id)skipBackWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
