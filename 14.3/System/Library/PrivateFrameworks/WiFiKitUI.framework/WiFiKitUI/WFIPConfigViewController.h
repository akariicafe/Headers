@class WFTextFieldCell, WFNetworkSettingsConfig;

@interface WFIPConfigViewController : WFInsetTableViewController

@property (retain, nonatomic) WFNetworkSettingsConfig *originalConfig;
@property (retain, nonatomic) WFNetworkSettingsConfig *modifiedConfig;
@property (nonatomic) long long type;
@property (retain, nonatomic) WFTextFieldCell *ipAddressCell;
@property (retain, nonatomic) WFTextFieldCell *subnetMaskCell;
@property (retain, nonatomic) WFTextFieldCell *routerCell;
@property (retain, nonatomic) WFTextFieldCell *prefixCell;
@property (retain, nonatomic) WFTextFieldCell *clientIDCell;
@property (nonatomic) BOOL useInsetGroupedTableView;
@property (copy, nonatomic) id /* block */ saveHandler;

- (void)save:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)didReceiveMemoryWarning;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_updateSaveEnabled;
- (void)_setFirstResponderAfterCell:(id)a0;
- (id)initWithConfig:(id)a0 ipType:(long long)a1 useInsetGroupedTableView:(BOOL)a2;
- (id)initWithConfig:(id)a0 ipType:(long long)a1;

@end
