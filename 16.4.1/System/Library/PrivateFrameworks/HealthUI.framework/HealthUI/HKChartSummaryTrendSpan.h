@class HKQuantity, NSDateInterval;

@interface HKChartSummaryTrendSpan : NSObject

@property (readonly, nonatomic) NSDateInterval *trendDateInterval;
@property (readonly, nonatomic) HKQuantity *trendAverage;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTrendDateInterval:(id)a0 trendAverage:(id)a1;

@end
