@class NSNumber, NSString, HKChartSummaryTrendModel, NSMutableArray, UITapGestureRecognizer;

@interface HKOverlayRoomOxygenSaturationViewController : HKOverlayRoomViewController <HKOverlayRoomTrendModelProviding> {
    NSNumber *_preferredOverlayIndex;
    HKChartSummaryTrendModel *_trendModel;
}

@property (retain, nonatomic) NSMutableArray *contextDelegates;
@property (readonly, nonatomic) long long preferredOverlay;
@property (retain, nonatomic) UITapGestureRecognizer *overrideOnboardingRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)_buildAverageDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_configureContextSectionsForFullMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_configureContextSectionsForSingleOverlayMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_createOverrideOnboardingGestureRecognizer;
- (void)_installOverrideOnboardingGestureRecognizer;
- (id)_makeAverageContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 contextDelegate:(id *)a3;
- (id)_makeLatestContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_makePressureOverlayContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 context:(unsigned long long)a3 contextDelegate:(id *)a4;
- (id)_makeRangeContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_makeSleepContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (void)_overrideOnboardingAction:(id)a0;
- (void)_uninstallOverrideOnboardingGestureRecognizer;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 preferredOverlay:(long long)a3 trendModel:(id)a4;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;

@end
