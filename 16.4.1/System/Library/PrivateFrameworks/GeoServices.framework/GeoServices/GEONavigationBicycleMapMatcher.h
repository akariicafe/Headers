@interface GEONavigationBicycleMapMatcher : GEONavigationMapMatcher {
    unsigned long long _numProgressionsOffRoute;
}

@property (nonatomic) BOOL useMatchedCoordinateForMatching;

- (int)transportType;
- (double)_approximateMaxSpeedForRoad:(id)a0;
- (struct { double x0; double x1; })_coordinateFromLocation:(id)a0;
- (double)_courseFromLocation:(id)a0;
- (BOOL)_locationMeetsSpeedThresholdForRoadMatch:(id)a0 distanceFromRoute:(double)a1;
- (id)_routeMatcherForRoute:(id)a0;
- (BOOL)_shouldConsiderRoadMatch:(id)a0 overRouteMatch:(id)a1 forLocation:(id)a2;
- (id)matchLocation:(id)a0 transportType:(int)a1;

@end
