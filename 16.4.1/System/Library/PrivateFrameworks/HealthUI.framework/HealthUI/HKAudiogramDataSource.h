@class HKGraphSeriesDataBlock;

@interface HKAudiogramDataSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock;

- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (id)_chartPointsFromSensitivityData:(id)a0 leftEarSeries:(BOOL)a1;
- (id)_flatPointsFromSensitivityData:(id)a0 leftEarSeries:(BOOL)a1;
- (struct { long long x0; long long x1; })blockPathForX:(id)a0 zoom:(long long)a1;
- (void)blocksRequestedFromPath:(struct { long long x0; long long x1; })a0 toPath:(struct { long long x0; long long x1; })a1 priorityDelegate:(id)a2;
- (id)initWithFlatSensitivityData:(id)a0 forLeftEar:(BOOL)a1;
- (id)initWithSensitivityData:(id)a0 forLeftEar:(BOOL)a1;

@end
