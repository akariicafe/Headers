@class HKChartSummaryTrendModel, NSString, NSNumber, NSMutableArray;

@interface HKOverlayRoomWalkingViewController : HKOverlayRoomViewController {
    NSNumber *_preferredOverlayIndex;
    NSString *_quantityTypeIdentifier;
    NSMutableArray *_contextDelegates;
    long long _preferredOverlay;
    HKChartSummaryTrendModel *_trendModel;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)createChartOverlayViewController;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 identifier:(id)a3 preferredOverlay:(long long)a4 trendModel:(id)a5;
- (id)showAllFiltersButtonTitle;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id /* block */)_buildAverageDataSourceTitleFromTimeScope;
- (id)_buildWalkingAverageDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;

@end
