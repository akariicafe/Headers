@class HKHeartbeatSequenceChartViewController, WDActivityQueryTestController, HKHealthChartFactory, NSMutableArray, HKInteractiveChartOverlayViewController;

@interface WDChartExperimentsChartSection : WDTableViewSection

@property (retain, nonatomic) NSMutableArray *viewControllers;
@property (retain, nonatomic) HKHeartbeatSequenceChartViewController *heartbeatSequenceForUpdate;
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *heartRateController;
@property (retain, nonatomic) WDActivityQueryTestController *activityQueryTestController;
@property (retain, nonatomic) HKHealthChartFactory *healthChartFactory;

- (unsigned long long)numberOfRows;
- (id)_dateFormatter;
- (void).cxx_destruct;
- (void)setUpWithTableViewController:(id)a0;
- (id)titleForHeader;
- (id)cellForRow:(unsigned long long)a0 table:(id)a1;
- (id)_buildHeartSequenceDataFromString:(id)a0;
- (id)_localDateFromString:(id)a0;
- (void)updateTachogram:(id)a0;
- (id)_audiogramSampleForDate:(id)a0 sensitivityData:(id)a1;
- (void)activityQueryTest:(id)a0;

@end
