@class NSString, HKValueRange;

@interface HKInteractiveChartBloodPressureData : NSObject <HKGraphSeriesChartData>

@property (retain, nonatomic) HKValueRange *systolicRange;
@property (retain, nonatomic) HKValueRange *diastolicRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
