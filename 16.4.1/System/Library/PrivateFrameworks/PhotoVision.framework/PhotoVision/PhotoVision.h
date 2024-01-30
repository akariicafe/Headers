@class PVVisionAnalyzer, NSIndexSet, PVFaceMerger, PVEventManager, PVClusterer, NSURL, PVContext;
@protocol PVPersistenceDelegate, PVVisionIntegrating, PVNotificationListener;

@interface PhotoVision : NSObject {
    id<PVVisionIntegrating> _visionIntegration;
    id<PVNotificationListener> _notificationListener;
    id<PVPersistenceDelegate> _persistenceDelegate;
    PVContext *_context;
    PVVisionAnalyzer *_analyzer;
    PVFaceMerger *_faceMerger;
    PVEventManager *_eventManager;
    PVClusterer *_clusterer;
    NSURL *_cacheDirUrl;
}

@property (class, readonly, nonatomic) unsigned int minimumFaceAlgorithmUmbrellaVersion;
@property (class, readonly, nonatomic) unsigned int maximumFaceAlgorithmUmbrellaVersion;
@property (class, readonly, copy, nonatomic) NSIndexSet *supportedFaceAlgorithmUmbrellaVersions;
@property (class, readonly, nonatomic) unsigned int minimumSceneAlgorithmUmbrellaVersion;
@property (class, readonly, nonatomic) unsigned int maximumSceneAlgorithmUmbrellaVersion;
@property (class, readonly, copy, nonatomic) NSIndexSet *supportedSceneAlgorithmUmbrellaVersions;

@property (readonly, nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (readonly, nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

+ (BOOL)isAppleInternal;
+ (unsigned long long)faceprintAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned int)a0;
+ (void)setAlgorithmRevisionForRequest:(id)a0 algorithmUmbrellaVersion:(unsigned int)a1 algorithmCollectionType:(unsigned long long)a2;
+ (int)_intValueForKey:(id)a0 defaultValue:(int)a1;
+ (unsigned long long)defaultFaceAnalysisOptionsForFaceAlgorithmUmbrellaVersion:(unsigned int)a0;

- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id *)a0;
- (id)context;
- (void)stop;
- (void).cxx_destruct;
- (void)cancelAllSuggestionRequests;
- (void)cancelSuggestionRequest:(id)a0;
- (BOOL)clustererIsReadyToReturnSuggestions;
- (long long)clustererState;
- (unsigned long long)numberOfFacesPendingClustering;
- (id)requestSuggestionsForFaceClusterSequenceNumbers:(id)a0 withClusteringFlags:(id)a1 updateHandler:(id /* block */)a2 error:(id *)a3;
- (void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)a0;
- (void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)a0;
- (id)analyzeImage:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)buildPersonsWithCanceler:(id)a0 keyFaceUpdateBlock:(id /* block */)a1 extendTimeoutBlock:(id /* block */)a2 error:(id *)a3;
- (void)cancelFaceClustering;
- (id)clusteringStatus;
- (BOOL)getFaceClusters:(id *)a0 clusteringThreshold:(double *)a1 utilizingGPU:(BOOL *)a2 error:(id *)a3;
- (id)initWithPersistenceDelegate:(id)a0 visionIntegration:(id)a1 workingDirectoryURL:(id)a2 faceAlgorithmUmbrellaVersion:(unsigned int)a3 sceneAlgorithmUmbrellaVersion:(unsigned int)a4 notificationListener:(id)a5;
- (id)mergeExistingFaces:(id)a0 withDetectedFaces:(id)a1 forImage:(id)a2;
- (void)performFaceClusteringAndWait;
- (void)performFaceClusteringIfNecessaryAndWait;
- (void)performFaceClusteringWithCompletion:(id /* block */)a0;
- (BOOL)reclusterFacesWithThreshold:(id)a0 shouldRecluster:(BOOL)a1 withContext:(id)a2 error:(id *)a3;
- (void)resetClusterer;
- (BOOL)resetFaceClusteringStateWithContext:(id)a0 error:(id *)a1;
- (void)startAndSyncClusterCacheWithLibrary:(BOOL)a0 reply:(id /* block */)a1;
- (id)suggestedPersonLocalIdentifierForFaceLocalIdentifier:(id)a0 error:(id *)a1;
- (id)suggestedPersonLocalIdentifierForPersonLocalIdentifier:(id)a0 error:(id *)a1;
- (id)suggestionsForFaceClusterSequenceNumbers:(id)a0 error:(id *)a1;

@end
