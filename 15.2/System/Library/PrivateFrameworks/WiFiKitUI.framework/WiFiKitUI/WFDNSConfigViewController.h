@class WFAppearanceProxy, NSArray, NSMutableArray, UIBarButtonItem;

@interface WFDNSConfigViewController : WFInsetTableViewController

@property (nonatomic) long long originalDNSConfig;
@property (nonatomic) long long dnsConfig;
@property (retain, nonatomic) NSArray *originalServers;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSArray *originalDomains;
@property (retain, nonatomic) NSMutableArray *domains;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy;
@property (nonatomic) BOOL shouldShowPrivacyRelayHeader;
@property (nonatomic) long long deviceCapability;
@property (copy, nonatomic) id /* block */ saveHandler;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)save:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)initWithConfig:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateSaveEnabled;
- (BOOL)_isChinaDevice;
- (id)initWithConfig:(id)a0 appearanceProxy:(id)a1;
- (long long)sectionForSectionNumber:(long long)a0;
- (long long)sectionNumberForSection:(long long)a0;
- (double)_configCellLeadingInset;
- (void)_addServerAtIndexPath:(id)a0;
- (void)_addDomainAtIndexPath:(id)a0;

@end
