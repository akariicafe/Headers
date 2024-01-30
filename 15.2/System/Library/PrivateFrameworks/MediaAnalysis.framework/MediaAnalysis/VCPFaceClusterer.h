@class PHPhotoLibrary, VCPPhotosFaceProcessingContext, VCPClusterer;

@interface VCPFaceClusterer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    VCPClusterer *_clusterer;
    VCPPhotosFaceProcessingContext *_context;
    id /* block */ _cancelBlock;
    id /* block */ _extendTimeoutBlock;
}

- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)a0;
- (void).cxx_destruct;
- (BOOL)resetFaceClusteringState:(id *)a0;
- (void)stop;
- (BOOL)_resetFaceClusteringStateWithContext:(id)a0 error:(id *)a1;
- (BOOL)getFaceClusters:(id *)a0 clusteringThreshold:(double *)a1 utilizingGPU:(BOOL *)a2 error:(id *)a3;
- (void)performFaceClusteringAndWait;
- (unsigned long long)numberOfFacesPendingClustering;
- (unsigned long long)clustererState;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)a0;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)a0;
- (void)performFaceClusteringWithCompletion:(id /* block */)a0;
- (BOOL)clustererIsReadyToReturnSuggestions;
- (void)cancelFaceClustering;
- (void)resetClusterer;
- (void)startAndSyncClusterCacheWithLibrary:(BOOL)a0 reply:(id /* block */)a1;
- (id)clusterer;
- (void)performFaceClusteringIfNecessaryAndWait;
- (id)clusteringStatus;
- (id)initWithPhotoLibrary:(id)a0 context:(id)a1 extendTimeoutBlock:(id /* block */)a2 andCancelBlock:(id /* block */)a3;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 withContext:(id)a2 extendTimeout:(id /* block */)a3 cancel:(id /* block */)a4 error:(id *)a5;
- (int)clusterFacesWithExtendTimeoutBlock:(id /* block */)a0 andCancelBlock:(id /* block */)a1;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 error:(id *)a2;
- (int)clusterFacesIfNecessaryWithExtendTimeoutBlock:(id /* block */)a0 andCancelBlock:(id /* block */)a1;

@end
