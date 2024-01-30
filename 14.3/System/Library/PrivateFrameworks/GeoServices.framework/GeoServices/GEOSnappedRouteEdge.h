@interface GEOSnappedRouteEdge : NSObject {
    struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _localBounds;
    struct vector<GEOPosition2f, std::__1::allocator<GEOPosition2f> > { struct *__begin_; struct *__end_; struct __compressed_pair<GEOPosition2f *, std::__1::allocator<GEOPosition2f> > { struct *__value_; } __end_cap_; } _points;
    struct vector<geo::PolylineCoordinate, std::__1::allocator<geo::PolylineCoordinate> > { struct PolylineCoordinate *__begin_; struct PolylineCoordinate *__end_; struct __compressed_pair<geo::PolylineCoordinate *, std::__1::allocator<geo::PolylineCoordinate> > { struct PolylineCoordinate *__value_; } __end_cap_; } _routeOffsets;
}

@property (readonly, nonatomic) struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad *__ptr_; struct __shared_weak_count *__cntrl_; } mapEdge;
@property (readonly, nonatomic) struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *feature;
@property (readonly, nonatomic) struct { float x0; float x1; } *points;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } routeOffsetA;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } routeOffsetB;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } *routeOffsets;
@property (readonly, nonatomic) unsigned long long mapEdgeOffset;
@property (readonly, nonatomic) BOOL clippedFront;
@property (readonly, nonatomic) BOOL clippedBack;

- (void).cxx_destruct;
- (id)initWithRoadPath:(const struct RoadPathElement<std::__1::shared_ptr<geo::MapEdge> > { void /* function */ **x0; int x1; unsigned long long x2; struct shared_ptr<geo::MapEdge> { struct MapEdge *x0; struct __shared_weak_count *x1; } x3; struct GeoPolyline { struct shared_ptr<const std::__1::vector<zilch::GeoCoordinates, std::__1::allocator<zilch::GeoCoordinates> > > { struct vector<zilch::GeoCoordinates, std::__1::allocator<zilch::GeoCoordinates> > *x0; struct __shared_weak_count *x1; } x0; int x1; } x4; int x5; } *)a0 sectionRect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a1;
- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate { unsigned int x0; float x1; })a0 andB:(struct PolylineCoordinate { unsigned int x0; float x1; })a1 overLength:(float)a2 onRoute:(id)a3;
- (id)description;
- (id).cxx_construct;

@end
