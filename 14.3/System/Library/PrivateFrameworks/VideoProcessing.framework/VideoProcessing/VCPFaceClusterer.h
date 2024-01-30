@class VCPPhotosPersistenceDelegate, PVClusterer, PHPhotoLibrary, VCPFaceVisionIntegrating, PVContext;

@interface VCPFaceClusterer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PVClusterer *_clusterer;
    PVContext *_context;
    VCPFaceVisionIntegrating *_visionIntegrating;
    VCPPhotosPersistenceDelegate *_persistenceDelegate;
}

@property (copy, nonatomic) id /* block */ updateBlock;

- (void).cxx_destruct;
- (BOOL)resetFaceClusteringState:(id *)a0;
- (void)startAndSyncClusterCacheWithLibrary:(BOOL)a0 reply:(id /* block */)a1;
- (void)performFaceClusteringAndWait;
- (long long)clustererState;
- (int)clusterFacesWithExtendTimeoutBlock:(id /* block */)a0 andCancelBlock:(id /* block */)a1;
- (id)clusteringStatus;
- (void)performFaceClusteringWithCompletion:(id /* block */)a0;
- (void)cancelFaceClustering;
- (void)performFaceClusteringIfNecessaryAndWait;
- (void)resetClusterer;
- (void)stop;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)a0;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)a0;
- (unsigned long long)numberOfFacesPendingClustering;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 error:(id *)a2;
- (BOOL)getFaceClusters:(id *)a0 clusteringThreshold:(double *)a1 utilizingGPU:(BOOL *)a2 error:(id *)a3;
- (BOOL)clustererIsReadyToReturnSuggestions;
- (int)clusterFacesIfNecessaryWithExtendTimeoutBlock:(id /* block */)a0 andCancelBlock:(id /* block */)a1;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 withContext:(id)a2 extendTimeout:(id /* block */)a3 cancel:(id /* block */)a4 error:(id *)a5;
- (id)initWithPhotoLibrary:(id)a0 andContext:(id)a1;
- (id)clusterer;
- (BOOL)_resetFaceClusteringStateWithContext:(id)a0 error:(id *)a1;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)a0;

@end
