@class NSString;

@interface HKInteractiveChartInsulinData : NSObject <HKGraphSeriesChartData>

@property (nonatomic) double basalValue;
@property (readonly, nonatomic) double bolusValue;
@property (nonatomic) double totalValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
