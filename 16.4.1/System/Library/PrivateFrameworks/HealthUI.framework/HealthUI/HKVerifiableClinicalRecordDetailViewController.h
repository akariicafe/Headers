@class HKVerifiableClinicalRecordDetailDataProvider;

@interface HKVerifiableClinicalRecordDetailViewController : HKTableViewController

@property (retain, nonatomic) HKVerifiableClinicalRecordDetailDataProvider *dataProvider;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_setUpTableView;
- (id)configureSubtitleCellForItem:(id)a0 tableView:(id)a1;
- (id)configureValueCellForItem:(id)a0 tableView:(id)a1;
- (id)initWithSignedRecord:(id)a0 medicalRecords:(id)a1;

@end
