@class HKGraphSeriesDataBlock;

@interface HKScalarDataSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock;

- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (struct { long long x0; long long x1; })blockPathForX:(id)a0 zoom:(long long)a1;
- (void)blocksRequestedFromPath:(struct { long long x0; long long x1; })a0 toPath:(struct { long long x0; long long x1; })a1 priorityDelegate:(id)a2;
- (id)initWithCGPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(long long)a1 unitForY:(id)a2;
- (id)initWithValuePoints:(id)a0 unitForY:(id)a1;

@end
