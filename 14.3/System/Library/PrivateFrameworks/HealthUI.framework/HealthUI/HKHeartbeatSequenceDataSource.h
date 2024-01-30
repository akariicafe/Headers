@class HKGraphSeriesDataBlock;

@interface HKHeartbeatSequenceDataSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock;

- (id)init;
- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (struct { long long x0; long long x1; })blockPathForX:(id)a0 zoom:(long long)a1;
- (void)blocksRequestedFromPath:(struct { long long x0; long long x1; })a0 toPath:(struct { long long x0; long long x1; })a1 priorityDelegate:(id)a2;
- (void)setHeartbeatSequencePoints:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unionWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
