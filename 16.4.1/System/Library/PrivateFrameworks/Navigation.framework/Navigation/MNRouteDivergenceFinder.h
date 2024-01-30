@interface MNRouteDivergenceFinder : NSObject {
    double _distancePaddingWhenAlternating;
}

@property (nonatomic) double toleranceMeters;
@property (nonatomic) double minLengthMetersForConvergence;

- (id)init;
- (id)findFirstUniqueRangeBetweenRoute:(id)a0 andRoute:(id)a1;
- (id)findOverlappingSectionsForRoutes:(id)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_closestRouteCoordinateOnRoute:(id)a0 toLocationCoordinate:(struct { double x0; double x1; double x2; })a1 inRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a2;
- (double)_distanceFromCoordinate:(struct { double x0; double x1; double x2; })a0 toSegmentStart:(struct { double x0; double x1; double x2; })a1 segmentEnd:(struct { double x0; double x1; double x2; })a2;
- (void)_findFirstConvergenceBetweenRoute:(id)a0 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 andRoute:(id)a2 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a3 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a4 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a5;
- (void)_findFirstConvergenceBetweenRoute:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1 andRoute:(id)a2 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a3 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a4 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a5;
- (void)_findFirstDivergenceBetweenRoute:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1 andRoute:(id)a2 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a3 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a4 outRouteCoordinate:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a5;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_firstRouteCoordinateWithinToleranceOnRoute:(id)a0 nearCoordinate:(struct { double x0; double x1; double x2; })a1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a2;
- (double)_offsetForCoordinate:(struct { double x0; double x1; double x2; })a0 alongSegmentStart:(struct { double x0; double x1; double x2; })a1 segmentEnd:(struct { double x0; double x1; double x2; })a2;
- (BOOL)_pathsDivergeBetweenRoute:(id)a0 from:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 andRoute:(id)a2 from:(struct PolylineCoordinate { unsigned int x0; float x1; })a3 withinDistance:(double)a4;
- (BOOL)_pointMeetsConvergenceThreshold:(const struct _MNRouteConvergencePoint { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct PolylineCoordinate { unsigned int x0; float x1; } x3; struct PolylineCoordinate { unsigned int x0; float x1; } x4; BOOL x5; BOOL x6; } *)a0 withOtherPoint:(const struct _MNRouteConvergencePoint { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct PolylineCoordinate { unsigned int x0; float x1; } x3; struct PolylineCoordinate { unsigned int x0; float x1; } x4; BOOL x5; BOOL x6; } *)a1 outRouteCoordinateA:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a2 outRouteCoordinateB:(out struct PolylineCoordinate { unsigned int x0; float x1; } *)a3 outDistance:(out double *)a4;
- (void)_populateConvergencePoints:(void *)a0 route:(id)a1 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a2 isRouteA:(BOOL)a3;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_routeCoordinateForLocationCoordinate:(struct { double x0; double x1; double x2; })a0 route:(id)a1 startIndex:(unsigned long long)a2;
- (id)_routesArrayIdentifierStrings:(id)a0;
- (id)_stringForCoordinate:(struct { double x0; double x1; double x2; })a0;
- (id)findAllDivergenceConvergenceBetweenRoute:(id)a0 andRoute:(id)a1;
- (id)findAllOverlapRangesBetweenRoutes:(id)a0;
- (id)findFirstConvergenceBetweenRoute:(id)a0 andRoute:(id)a1;
- (id)findFirstConvergenceBetweenRoute:(id)a0 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 andRoute:(id)a2 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a3;
- (id)findFirstDivergenceBetweenRoute:(id)a0 andRoute:(id)a1;
- (id)findFirstDivergenceBetweenRoute:(id)a0 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 andRoute:(id)a2 fromRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; })a3;

@end
