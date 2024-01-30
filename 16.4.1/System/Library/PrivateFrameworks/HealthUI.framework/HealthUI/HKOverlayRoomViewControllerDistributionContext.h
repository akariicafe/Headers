@class NSDictionary, HKInteractiveChartOverlayPredicate;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;

@interface HKOverlayRoomViewControllerDistributionContext : HKOverlayRoomViewControllerIntegratedContext

@property (nonatomic) long long distributionStyle;
@property (weak, nonatomic) id<HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate;
@property (nonatomic) long long options;
@property (retain, nonatomic) HKInteractiveChartOverlayPredicate *namedPredicate;
@property (retain, nonatomic) NSDictionary *styleToMetricColors;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_computeTitleFromStyleAndPredicate;
- (id)_representativeDisplayTypeForStyle:(long long)a0;
- (id)_selectedMetricColorsForDistributionStyle:(long long)a0;
- (id)buildContextItemWithValue:(id)a0 unit:(id)a1 valueContext:(id)a2 forTimeScope:(long long)a3 isUnitIncludedInValue:(BOOL)a4;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)a0;
- (void)fetchCachedDataForTimeScope:(long long)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (id)initWithStyle:(long long)a0 namedPredicate:(id)a1 overlayChartController:(id)a2 applicationItems:(id)a3 optionalDelegate:(id)a4 options:(long long)a5 mode:(long long)a6;
- (id)representativeDisplayType;
- (id)unitString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)valueString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2 isUnitIncludedInValue:(BOOL *)a3;

@end
