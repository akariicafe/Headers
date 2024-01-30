@class NSString, VNDetectorCache, VNFrameworkManager, NSMutableSet;

@interface VNSession : NSObject <VNDetectorProviding, VNDetectorReleasing, VNTrackerProviding, VNLegacyForcedCleanupImplementing, VNRequestWarming> {
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

- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)a0;
- (id)init;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (void).cxx_destruct;
- (id)loadedDetectors;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)a0;
- (void)dealloc;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)detectorOfType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)a0;
- (void)releaseCachedResources;
- (void)releaseTracker:(id)a0;
- (void)legacyForcedCleanupWithOptions:(id)a0;
- (id)trackerWithOptions:(id)a0 error:(id *)a1;
- (void)_releaseAllTrackers;
- (void)_releaseDetectorsPassingTest:(id /* block */)a0;
- (void)_enumerateDetectorsUsingBlock:(id /* block */)a0;
- (void)_releaseDetectorsOfClasses:(id)a0;
- (void)_releaseDetectorTypes:(id)a0;
- (void)_releaseAllDetectors;
- (id)_locateDetectorOfClass:(Class)a0 configuredWithOptions:(id)a1 allowingCreation:(BOOL)a2 error:(id *)a3;
- (id)_cachedDetectorOfClass:(Class)a0 configuredWithOptions:(id)a1;
- (void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (BOOL)prepareForPerformingRequestsOfClass:(id)a0 error:(id *)a1;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)a0;

@end
