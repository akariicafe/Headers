@class HKInteractiveChartOverlayNamedDataSource, HKLineSeries, HKDisplayType, NSString;

@interface _HKOxygenSaturationIntegratedContextDelegate : NSObject <HKOverlayRoomViewControllerIntegratedContextDelegate>

@property (retain, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (retain, nonatomic) HKDisplayType *primaryDisplayType;
@property (nonatomic) unsigned long long context;
@property (readonly, nonatomic) HKLineSeries *alternateLineSeries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
