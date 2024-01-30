@interface SALocalSearchShowNavigationOverview : SADomainCommand

+ (id)showNavigationOverview;
+ (id)showNavigationOverviewWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
