@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable> {
    struct shared_ptr<vision::mod::FaceClustering> { struct FaceClustering *__ptr_; struct __shared_weak_count *__cntrl_; } m_ClusteringImpl;
}

- (void).cxx_destruct;
- (id)getClustersWithOptions:(id)a0 error:(id *)a1;
- (long long)_cancellableUpdate:(struct ImageDescriptorBufferAbstract { void /* function */ **x0; struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } x1; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x0; } x2; } x0; } x2; void *x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; } *)a0 facesToMove:(struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> *x0; struct pair<long long, long long> *x1; struct __compressed_pair<std::__1::pair<long long, long long> *, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> *x0; } x2; } *)a1 requestRevision:(unsigned long long)a2;
- (id).cxx_construct;
- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
