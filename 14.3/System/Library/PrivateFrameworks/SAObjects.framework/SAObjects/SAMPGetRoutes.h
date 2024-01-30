@interface SAMPGetRoutes : SADomainCommand

@property (nonatomic) double routeTimeout;

+ (id)getRoutes;
+ (id)getRoutesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
