@interface SALocalSearchNavigationEnd : SADomainCommand

+ (id)navigationEnd;
+ (id)navigationEndWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
