@class NSString;

@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData>

@property (nonatomic) double sensitivityDbHL;
@property (nonatomic) BOOL isLeftEar;
@property (nonatomic) BOOL isAverage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
