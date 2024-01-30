@class HKOverlayContextLocation, NSString, HKDisplayType, HKCardioFitnessLevelData, NSMutableArray, HKChartSummaryTrendModel;
@protocol HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate;

@interface HKOverlayRoomCardioFitnessViewController : HKOverlayRoomViewController <_HKCardioFitnessClassificationContextDelegate, HKCurrentValueViewDataSourceDelegate, HKOverlayRoomTrendModelProviding>

@property (retain, nonatomic) NSMutableArray *contextDelegates;
@property (readonly, nonatomic) long long preferredOverlay;
@property (retain, nonatomic) HKCardioFitnessLevelData *initialCardioFitnessLevelData;
@property (retain, nonatomic) HKDisplayType *representativeDisplayType;
@property (readonly, weak, nonatomic) id<HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate> analyticsDelegate;
@property (nonatomic) unsigned long long interactiveChartOptions;
@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (retain, nonatomic) HKOverlayContextLocation *preferredContextLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (BOOL)infographicSupportedForDisplayType:(id)a0 healthStore:(id)a1;
- (id)infographicViewControllerForDisplayType:(id)a0 healthStore:(id)a1;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)stringForValueRange:(id)a0 timeScope:(long long)a1;
- (id)_buildCardioFitnessLevelDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2 cardioFitnessLevel:(long long)a3;
- (id)_buildTrendContextFromApplicationItems:(id)a0 overlayChartController:(id)a1 overlayMode:(long long)a2;
- (long long)_cardioFitnessLevelForPreferredOverlay:(long long)a0;
- (id)_configureContextSectionsForFullMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 trendModel:(id)a3;
- (id)_configureContextSectionsForSingleOverlayMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 trendModel:(id)a3;
- (long long)_preferredOverlayForCardioFitnessLevel:(long long)a0;
- (void)contextDidUpdate:(id)a0 withCardioFitnessLevelData:(id)a1;
- (void)didChangeFromContextItem:(id)a0 toContextItem:(id)a1;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 preferredOverlay:(long long)a3 analyticsDelegate:(id)a4 interactiveChartOptions:(unsigned long long)a5 trendModel:(id)a6;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;
- (id)showAllFiltersButtonTitle;

@end
