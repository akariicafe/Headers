@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher {
    unsigned long long _numProgressionsOffRoute;
}

- (int)transportType;
- (id)_routeMatcherForRoute:(id)a0;
- (id)matchLocation:(id)a0 transportType:(int)a1;

@end
