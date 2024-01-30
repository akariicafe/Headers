@class GEORouteMatcher, GEONavigationMatchResult, GEORoadMatcher, GEOLocationShifter, GEOComposedRoute;

@interface GEONavigationMapMatcher : NSObject

@property (retain, nonatomic) GEORouteMatcher *routeMatcher;
@property (retain, nonatomic) GEORoadMatcher *roadMatcher;
@property (retain, nonatomic) GEOLocationShifter *locationShifter;
@property (retain, nonatomic) GEONavigationMatchResult *previousMatchResult;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) BOOL isSimulation;

- (id)updateForReroute:(id)a0 location:(id)a1;
- (void)resetToLocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoute:(id)a0;
- (void)setShouldSnapRouteMatchToRoute:(BOOL)a0;
- (id)matchLocation:(id)a0 transportType:(int)a1;
- (id)_routeMatcherForRoute:(id)a0;
- (int)transportType;

@end
