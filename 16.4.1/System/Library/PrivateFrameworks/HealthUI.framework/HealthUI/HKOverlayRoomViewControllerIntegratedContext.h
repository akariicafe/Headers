@class HKInteractiveChartOverlayViewController, NSMutableDictionary, NSString, HKOverlayRoomApplicationItems, HKDisplayTypeContextItem, HKSampleType;

@interface HKOverlayRoomViewControllerIntegratedContext : NSObject <HKOverlayContext>

@property (retain, nonatomic) HKInteractiveChartOverlayViewController *overlayChartController;
@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems;
@property (retain, nonatomic) HKSampleType *monitoringSampleType;
@property (retain, nonatomic) NSMutableDictionary *displayTypesForTimeScopes;
@property (retain, nonatomic) HKDisplayTypeContextItem *lastUpdatedContextItem;
@property (nonatomic) long long overlayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)distributionContextWithStyle:(long long)a0 namedPredicate:(id)a1 overlayChartController:(id)a2 applicationItems:(id)a3 optionalDelegate:(id)a4 options:(long long)a5 mode:(long long)a6;
+ (id)quantityContextWithIdentifier:(id)a0 overlayChartController:(id)a1 applicationItems:(id)a2 optionalDelegate:(id)a3 seriesOptions:(long long)a4 mode:(long long)a5;
+ (id)quantityContextWithIdentifier:(id)a0 overlayChartController:(id)a1 applicationItems:(id)a2 optionalDelegate:(id)a3 seriesOptions:(long long)a4 mode:(long long)a5 optionalBaseDisplayType:(id)a6;

- (void).cxx_destruct;
- (id)overlayDisplayTypeForTimeScope:(long long)a0;
- (id)contextItemForLastUpdate;
- (id)sampleTypeForDateRangeUpdates;
- (void)updateContextItemForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 completion:(id /* block */)a3;
- (id)_buildMonitoringSampleType;
- (id)_minMaxValueFromChartPoints:(id)a0 displayType:(id)a1 unitPreferenceController:(id)a2 isUnitIncludedInValue:(BOOL *)a3;
- (BOOL)_obsoleteDateRange:(id)a0;
- (id)buildContextItemWithValue:(id)a0 unit:(id)a1 valueContext:(id)a2 forTimeScope:(long long)a3 isUnitIncludedInValue:(BOOL)a4;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)a0;
- (void)fetchCachedDataForTimeScope:(long long)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (id)initWithOverlayChartController:(id)a0 applicationItems:(id)a1 mode:(long long)a2;
- (id)representativeDisplayType;
- (id)unitString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)valueContextString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)valueString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2 isUnitIncludedInValue:(BOOL *)a3;

@end
