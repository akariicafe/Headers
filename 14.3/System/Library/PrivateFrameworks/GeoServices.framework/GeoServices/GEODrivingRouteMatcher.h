@interface GEODrivingRouteMatcher : GEORouteMatcher

- (double)_modifiedHorizontalAccuracy:(double)a0 routeIndex:(unsigned int)a1;
- (BOOL)_supportsSnapping;
- (void)_finishRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (id)_candidateForSegment:(id)a0 location:(id)a1 previousRouteMatch:(id)a2;
- (id)_startStepForPreviousRouteMatch:(id)a0;
- (double)_courseFromLocation:(id)a0;
- (struct { double x0; double x1; })_coordinateFromLocation:(id)a0;
- (double)_maxCourseDelta:(id)a0 previousRouteMatch:(id)a1 timeSinceTunnel:(double)a2;
- (double)_maxMatchDistance:(double)a0 routeIndex:(unsigned int)a1 previousRouteMatch:(id)a2 timeSinceTunnel:(double)a3;
- (double)_courseWeightForLocation:(id)a0 accuracyType:(long long)a1;
- (double)_modifiedCourseAccuracyForLocation:(id)a0 previousRouteMatch:(id)a1;
- (id)initWithRoute:(id)a0;

@end
