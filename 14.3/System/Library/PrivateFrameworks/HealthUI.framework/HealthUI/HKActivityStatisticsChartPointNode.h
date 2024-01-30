@class NSNumber, HKValueRange;

@interface HKActivityStatisticsChartPointNode : NSObject

@property (readonly, nonatomic) HKValueRange *dateRange;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSNumber *value;

- (void).cxx_destruct;
- (id)initWithRange:(id)a0 type:(long long)a1 value:(id)a2;

@end
