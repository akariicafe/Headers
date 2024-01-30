@interface GEOWalkingRouteMatcher : GEORouteMatcher {
    unsigned long long _newStepProgressions;
}

- (double)_maxMatchDistance:(double)a0 routeIndex:(unsigned int)a1 previousMatchGood:(BOOL)a2;
- (double)_modifiedHorizontalAccuracy:(double)a0 routeIndex:(unsigned int)a1;
- (BOOL)_supportsSnapping;
- (void)_finishRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (id)_candidateForSegment:(id)a0 location:(id)a1 previousRouteMatch:(id)a2;
- (id)initWithRoute:(id)a0;

@end
