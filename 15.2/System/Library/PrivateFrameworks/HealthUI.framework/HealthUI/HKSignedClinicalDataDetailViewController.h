@class HKSignedClinicalDataDetailDataProvider;

@interface HKSignedClinicalDataDetailViewController : HKTableViewController

@property (retain, nonatomic) HKSignedClinicalDataDetailDataProvider *dataProvider;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_setUpTableView;
- (id)initWithSignedRecord:(id)a0 medicalRecords:(id)a1;
- (id)configureSubtitleCellForItem:(id)a0 tableView:(id)a1;
- (id)configureValueCellForItem:(id)a0 tableView:(id)a1;

@end
