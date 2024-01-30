@class NSArray, NSMutableArray, UIBarButtonItem;

@interface WFDNSConfigViewController : WFInsetTableViewController

@property (nonatomic) long long originalDNSConfig;
@property (nonatomic) long long dnsConfig;
@property (retain, nonatomic) NSArray *originalServers;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSArray *originalDomains;
@property (retain, nonatomic) NSMutableArray *domains;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (nonatomic) BOOL useInsetGroupedTableView;
@property (copy, nonatomic) id /* block */ saveHandler;

- (void)save:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)initWithConfig:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)initWithConfig:(id)a0 useInsetGroupedTableView:(BOOL)a1;
- (void)_updateSaveEnabled;
- (void)_addServerAtIndexPath:(id)a0;
- (void)_addDomainAtIndexPath:(id)a0;

@end
