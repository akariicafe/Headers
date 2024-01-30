@class NSArray;

@interface WDChartExperimentsSimpleDataSource : HKGraphSeriesDataSource

@property (retain, nonatomic) NSArray *chartPoints;

- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (id)_computeSineData:(double)a0;
- (id)_dosagesToChartPoints:(id)a0 unit:(id)a1;
- (id)initWithDosages:(id)a0 unit:(id)a1;
- (id)initWithSineData:(double)a0;

@end
