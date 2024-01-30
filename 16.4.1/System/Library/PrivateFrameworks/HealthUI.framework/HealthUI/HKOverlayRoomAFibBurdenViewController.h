@class HKInteractiveChartDisplayType, NSCalendar, HKAnalyticsEventSubmissionManager, NSString, HKInteractiveChartDataFormatter, NSNumber, NSObject;
@protocol OS_dispatch_queue, HKSleepDataSourceProvider, HKAddDataViewControllerProvider;

@interface HKOverlayRoomAFibBurdenViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate>

@property (readonly, nonatomic) NSNumber *preferredOverlayIndex;
@property (readonly, nonatomic) long long preferredOverlay;
@property (readonly, nonatomic) id<HKSleepDataSourceProvider> sleepDataSourceProvider;
@property (readonly, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (readonly, nonatomic) id<HKAddDataViewControllerProvider> addDataViewControllerProvider;
@property (readonly, nonatomic) NSCalendar *currentCalendar;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsSubmissionQueue;
@property (readonly, nonatomic) HKAnalyticsEventSubmissionManager *analyticsEventSubmissionManager;
@property (readonly, nonatomic) HKInteractiveChartDisplayType *afibBurdenDisplayType;
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
- (void)processSelectedRangeData:(id)a0 displayType:(id)a1;
- (id)stringForValueRange:(id)a0 timeScope:(long long)a1;
- (BOOL)supportsShowAllFilters;
- (id)_aFibBurdenSeriesForTimeScope:(long long)a0 displayType:(id)a1 mode:(long long)a2 applicationItems:(id)a3;
- (id)_contextItemOrder;
- (id)_displayTypeForOverlayContextItem:(unsigned long long)a0;
- (id)_generateAFibBurdenDisplayTypeWithApplicationItems:(id)a0 mode:(long long)a1;
- (id)_generateOverlayContextsWithPrimaryDisplayType:(id)a0 sleepDataSourceProvider:(id)a1 sleepChartFormatter:(id)a2 overlayChartController:(id)a3 applicationItems:(id)a4;
- (id)_infographicViewControllerForDisplayType:(id)a0 secondaryDisplayType:(id)a1 addDataViewControllerProvider:(id)a2 healthStore:(id)a3;
- (id)_lifeFactorViewControllerForKey:(id)a0 logButtonAction:(id /* block */)a1;
- (id)_overlayContextForOverlayContextItem:(unsigned long long)a0 sleepDataSourceProvider:(id)a1 sleepChartFormatter:(id)a2 overlayChartController:(id)a3 applicationItems:(id)a4;
- (void)contextView:(id)a0 didTapOnInfoButtonAtIndex:(long long)a1;
- (void)didChangeFromContextItem:(id)a0 toContextItem:(id)a1;
- (id)initWithDisplayDate:(id)a0 applicationItems:(id)a1 mode:(long long)a2 sleepDataSourceProvider:(id)a3 sleepChartFormatter:(id)a4 preferredOverlay:(long long)a5 addDataViewControllerProvider:(id)a6;
- (id)initialSelectedContextForMode:(long long)a0 containerIndex:(long long)a1;
- (id)showAllFiltersButtonTitle;

@end
