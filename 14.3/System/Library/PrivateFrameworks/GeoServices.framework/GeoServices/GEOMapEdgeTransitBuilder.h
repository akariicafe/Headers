@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {
    struct deque<geo::TransitEdgePiece, std::__1::allocator<geo::TransitEdgePiece> > { struct __split_buffer<geo::TransitEdgePiece *, std::__1::allocator<geo::TransitEdgePiece *> > { struct TransitEdgePiece **__first_; struct TransitEdgePiece **__begin_; struct TransitEdgePiece **__end_; struct __compressed_pair<geo::TransitEdgePiece **, std::__1::allocator<geo::TransitEdgePiece *> > { struct TransitEdgePiece **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<geo::TransitEdgePiece> > { unsigned long long __value_; } __size_; } _pieces;
}

- (void).cxx_destruct;
- (struct Matrix<float, 2, 1> { float x0[2]; })_lastPoint;
- (id)initWithMap:(id)a0 firstPiece:(const struct TransitEdgePiece { struct *x0; unsigned long long x1; struct *x2; struct _retain_ptr<GEOFeature *, geo::_retain_GEOFeature, geo::_release_GEOFeature, geo::_hash_ptr, geo::_equal_ptr> { void /* function */ **x0; struct *x1; struct _retain_GEOFeature { } x2; struct _release_GEOFeature { } x3; } x3; unsigned int x4; BOOL x5; } *)a1;
- (id).cxx_construct;
- (id)_lastTile;
- (struct Matrix<float, 2, 1> { float x0[2]; })_firstPoint;
- (unsigned long long)_maxTileCount;
- (void)_buildCompleteEdge;
- (BOOL)_findEdgeAheadInTile:(id)a0;
- (BOOL)_findEdgeBehindInTile:(id)a0;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (id)_firstTile;

@end
