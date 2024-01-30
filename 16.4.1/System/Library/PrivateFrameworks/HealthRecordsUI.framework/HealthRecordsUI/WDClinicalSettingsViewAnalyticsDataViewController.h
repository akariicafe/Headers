@class NSArray, _UIContentUnavailableView, HKHealthRecordsStore;

@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController

@property (retain) NSArray *filePaths;
@property (retain) _UIContentUnavailableView *noDataView;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)description;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)fetchClinicalOptInDataCollectionFilePaths;

@end
