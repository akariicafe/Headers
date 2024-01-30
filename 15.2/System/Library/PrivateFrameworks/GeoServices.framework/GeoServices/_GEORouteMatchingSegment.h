@class GEOComposedRouteStep;

@interface _GEORouteMatchingSegment : NSObject

@property (nonatomic) unsigned int startPointIndex;
@property (nonatomic) struct { double latitude; double longitude; } startCoordinate;
@property (nonatomic) struct { double latitude; double longitude; } endCoordinate;
@property (retain, nonatomic) GEOComposedRouteStep *step;

- (id)description;
- (void).cxx_destruct;
- (double)distanceFromCoordinate:(struct { double x0; double x1; })a0 outCoordinateOnSegment:(struct { double x0; double x1; } *)a1 outRouteCoordinate:(struct PolylineCoordinate { unsigned int x0; float x1; } *)a2;

@end
