@class NSArray, NSString;

@interface HKChartSummaryTimescopeTrend : NSObject

@property (readonly, nonatomic) long long timeScope;
@property (readonly, nonatomic) NSArray *trendSpans;
@property (readonly, nonatomic) NSString *localizableTrendDescription;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initForTimeScope:(long long)a0 trendSpans:(id)a1 localizableTrendDescription:(id)a2;

@end
