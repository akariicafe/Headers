@interface SAMPGetRoutes : SADomainCommand

@property (nonatomic) double routeTimeout;

+ (id)getRoutes;
+ (id)getRoutesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
