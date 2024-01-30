@interface GEOComposedRouteETAUPosition : NSObject

@property (readonly, nonatomic) struct { unsigned int index; float offset; } routeCoordinate;
@property (readonly, nonatomic) double timeSinceLastUpdate;

- (long long)compare:(id)a0;
- (id)initWithComposedRoute:(id)a0 andUpdateLocation:(id)a1 offset:(double)a2;

@end
