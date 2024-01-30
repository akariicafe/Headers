@interface BCCAReporter : PBBridgeCAReporter

+ (unsigned long long)routeType;
+ (void)setRouteType:(unsigned long long)a0;
+ (id)descriptionForDiscoverSuccessType:(unsigned long long)a0;
+ (id)discoverRouteDescription;
+ (void)incrementDiscoverSuccessType:(unsigned long long)a0;

@end
