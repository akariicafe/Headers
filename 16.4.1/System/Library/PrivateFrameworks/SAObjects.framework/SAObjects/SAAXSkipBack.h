@interface SAAXSkipBack : SADomainCommand

+ (id)skipBackWithDictionary:(id)a0 context:(id)a1;
+ (id)skipBack;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
