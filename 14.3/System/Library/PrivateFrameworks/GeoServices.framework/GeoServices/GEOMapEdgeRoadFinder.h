@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder {
    struct unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> > { struct __hash_table<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *>, std::__1::allocator<std::__1::__hash_node<GEORoadEdge, void *> > > { struct __hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> { struct __hash_node_base<std::__1::__hash_node<GEORoadEdge, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::hash<GEORoadEdge> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::equal_to<GEORoadEdge> > { float __value_; } __p3_; } __table_; } _roadsConsidered;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMap:(id)a0 center:(struct { double x0; double x1; })a1 radius:(double)a2;
- (void)_buildersInTile:(id)a0 localPoint:(const struct Matrix<float, 2, 1> { float x0[2]; } *)a1 localRadiusSqr:(float)a2 localSearch:(const struct Box<float, 2> { struct Matrix<float, 2, 1> { float x0[2]; } x0; struct Matrix<float, 2, 1> { float x0[2]; } x1; } *)a3 handler:(id /* block */)a4;
- (BOOL)_checkEdgeForDuplicates:(const struct shared_ptr<geo::MapEdge> { struct MapEdge *x0; struct __shared_weak_count *x1; } *)a0;
- (id).cxx_construct;

@end
