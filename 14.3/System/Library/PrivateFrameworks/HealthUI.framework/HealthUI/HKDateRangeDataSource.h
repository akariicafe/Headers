@class NSMutableDictionary;
@protocol HKDateRangeDataSourceDelegate;

@interface HKDateRangeDataSource : HKGraphSeriesDataSource <HKDateRangeDataUpdateDelegate>

@property (readonly, nonatomic) id<HKDateRangeDataSourceDelegate> sourceDelegate;
@property (retain, nonatomic) NSMutableDictionary *pathToDataBlock;

- (void)invalidateCache;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (void)blocksRequestedFromPath:(struct { long long x0; long long x1; })a0 toPath:(struct { long long x0; long long x1; })a1 priorityDelegate:(id)a2;
- (id)initWithSourceDelegate:(id)a0;
- (void)dateRangeDataUpdated;
- (id)_fetchAndCacheDataForPath:(struct { long long x0; long long x1; })a0;

@end
