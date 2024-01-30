@class NSString, NSMutableSet;

@interface VNDetectorCache : NSObject <VNDetectorProviding, VNDetectorReleasing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _detectorsLock;
    NSMutableSet *_detectors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (void).cxx_destruct;
- (id)loadedDetectors;
- (id)detectorOfClass:(Class)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (id)detectorOfType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
- (void)cacheDetector:(id)a0;
- (void)evictAllDetectors;
- (void)evictDetectorsPassingTest:(id /* block */)a0;

@end
