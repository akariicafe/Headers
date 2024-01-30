@class NSString, VNClusteringLogger, VNSuggestionsLogger, NSData;

@interface VNGreedyClusteringReadOnly : NSObject <VNClusteringReadOnly, VNClusteringCancelling> {
    VNClusteringLogger *_clusteringLogger;
    VNSuggestionsLogger *_suggestionsLogger;
    NSString *_cacheFolderPath;
    NSString *_algorithmType;
    NSData *_state;
    BOOL _vectorMapReadOnlyFlag;
    unsigned long long _faceprintRevision;
    unsigned long long _torsoprintRevision;
    NSString *_ageClassifierFilePath;
    float _ageClassifierBabyThreshold;
    float _ageClassifierKidThreshold;
    struct shared_ptr<const vision::mod::FaceClustering> { struct FaceClustering *__ptr_; struct __shared_weak_count *__cntrl_; } m_ClusteringImpl_const;
}

+ (id)getRepresentativenessForFaces:(id)a0 error:(id *)a1;
+ (id)clustererModelFileNamesFromState:(id)a0 storedInPath:(id)a1 error:(id *)a2;
+ (id)nonGroupedGroupID;
+ (void)addFaceObservations:(id)a0 toFaceDescriptorBuffer:(void *)a1;
+ (void)addFaceObservations:(id)a0 withGroupingIdentifiers:(id)a1 toFaceDescriptorBuffer:(void *)a2;
+ (void)addPersonData:(id)a0 withGroupingIdentifiers:(id)a1 toFaceDescriptorBuffer:(void *)a2;

- (id)initWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)cancelClustering:(id *)a0;
- (id)suggestionsForClusterIdsWithFlags:(id)a0 affinityThreshold:(float)a1 error:(id *)a2;
- (id)getClusterState:(id *)a0;
- (id)getClusteredIds:(id *)a0;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)a0 error:(id *)a1;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:(id)a0 andFaceId:(id)a1 error:(id *)a2;
- (id)getDistanceBetweenLevel1Clusters:(id)a0 error:(id *)a1;
- (id)getAllClustersFromStateAndReturnError:(id *)a0;
- (id)getClustersForClusterIds:(id)a0 options:(id)a1 error:(id *)a2;
- (id)getDistances:(id)a0 to:(id)a1 error:(id *)a2;
- (id)maximumFaceIdInModelAndReturnError:(id *)a0;
- (BOOL)_parseOptions:(id)a0 error:(id *)a1;
- (void)initializeLogging;
- (void)setGreedyClustererFaces_const:(struct shared_ptr<const vision::mod::FaceClustering> { struct FaceClustering *x0; struct __shared_weak_count *x1; })a0;
- (id)convertUpdatePairsToClusters:(void *)a0;
- (id)getLevel0ClusteredIdsForFaceId:(id)a0 error:(id *)a1;

@end
