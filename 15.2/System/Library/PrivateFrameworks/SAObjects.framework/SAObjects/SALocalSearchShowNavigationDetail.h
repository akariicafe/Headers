@interface SALocalSearchShowNavigationDetail : SADomainCommand

+ (id)showNavigationDetail;
+ (id)showNavigationDetailWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
