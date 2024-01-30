@class WFTextFieldCell, WFAppearanceProxy, WFNetworkSettingsConfig;

@interface WFIPConfigViewController : WFInsetTableViewController

@property (retain, nonatomic) WFNetworkSettingsConfig *originalConfig;
@property (retain, nonatomic) WFNetworkSettingsConfig *modifiedConfig;
@property (nonatomic) long long type;
@property (retain, nonatomic) WFTextFieldCell *ipAddressCell;
@property (retain, nonatomic) WFTextFieldCell *subnetMaskCell;
@property (retain, nonatomic) WFTextFieldCell *routerCell;
@property (retain, nonatomic) WFTextFieldCell *prefixCell;
@property (retain, nonatomic) WFTextFieldCell *clientIDCell;
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy;
@property (copy, nonatomic) id /* block */ saveHandler;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)save:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateSaveEnabled;
- (double)_configCellLeadingInset;
- (void)_setFirstResponderAfterCell:(id)a0;
- (id)initWithConfig:(id)a0 ipType:(long long)a1 appearanceProxy:(id)a2;
- (id)initWithConfig:(id)a0 ipType:(long long)a1;

@end
