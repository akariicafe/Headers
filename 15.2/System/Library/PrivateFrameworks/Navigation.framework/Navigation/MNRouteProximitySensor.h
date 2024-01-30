@class GEOComposedRoute, GEORouteMatch, GEOLocation, GEORouteMatcher, GEOComposedRouteStep;

@interface MNRouteProximitySensor : NSObject {
    double _proximityThreshold;
    GEOLocation *_location;
    GEORouteMatch *_routeMatch;
    GEORouteMatcher *_routeMatcher;
}

@property (readonly, nonatomic) GEOLocation *location;
@property (nonatomic) double proximityThreshold;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOLocation *closestPointOnRoute;
@property (readonly, nonatomic) GEOComposedRouteStep *closestStepOnRoute;
@property (readonly, nonatomic) double courseOnRoute;
@property (readonly, nonatomic) double distanceFromOrigin;
@property (readonly, nonatomic) double distanceFromRoute;
@property (readonly, nonatomic) double distanceFromDestination;
@property (readonly, nonatomic) double remainingTimeOnRoute;
@property (readonly, nonatomic) unsigned long long proximity;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRoute:(id)a0;
- (void)updateForLocation:(id)a0;
- (void)_updateRouteMatch;
- (void)_updateProximity;

@end
