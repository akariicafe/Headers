@class NSString, VNDetectorCache, VNFrameworkManager, NSMutableSet;

@interface VNSession : NSObject <VNDetectorCacheDelegate, VNDetectorProviding, VNDetectorReleasing, VNTrackerProviding, VNLegacyForcedCleanupImplementing, VNRequestWarming> {
    VNFrameworkManager *_frameworkManager;
    VNDetectorCache *_detectorCache_onlyAccessWithDetectorAccessingLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestedTrackerUUIDsAccessLock;
    NSMutableSet *_requestedTrackerUUIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)globalSession;

- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)a0;
- (void)releaseCachedResources;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)loadedDetectors;
- (BOOL)prepareForPerformingRequestsOfClass:(id)a0 error:(id *)a1;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)a0;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)releaseTracker:(id)a0;
- (id)detectorOfType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)init;
- (id)trackerWithOptions:(id)a0 error:(id *)a1;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (void)dealloc;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)a0;
- (void)legacyForcedCleanupWithOptions:(id)a0;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)a0;
- (void)detectorCache:(id)a0 didCacheDetector:(id)a1;
- (void)detectorCache:(id)a0 didEvictDetector:(id)a1;
- (void)releaseCachedResourcesWithCompletionBlock:(id /* block */)a0;
- (id)_cachedDetectorOfClass:(Class)a0 configuredWithOptions:(id)a1;
- (void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;

@end
