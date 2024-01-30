@class NSNumber, NSMutableArray, HKChartSummaryTrendModel;

@interface HKOverlayRoomRespiratoryRateViewController : HKOverlayRoomViewController {
    NSNumber *_preferredOverlayIndex;
}

@property (readonly, nonatomic) long long preferredOverlay;
@property (retain, nonatomic) NSMutableArray *contextDelegates;
@property (retain, nonatomic) HKChartSummaryTrendModel *trendModel;

- (void).cxx_destruct;
- (id)createChartOverlayViewController;
- (id)controllerTitleWithApplicationItems:(id)a0;
- (id)primaryDisplayTypeWithApplicationItems:(id)a0;
- (id)contextSectionsForMode:(long long)a0 applicationItems:(id)a1 overlayChartController:(id)a2;
- (id)initialSelectedContextForMode:(long long)a0;
- (id)createViewControllerForMode:(long long)a0 displayDate:(id)a1 applicationItems:(id)a2;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 preferredOverlay:(long long)a3 trendModel:(id)a4;
- (long long)_initialPillForPreference:(long long)a0;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_buildRespiratoryRateAverageDataSourceWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;

@end
