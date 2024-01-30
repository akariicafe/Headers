@class NSSet, NSString, _PASCFBurstTrie, NSDictionary, ATXMemoryPressureMonitor;

@interface ATXGlobalInterruptingAppModel : NSObject <ATXMemoryPressureObserver> {
    _PASCFBurstTrie *_index;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _assetOffloadedDueToMemoryPressure;
    NSDictionary *_priors;
}

@property (readonly, nonatomic) NSSet *bundleIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithAllInstalledAppsKnownToSpringBoard;

- (void)handleMemoryPressure;
- (void)dealloc;
- (void).cxx_destruct;
- (double)scoreForBundleId:(id)a0 scalingFactor:(double)a1;
- (id)_computePriors;
- (int)indexForBundleId:(id)a0;
- (id)initWithBundleIds:(id)a0;
- (id)loadGlobalPriorsAsset;
- (void)unloadGlobalPriorsAsset;

@end
