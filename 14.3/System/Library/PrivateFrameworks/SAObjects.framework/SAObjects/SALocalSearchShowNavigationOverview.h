@interface SALocalSearchShowNavigationOverview : SADomainCommand

+ (id)showNavigationOverview;
+ (id)showNavigationOverviewWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
