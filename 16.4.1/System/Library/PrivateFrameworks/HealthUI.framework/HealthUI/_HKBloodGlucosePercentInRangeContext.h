@class HKInteractiveChartDisplayType, HKUnitPreferenceController, NSNumberFormatter, HKDisplayTypeController, NSString, HKDisplayTypeContextItem, HKInteractiveChartOverlayViewController;

@interface _HKBloodGlucosePercentInRangeContext : NSObject <HKOverlayContext>

@property (readonly, copy, nonatomic) NSNumberFormatter *percentageFormatter;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedItem;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *baseDisplayType;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
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
- (id)_buildTitleString;
- (double)_fractionForClassificationFromUserInfo:(id)a0;
- (id)_fractionRangeFromChartPoints:(id)a0;
- (id)_stringFromFractionRange:(id)a0;
- (id)_stringFromFractionRangeBound:(id)a0;
- (void)_updateContextItemFromChartPoints:(id)a0;
- (id)initWithBaseDisplayType:(id)a0 classification:(long long)a1 overlayChartController:(id)a2 unitController:(id)a3 displayTypeController:(id)a4;

@end
