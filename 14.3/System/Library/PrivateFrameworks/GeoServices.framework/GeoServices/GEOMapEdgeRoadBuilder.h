@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {
    struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge> > { struct __split_buffer<GEORoadEdge *, std::__1::allocator<GEORoadEdge *> > { struct **__first_; struct **__begin_; struct **__end_; struct __compressed_pair<GEORoadEdge **, std::__1::allocator<GEORoadEdge *> > { struct **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<GEORoadEdge> > { unsigned long long __value_; } __size_; } _edges;
}

- (void).cxx_destruct;
- (void)dealloc;
- (struct Matrix<float, 2, 1> { float x0[2]; })_lastPoint;
- (id).cxx_construct;
- (id)_lastTile;
- (unsigned long long)_connectionTypeForEdge:(struct { struct *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct *x5; struct *x6; } *)a0 points:(struct { float x0; float x1; } *)a1 connectingTilePoint:(struct Matrix<float, 2, 1> { float x0[2]; })a2;
- (struct Matrix<float, 2, 1> { float x0[2]; })_firstPoint;
- (unsigned long long)_maxTileCount;
- (void)_buildCompleteEdge;
- (BOOL)_findEdgeAheadInTile:(id)a0;
- (BOOL)_findEdgeBehindInTile:(id)a0;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (id)initWithMap:(id)a0 roadFeature:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *)a1 shouldFlip:(BOOL)a2;
- (id)_firstTile;

@end
