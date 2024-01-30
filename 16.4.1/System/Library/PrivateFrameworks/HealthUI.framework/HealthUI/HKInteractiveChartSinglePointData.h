@class NSString, NSDictionary, HKUnit, NSDateComponents;

@interface HKInteractiveChartSinglePointData : NSObject <HKGraphSeriesChartData>

@property (nonatomic) double value;
@property (retain, nonatomic) HKUnit *unit;
@property (nonatomic) BOOL representsRange;
@property (nonatomic) long long recordCount;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (retain, nonatomic) NSDateComponents *statisticsInterval;
@property (retain, nonatomic) NSDictionary *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
