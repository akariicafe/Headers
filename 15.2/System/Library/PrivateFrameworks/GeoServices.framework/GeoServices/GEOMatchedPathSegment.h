@class GEOComposedRoute, GEOMapFeatureRoad;

@interface GEOMatchedPathSegment : NSObject {
    struct vector<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> *, std::allocator<std::pair<GEOLocationCoordinate3D, geo::PolylineCoordinate>>> { void *__value_; } __end_cap_; } _coordinates;
}

@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } startRouteCoordinate;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } endRouteCoordinate;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOMapFeatureRoad *road;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } roadRange;
@property (readonly, nonatomic) BOOL isPartialStart;
@property (readonly, nonatomic) BOOL isPartialEnd;

- (struct pair<GEOLocationCoordinate3D, geo::PolylineCoordinate> { struct { double x0; double x1; double x2; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })_interpolatedCoordinateFrom:(const void *)a0 to:(const void *)a1 routeCoordinate:(const struct PolylineCoordinate { unsigned int x0; float x1; } *)a2;
- (struct PolylineCoordinate { unsigned int x0; float x1; })_roadPolylineCoordinateForCoordinate:(struct { double x0; double x1; double x2; })a0 segmentCoordinateIndex:(unsigned long long)a1;
- (struct { double x0; double x1; double x2; })locationCoordinateAt:(unsigned long long)a0;
- (struct PolylineCoordinate { unsigned int x0; float x1; })routeCoordinateAt:(unsigned long long)a0;
- (id)initForFailedMatchWithRoute:(id)a0 range:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a1;
- (id)trimmedSegmentWithinRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a0;
- (id)initWithRoute:(id)a0 road:(id)a1 coordinates:(const void *)a2 roadRange:(struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int x0; float x1; } x0; struct PolylineCoordinate { unsigned int x0; float x1; } x1; })a3;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)debugDescription;

@end
