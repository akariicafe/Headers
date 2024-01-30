@class VNCVPixelBufferPoolManager, NSString, VNDetectorCache, VNFrameworkManager, VNCIContextManager, VNTrackerManager, VNVTSessionManager;

@interface VNSession : NSObject <VNDetectorCacheDelegate, VNDetectorProviding, VNDetectorReleasing, VNTrackerProviding, VNRPNTrackerResourcesProviding, VNLegacyForcedCleanupImplementing, VNRequestWarming> {
    VNFrameworkManager *_frameworkManager;
    VNDetectorCache *_detectorCache_onlyAccessWithDetectorAccessingLock;
    VNVTSessionManager *_vtSessionManager;
    VNCIContextManager *_ciContextManager;
    VNTrackerManager *_trackerManager;
    VNCVPixelBufferPoolManager *_cvPixelBufferPoolManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)globalSession;

- (void)releaseCachedResourcesWithCompletionBlock:(id /* block */)a0;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)a0;
- (void)releaseCachedResources;
- (id)trackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (id)_cachedDetectorOfClass:(Class)a0 configuredWithOptions:(id)a1;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (id)initWithCachingBehavior:(unsigned long long)a0;
- (void)legacyForcedCleanupWithOptions:(id)a0;
- (id)trackerWithOptions:(id)a0 error:(id *)a1;
- (void)detectorCache:(id)a0 didCacheDetector:(id)a1;
- (void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (id)_cachedTrackerResourcesConfiguredWithOptions:(id)a0;
- (void)dealloc;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)a0;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)a0;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)loadedDetectors;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (id)detectorOfType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (void)releaseTracker:(id)a0;
- (id)init;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)a0;
- (void).cxx_destruct;
- (void)detectorCache:(id)a0 didEvictDetector:(id)a1;

@end
