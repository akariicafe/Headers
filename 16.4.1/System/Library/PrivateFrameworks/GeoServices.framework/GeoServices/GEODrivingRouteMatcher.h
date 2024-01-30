@interface GEODrivingRouteMatcher : GEORouteMatcher {
    double _differentLegScorePenalty;
}

- (id)initWithRoute:(id)a0;
- (id)_candidateForSegment:(id)a0 location:(id)a1 previousRouteMatch:(id)a2;
- (struct { double x0; double x1; })_coordinateFromLocation:(id)a0;
- (double)_courseFromLocation:(id)a0;
- (double)_courseWeightForLocation:(id)a0 accuracyType:(long long)a1;
- (void)_finishRouteMatch:(id)a0 previousRouteMatch:(id)a1 forLocation:(id)a2;
- (double)_maxCourseDelta:(id)a0 previousRouteMatch:(id)a1 timeSinceTunnel:(double)a2;
- (double)_maxMatchDistance:(double)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 previousRouteMatch:(id)a2 timeSinceTunnel:(double)a3;
- (double)_modifiedCourseAccuracyForLocation:(id)a0 previousRouteMatch:(id)a1;
- (double)_modifiedHorizontalAccuracy:(double)a0 routeCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1;
- (id)_startStepForPreviousRouteMatch:(id)a0;
- (BOOL)_supportsSnapping;

@end
