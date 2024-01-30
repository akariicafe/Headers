@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource : HKGraphSeriesDataSource <HKChartDataCacheObserver> {
    struct { long long index; long long zoom; } _lastStartPath;
    struct { long long index; long long zoom; } _lastEndPath;
}

@property (retain, nonatomic) HKChartCache *chartCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (void)_resetCachedPaths;
- (void)blocksRequestedFromPath:(struct { long long x0; long long x1; })a0 toPath:(struct { long long x0; long long x1; })a1 priorityDelegate:(id)a2;
- (void)chartCacheDidUpdate:(id)a0;
- (BOOL)hasAllBlocksAvailableBetweenStartPath:(struct { long long x0; long long x1; })a0 endPath:(struct { long long x0; long long x1; })a1;
- (BOOL)hasAvailableBlocksBetweenStartPath:(struct { long long x0; long long x1; })a0 endPath:(struct { long long x0; long long x1; })a1;
- (BOOL)hasPendingQueriesBetweenStartPath:(struct { long long x0; long long x1; })a0 endPath:(struct { long long x0; long long x1; })a1;

@end
