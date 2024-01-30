@class HKSleepDaySummary, NSString, HKSleepDay;

@interface HKSleepChartPointUserInfo : NSObject <HKGraphSeriesBlockCoordinateInfo, HKGraphSeriesChartData>

@property (readonly, nonatomic) long long seriesType;
@property (readonly, nonatomic) HKSleepDay *sleepDay;
@property (readonly, nonatomic) HKSleepDaySummary *sleepDaySummary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSeriesType:(long long)a0 sleepDaySummary:(id)a1;
- (id)initWithSeriesType:(long long)a0 sleepDay:(id)a1;

@end
