@class NSArray, HKHealthRecordsStore;

@interface WDClinicalSettingsViewAnalyticsDataViewController : UITableViewController

@property (retain) NSArray *filePaths;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)fetchClinicalOptInDataCollectionFilePaths;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)description;
- (long long)numberOfSectionsInTableView:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
