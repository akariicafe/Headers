@class GEOMapTileFinder, GEOMapAccess;

@interface GEOMapEdgeBuilder : GEOMapRequest {
    BOOL _buildAhead;
    BOOL _buildBehind;
    struct Matrix<float, 2, 1> { float _e[2]; } _firstTilePoint;
    struct Matrix<float, 2, 1> { float _e[2]; } _lastTilePoint;
    GEOMapTileFinder *_currentTileFinder;
    struct unordered_set<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> { struct __hash_table<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<_GEOTileKey, void *> *>, std::allocator<std::__hash_node<_GEOTileKey, void *>>> { struct __hash_node_base<std::__hash_node<_GEOTileKey, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<GEOTileKey>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<GEOTileKey>> { float __value_; } __p3_; } __table_; } _tileKeysSeen;
    BOOL _searchDirection;
}

@property (copy, nonatomic) id /* block */ edgeHandler;
@property (readonly, nonatomic) GEOMapAccess *map;
@property (nonatomic) unsigned long long buildDirection;

- (id).cxx_construct;
- (void)cancel;
- (void).cxx_destruct;
- (struct Matrix<float, 2, 1> { float x0[2]; })_lastPoint;
- (id)initWithMap:(id)a0;
- (BOOL)_findEdgeBehind;
- (void)_buildCompleteEdge;
- (BOOL)_edgeStart:(const void *)a0 end:(const void *)a1 connectsTo:(const void *)a2;
- (BOOL)_findEdgeAhead;
- (BOOL)_findEdgeAheadInTile:(id)a0;
- (BOOL)_findEdgeBehindInTile:(id)a0;
- (BOOL)_findNextEdge;
- (void)_findTilesAdjacentToTile:(const struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned char x3 : 4; union { struct { unsigned short x0 : 10; unsigned short x1 : 10; unsigned short x2 : 12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned short x5 : 16; unsigned char x6 : 6; } x7; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned long x4 : 39; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; struct _GEOS2TileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 3; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 37; } x13; } x2; } *)a0 containingPoint:(const void *)a1 findAhead:(BOOL)a2;
- (struct Matrix<float, 2, 1> { float x0[2]; })_firstPoint;
- (id)_firstTile;
- (id)_lastTile;
- (unsigned long long)_maxTileCount;
- (BOOL)_pointConnects:(const void *)a0 rect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)a1 to:(const struct { double x0; double x1; } *)a2;
- (BOOL)_shouldFindEdgeAhead;
- (BOOL)_shouldFindEdgeBehind;
- (id)_tileFinderForMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (void)buildEdge:(id /* block */)a0;

@end
