@class HKSampleType, NSString, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;

@interface _HKCardioFitnessOverlayContext : NSObject <HKOverlayContext>

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKSampleType *monitoringSampleType;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (id)contextItemForLastUpdate;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)_cardioFitnessContextItemWithLevel:(long long)a0 chartPointCount:(id)a1 forTimeScope:(long long)a2;
- (id)_cardioFitnessContextItemWithLevel:(long long)a0 count:(id)a1 unitString:(id)a2;
- (id)_cardioFitnessContextItemWithLevel:(long long)a0 sampleCount:(id)a1;
- (id)initWithMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;

@end
