@class NSString, NSDateComponents;

@interface HKInteractiveChartTimePeriodData : NSObject <HKGraphSeriesChartData>

@property (nonatomic) double timePeriod;
@property (retain, nonatomic) NSString *timePeriodPrefix;
@property (retain, nonatomic) NSDateComponents *statisticsInterval;
@property (nonatomic) long long recordCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
