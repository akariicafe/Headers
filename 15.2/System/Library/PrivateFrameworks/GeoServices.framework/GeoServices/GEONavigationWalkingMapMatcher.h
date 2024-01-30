@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher {
    unsigned long long _numProgressionsOffRoute;
}

- (id)matchLocation:(id)a0 transportType:(int)a1;
- (id)_routeMatcherForRoute:(id)a0;
- (int)transportType;

@end
