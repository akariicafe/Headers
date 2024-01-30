@class NSUUID, HKHealthStore, HKHealthServicesManager, HKDisplayTypeController, NSMutableArray;

@interface _HKIngestSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate> {
    HKHealthServicesManager *_healthServicesManager;
    HKDisplayTypeController *_displayTypeController;
    NSMutableArray *_dataTypeNames;
    BOOL _deviceEnabled;
    BOOL _deviceFound;
}

@property (copy, nonatomic) NSUUID *deviceIdentifier;
@property (retain, nonatomic) HKHealthStore *healthStore;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)reloadData:(id)a0;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (void)fetchEnabledStatusForPeripheral;
- (id)_initWithHealthStore:(id)a0 displayTypeController:(id)a1 useInsetStyling:(BOOL)a2;

@end
