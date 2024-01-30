@class PXStatsCalculator;

@interface _PXStoryPPTMeasureInfo : NSObject

@property (readonly, nonatomic) long long metric;
@property (readonly, nonatomic) PXStatsCalculator *statistics;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMetric:(long long)a0;

@end
