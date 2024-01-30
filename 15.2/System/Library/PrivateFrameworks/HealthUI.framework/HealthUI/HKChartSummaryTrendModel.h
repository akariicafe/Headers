@class NSArray;

@interface HKChartSummaryTrendModel : NSObject

@property (readonly, nonatomic) BOOL selectTrendInitially;
@property (readonly, nonatomic) NSArray *timeScopeTrends;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTimeScopeTrends:(id)a0 selectTrendInitially:(BOOL)a1;

@end
