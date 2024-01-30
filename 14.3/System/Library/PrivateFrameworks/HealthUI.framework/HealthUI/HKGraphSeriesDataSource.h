@protocol HKGraphSeriesDataSourceDelegate;

@interface HKGraphSeriesDataSource : NSObject

@property (weak, nonatomic) id<HKGraphSeriesDataSourceDelegate> delegate;
@property (nonatomic) long long minimumZoom;
@property (nonatomic) long long maximumZoom;

- (void)invalidateCache;
- (id)init;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (struct { long long x0; long long x1; })blockPathForX:(id)a0 zoom:(long long)a1;
- (void)blocksRequestedFromPath:(struct { long long x0; long long x1; })a0 toPath:(struct { long long x0; long long x1; })a1 priorityDelegate:(id)a2;
- (BOOL)hasPendingQueriesBetweenStartPath:(struct { long long x0; long long x1; })a0 endPath:(struct { long long x0; long long x1; })a1;
- (BOOL)hasAvailableBlocksBetweenStartPath:(struct { long long x0; long long x1; })a0 endPath:(struct { long long x0; long long x1; })a1;

@end
