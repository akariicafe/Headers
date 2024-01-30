@class NSString, NSNumber, HKChartSummaryTrendModel;

@interface HKOverlayRoomHeartViewController : HKOverlayRoomViewController <HKOverlayRoomTrendModelProviding> {
    NSNumber *_preferredOverlayIndex;
}

@property (readonly, nonatomic) long long preferredOverlay;
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
- (long long)_initialPillForPreference:(long long)a0;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 preferredOverlay:(long long)a3 trendModel:(id)a4;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;

@end
