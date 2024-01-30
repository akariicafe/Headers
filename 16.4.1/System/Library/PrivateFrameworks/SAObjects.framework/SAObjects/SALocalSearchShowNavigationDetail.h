@interface SALocalSearchShowNavigationDetail : SADomainCommand

+ (id)showNavigationDetail;
+ (id)showNavigationDetailWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
