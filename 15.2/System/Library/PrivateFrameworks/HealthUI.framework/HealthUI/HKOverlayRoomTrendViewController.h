@class HKOverlayRoomViewController, HKDisplayType, NSDictionary, HKChartSummaryTrendModel;

@interface HKOverlayRoomTrendViewController : HKOverlayRoomViewController

@property (retain, nonatomic) HKDisplayType *baseChartDisplayType;
@property (retain, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (retain, nonatomic) HKOverlayRoomViewController *wrappedOverlayViewController;
@property (retain, nonatomic) NSDictionary *timeScopeRanges;
@property (readonly, nonatomic) long long startingTimeScope;
@property (readonly, nonatomic) long long overrideFirstWeekday;

- (void).cxx_destruct;
- (BOOL)supportsShowAllFilters;
- (id)createChartOverlayViewController;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithBaseChartDisplayType:(id)a0 trendModel:(id)a1 displayDate:(id)a2 applicationItems:(id)a3 timeScopeRanges:(id)a4 initialTimeScope:(long long)a5 wrappedOverlay:(id)a6 overrideFirstWeekday:(long long)a7;
- (id)_primarySectionForApplicationItems:(id)a0 overlayChartController:(id)a1;
- (id)_primaryContextForApplicationItems:(id)a0 overlayChartController:(id)a1;

@end
