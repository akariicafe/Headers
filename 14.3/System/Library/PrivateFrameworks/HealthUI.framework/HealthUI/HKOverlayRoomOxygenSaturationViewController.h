@class UITapGestureRecognizer, NSMutableArray, NSNumber;

@interface HKOverlayRoomOxygenSaturationViewController : HKOverlayRoomViewController {
    NSNumber *_preferredOverlayIndex;
}

@property (retain, nonatomic) NSMutableArray *contextDelegates;
@property (readonly, nonatomic) long long preferredOverlay;
@property (retain, nonatomic) UITapGestureRecognizer *overrideOnboardingRecognizer;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 preferredOverlay:(long long)a3;
- (void)_installOverrideOnboardingGestureRecognizer;
- (void)_uninstallOverrideOnboardingGestureRecognizer;
- (id)_createOverrideOnboardingGestureRecognizer;
- (void)_overrideOnboardingAction:(id)a0;
- (id)_configureContextSectionsForSingleOverlayMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_configureContextSectionsForFullMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_makeLatestContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_makeRangeContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_makeAverageContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 contextDelegate:(id *)a3;
- (id)_makePressureOverlayContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2 context:(unsigned long long)a3 contextDelegate:(id *)a4;
- (id)_makeSleepContextForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)_buildAverageDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;

@end
