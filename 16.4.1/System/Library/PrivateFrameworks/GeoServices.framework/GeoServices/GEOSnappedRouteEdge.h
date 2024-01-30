@class GEOMultiSectionFeature;

@interface GEOSnappedRouteEdge : NSObject {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _localBounds;
    struct vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>> { struct PolylineCoordinate *__begin_; struct PolylineCoordinate *__end_; struct __compressed_pair<geo::PolylineCoordinate *, std::allocator<geo::PolylineCoordinate>> { struct PolylineCoordinate *__value_; } __end_cap_; } _routeOffsets;
    struct vector<GeoCodecsVectorTilePoint, std::allocator<GeoCodecsVectorTilePoint>> { struct GeoCodecsVectorTilePoint *__begin_; struct GeoCodecsVectorTilePoint *__end_; struct __compressed_pair<GeoCodecsVectorTilePoint *, std::allocator<GeoCodecsVectorTilePoint>> { struct GeoCodecsVectorTilePoint *__value_; } __end_cap_; } _points;
}

@property (readonly, nonatomic) struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad *__ptr_; struct __shared_weak_count *__cntrl_; } mapEdge;
@property (readonly, nonatomic) GEOMultiSectionFeature *feature;
@property (readonly, nonatomic) struct GeoCodecsVectorTilePoint { float x0; float x1; } *points;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } routeOffsetA;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } routeOffsetB;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } *routeOffsets;
@property (readonly, nonatomic) unsigned long long mapEdgeOffset;
@property (readonly, nonatomic) BOOL clippedFront;
@property (readonly, nonatomic) BOOL clippedBack;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 andB:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 overLength:(float)a2 onRoute:(id)a3;
- (id)initWithRoadPath:(const void *)a0 sectionRect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a1;

@end
