@class NSArray;

@interface WDChartExperimentHorizontalSingleLineSource : HKGraphSeriesDataSource

@property (readonly, nonatomic) NSArray *chartPoints;

- (void).cxx_destruct;
- (id)cachedBlockForPath:(struct { long long x0; long long x1; })a0 context:(id)a1;
- (id)_appointmentsToChartPoints:(id)a0;
- (id)initWithAppointments:(id)a0;
- (id)initWithHorizontalSingleLineChartPoints:(id)a0;

@end
