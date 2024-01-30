@class NSString, NSSet, _PASCFBurstTrie, NSDictionary, ATXMemoryPressureMonitor;

@interface ATXGlobalWidgetPopularityModel : NSObject <ATXMemoryPressureObserver> {
    NSSet *_bundleIdAndKinds;
    _PASCFBurstTrie *_priorsTrie;
    ATXMemoryPressureMonitor *_memoryPressureMonitor;
    BOOL _assetOffloadedDueToMemoryPressure;
    NSDictionary *_priors;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithAllAvailableWidgets;

- (void)handleMemoryPressure;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_computePriors;
- (id)initWithBundleIdAndKinds:(id)a0;
- (double)scoreForBundleIdAndKind:(id)a0 scalingFactor:(double)a1;
- (void)unloadGlobalPriorsAsset;

@end
