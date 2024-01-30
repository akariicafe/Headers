@class NSMutableArray, NSString, NSNumber, HKChartSummaryTrendModel;

@interface HKOverlayRoomWalkingViewController : HKOverlayRoomViewController <HKOverlayRoomTrendModelProviding> {
    NSNumber *_preferredOverlayIndex;
    NSString *_quantityTypeIdentifier;
    NSMutableArray *_contextDelegates;
    long long _preferredOverlay;
}

@property (readonly, nonatomic) HKChartSummaryTrendModel *trendModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id /* block */)_buildAverageDataSourceTitleFromTimeScope;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_buildWalkingAverageDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 identifier:(id)a3 preferredOverlay:(long long)a4 trendModel:(id)a5;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;
- (id)showAllFiltersButtonTitle;

@end
