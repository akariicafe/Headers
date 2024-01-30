@class GEORouteMatcher, GEONavigationMatchResult, GEORoadMatcher, GEOLocationShifter, GEOComposedRoute;

@interface GEONavigationMapMatcher : NSObject {
    BOOL _requiresRoadNetworkData;
    BOOL _shouldSnapRouteMatchToRoute;
    BOOL _shouldWaitForSnappedSegments;
}

@property (retain, nonatomic) GEORouteMatcher *routeMatcher;
@property (retain, nonatomic) GEORoadMatcher *roadMatcher;
@property (retain, nonatomic) GEOLocationShifter *locationShifter;
@property (retain, nonatomic) GEONavigationMatchResult *previousMatchResult;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) BOOL isSimulation;

- (id)initWithRoute:(id)a0;
- (int)transportType;
- (void).cxx_destruct;
- (void)setShouldSnapRouteMatchToRoute:(BOOL)a0;
- (id)_routeMatcherForRoute:(id)a0;
- (id)matchLocation:(id)a0 transportType:(int)a1;
- (void)resetToLocation:(id)a0;
- (void)setRequiresRoadNetworkData:(BOOL)a0;
- (void)setShouldWaitForSnappedSegments:(BOOL)a0;
- (id)updateForReroute:(id)a0 location:(id)a1 routeStartsFromLocation:(BOOL)a2;

@end
