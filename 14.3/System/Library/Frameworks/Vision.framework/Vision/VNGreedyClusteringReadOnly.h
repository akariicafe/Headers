@class NSString, VNClusteringLogger, VNSuggestionsLogger, NSData;

@interface VNGreedyClusteringReadOnly : NSObject <VNClusteringReadOnly, VNClusteringCancelling> {
    VNClusteringLogger *_clusteringLogger;
    VNSuggestionsLogger *_suggestionsLogger;
    NSString *_cacheFolderPath;
    float _thresholdN;
    float _thresholdSL;
    float _thresholdTorso;
    NSString *_type;
    NSData *_state;
    BOOL _vectorMapReadOnlyFlag;
    unsigned long long _faceprintRevision;
    NSString *_ageClassifierFilePath;
    float _ageClassifierBabyThreshold;
    float _ageClassifierKidThreshold;
    struct shared_ptr<const vision::mod::FaceClustering> { struct FaceClustering *__ptr_; struct __shared_weak_count *__cntrl_; } m_ClusteringImpl_const;
}

+ (id)nonGroupedGroupID;
+ (id)getRepresentativenessForFaces:(id)a0 error:(id *)a1;
+ (id)clustererModelFileNamesFromState:(id)a0 storedInPath:(id)a1 error:(id *)a2;
+ (void)addFaceObservations:(id)a0 toFaceDescriptorBuffer:(struct ImageDescriptorBufferFloat32 { void /* function */ **x0; struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } x1; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x0; } x2; } x0; } x2; void *x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; unsigned long long x8; int x9; float *x10; } *)a1;
+ (void)addFaceObservations:(id)a0 withGroupingIdentifiers:(id)a1 toFaceDescriptorBuffer:(struct ImageDescriptorBufferJoint { void /* function */ **x0; struct vector<long long, std::__1::allocator<long long> > { long long *x0; long long *x1; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x0; } x2; } x1; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x0; } x2; } x0; } x2; void *x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; unsigned long long x8; int x9; float *x10; struct vector<bool, std::__1::allocator<bool> > { unsigned long long *x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long x0; } x2; } x11; struct vector<vision::mod::DescriptorItemSideInfo, std::__1::allocator<vision::mod::DescriptorItemSideInfo> > { struct DescriptorItemSideInfo *x0; struct DescriptorItemSideInfo *x1; struct __compressed_pair<vision::mod::DescriptorItemSideInfo *, std::__1::allocator<vision::mod::DescriptorItemSideInfo> > { struct DescriptorItemSideInfo *x0; } x2; } x12; } *)a2;

- (void).cxx_destruct;
- (BOOL)cancelClustering:(id *)a0;
- (id)suggestionsForClusterIdsWithFlags:(id)a0 affinityThreshold:(float)a1 error:(id *)a2;
- (id)getClusterState:(id *)a0;
- (id)getClusteredIds:(id *)a0;
- (id)getDistanceBetweenLevel1Clusters:(id)a0 error:(id *)a1;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)a0 error:(id *)a1;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:(id)a0 andFaceId:(id)a1 error:(id *)a2;
- (id)getAllClustersFromStateAndReturnError:(id *)a0;
- (id)getClustersForClusterIds:(id)a0 options:(id)a1 error:(id *)a2;
- (id)getDistances:(id)a0 to:(id)a1 error:(id *)a2;
- (id)maximumFaceIdInModelAndReturnError:(id *)a0;
- (BOOL)_parseOptions:(id)a0 error:(id *)a1;
- (void)initializeLogging;
- (void)setGreedyClustererFaces_const:(struct shared_ptr<const vision::mod::FaceClustering> { struct FaceClustering *x0; struct __shared_weak_count *x1; })a0;
- (id)convertUpdatePairsToClusters:(struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> *x0; struct pair<long long, long long> *x1; struct __compressed_pair<std::__1::pair<long long, long long> *, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> *x0; } x2; } *)a0;
- (id)getLevel0ClusteredIdsForFaceId:(id)a0 error:(id *)a1;
- (id).cxx_construct;
- (id)initWithOptions:(id)a0 error:(id *)a1;

@end
