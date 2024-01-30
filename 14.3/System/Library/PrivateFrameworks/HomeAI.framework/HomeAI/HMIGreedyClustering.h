@class NSString;

@interface HMIGreedyClustering : HMFObject <HMFLogging> {
    struct shared_ptr<homeai::clustering::GreedyClusterer> { struct GreedyClusterer *__ptr_; struct __shared_weak_count *__cntrl_; } _greedyClusterer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (float)faceDistanceFromDescriptor:(id)a0 toDescriptor:(id)a1;
+ (BOOL)addFaceObservations:(id)a0 toFaceDescriptorBuffer:(struct ImageDescriptorBufferFloat32 { void /* function */ **x0; struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } x1; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x0; } x2; } x0; } x2; void *x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; unsigned long long x8; int x9; float *x10; } *)a1 error:(id *)a2;
+ (id)centermostFaceprintInCluster:(id)a0 faceObservations:(id)a1;

- (id)initWithError:(id *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFaceThreshold:(id)a0 singleLinkThreshold:(id)a1 percentConnectionsThreshold:(id)a2 faceprintRevision:(long long)a3 error:(id *)a4;
- (id)convertToClusters:(struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> *x0; struct pair<long long, long long> *x1; struct __compressed_pair<std::__1::pair<long long, long long> *, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> *x0; } x2; } *)a0;
- (id)getClustersWithFaces:(id)a0 error:(id *)a1;

@end
