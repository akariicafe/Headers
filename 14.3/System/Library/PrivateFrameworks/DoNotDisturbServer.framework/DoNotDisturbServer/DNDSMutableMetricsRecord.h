@class NSDictionary, NSDate;

@interface DNDSMutableMetricsRecord : DNDSMetricsRecord

@property (copy, nonatomic) NSDictionary *metricsByDay;
@property (copy, nonatomic) NSDate *lastDailyHeartbeat;
@property (copy, nonatomic) NSDictionary *metricsByWeek;
@property (copy, nonatomic) NSDate *lastWeeklyHeartbeat;
@property (copy, nonatomic) NSDictionary *metricsByMonth;
@property (copy, nonatomic) NSDate *lastMonthlyHeartbeat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMetricsByDay:(id)a0;
- (void)setMetricsByWeek:(id)a0;
- (void)setMetricsByMonth:(id)a0;
- (void)setLastDailyHeartbeat:(id)a0;
- (void)setLastWeeklyHeartbeat:(id)a0;
- (void)setLastMonthlyHeartbeat:(id)a0;

@end
