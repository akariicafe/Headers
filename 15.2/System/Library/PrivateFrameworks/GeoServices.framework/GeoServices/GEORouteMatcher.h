@class GEOComposedRoute, GEOPathMatcher;

@interface GEORouteMatcher : NSObject {
    GEOComposedRoute *_route;
    GEOPathMatcher *_pathMatcher;
}

@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) BOOL useStrictInitialOnRouteCriteria;
@property (nonatomic) BOOL shouldSnapRouteMatchToRoute;
@property (nonatomic) BOOL useMatchedCoordinateForMatching;

- (struct PolylineCoordinate { unsigned int x0; float x1; })closestRouteCoordinateForLocationCoordinate:(struct { double x0; double x1; })a0;
- (id)matchToClosestPointOnRouteWithLocation:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoute:(id)a0;
- (BOOL)_supportsSnapping;
- (void)_finishRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (id)_candidateForSegment:(id)a0 location:(id)a1 previousRouteMatch:(id)a2;
- (void)dealloc;
- (id)matchToRouteWithLocation:(id)a0;
- (id)matchToRouteWithLocation:(id)a0 previousRouteMatch:(id)a1;
- (void)_startRouteMatch;
- (void)_considerCandidateMatch:(id)a0;
- (void)_forEachSegmentNearLocation:(id)a0 previousRouteMatch:(id)a1 handler:(id /* block */)a2;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_guaranteedRouteCoordinateForLocationCoordinate:(struct { double x0; double x1; })a0;
- (double)distanceToRouteFrom:(struct { double x0; double x1; })a0 startDistance:(double)a1 endDistance:(double)a2;
- (id)_startStepForPreviousRouteMatch:(id)a0;
- (id)_stepForPointIndex:(unsigned int)a0 previousStep:(id)a1;
- (void)_snapRouteMatchToRoad:(id)a0;
- (BOOL)_shouldConsiderCourseForLocation:(id)a0;
- (double)_scoreModifierForStep:(id)a0 previousStep:(id)a1;
- (double)distanceToRouteFrom:(struct { double x0; double x1; })a0;

@end
