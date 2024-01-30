@class HKQuantity, NSDateInterval;

@interface HKChartSummaryTrendSpan : NSObject

@property (readonly, nonatomic) NSDateInterval *trendDateInterval;
@property (readonly, nonatomic) HKQuantity *trendAverage;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTrendDateInterval:(id)a0 trendAverage:(id)a1;

@end
