@class NSCalendar, HKOverlayRoomViewController, HKDisplayType, NSDictionary, HKChartSummaryTrendModel, NSString;

@interface HKOverlayRoomTrendViewController : HKOverlayRoomViewController <HKOverlayRoomTrendModelProviding>

@property (retain, nonatomic) HKDisplayType *baseChartDisplayType;
@property (retain, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (retain, nonatomic) HKOverlayRoomViewController *wrappedOverlayViewController;
@property (retain, nonatomic) NSDictionary *timeScopeRanges;
@property (readonly, nonatomic) long long startingTimeScope;
@property (readonly, nonatomic) long long overrideFirstWeekday;
@property (readonly, nonatomic) NSCalendar *overrideCalendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (BOOL)supportsShowAllFilters;
- (id)_primaryContextForApplicationItems:(id)a0 overlayChartController:(id)a1;
- (id)_primarySectionForApplicationItems:(id)a0 overlayChartController:(id)a1;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithBaseChartDisplayType:(id)a0 trendModel:(id)a1 displayDate:(id)a2 applicationItems:(id)a3 timeScopeRanges:(id)a4 initialTimeScope:(long long)a5 wrappedOverlay:(id)a6 overrideFirstWeekday:(long long)a7 overrideCalendar:(id)a8;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;

@end
