@class NSArray, _UIContentUnavailableView, HKHealthRecordsStore;

@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController

@property (retain) NSArray *filePaths;
@property (retain) _UIContentUnavailableView *noDataView;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)fetchClinicalOptInDataCollectionFilePaths;

@end
