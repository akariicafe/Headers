@class GEOSnappedRoutePath, VKPolylineOverlay, GEOComposedRouteSection;

@interface VKPolylinePath : NSObject {
    VKPolylineOverlay *_overlay;
    struct vector<gm::Matrix<float, 2, 1>, std::__1::allocator<gm::Matrix<float, 2, 1> > > { struct Matrix<float, 2, 1> *__begin_; struct Matrix<float, 2, 1> *__end_; struct __compressed_pair<gm::Matrix<float, 2, 1> *, std::__1::allocator<gm::Matrix<float, 2, 1> > > { struct Matrix<float, 2, 1> *__value_; } __end_cap_; } _points;
    struct optional<std::__1::vector<double, std::__1::allocator<double> > > { BOOL _hasValue; union ValueUnion { unsigned char data[24]; struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } type; } _value; } _distances;
    BOOL _distanceSnapping;
    double _sectionLengthScaleFactor;
}

@property (nonatomic) unsigned char trafficSpeed;
@property (readonly, nonatomic) struct Matrix<float, 2, 1> { float x0[2]; } *points;
@property (readonly, nonatomic) unsigned int pointCount;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeStart;
@property (nonatomic) struct PolylineCoordinate { unsigned int index; float offset; } routeEnd;
@property (readonly) BOOL hasCompletedMapMatching;
@property (readonly) BOOL isMapMatched;
@property (readonly, nonatomic) GEOComposedRouteSection *section;
@property (readonly, nonatomic) GEOSnappedRoutePath *snappedPath;
@property (nonatomic) double startDistance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateDistances:(BOOL)a0;
- (id)initWithOverlay:(id)a0 section:(id)a1;
- (id)initWithOverlay:(id)a0 section:(id)a1 routeStartIndex:(unsigned int)a2 routeEndIndex:(unsigned int)a3;
- (void)assignTo:(id)a0 withSegment:(const struct TrafficSegment { unsigned int x0; unsigned char x1; } *)a1;
- (void)assignPoints:(struct Matrix<float, 2, 1> { float x0[2]; } *)a0 count:(unsigned int)a1;
- (id)initWithOverlay:(id)a0 snappedPath:(id)a1;
- (void)splitTrafficSegmentationAndAddTo:(id)a0 with:(struct TrafficSegmentsAlongRoute { struct vector<md::TrafficSegment, std::__1::allocator<md::TrafficSegment> > { struct TrafficSegment *x0; struct TrafficSegment *x1; struct __compressed_pair<md::TrafficSegment *, std::__1::allocator<md::TrafficSegment> > { struct TrafficSegment *x0; } x2; } x0; } *)a1 shouldSnap:(BOOL)a2;
- (id)description;
- (id).cxx_construct;

@end
