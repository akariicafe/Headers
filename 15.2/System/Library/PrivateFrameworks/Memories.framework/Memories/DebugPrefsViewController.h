@class NSArray, NSMutableDictionary;

@interface DebugPrefsViewController : UITableViewController

@property (retain, nonatomic) NSMutableDictionary *extraObjects;
@property (retain, nonatomic) NSArray *sections;

+ (BOOL)hasDebugPrefs;
+ (BOOL)isDebugPrefs:(id)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)presentOverViewController:(id)a0;
- (void)debugPrefsStop:(id)a0;
- (void)restoreDefaultsInSections:(id)a0;
- (void)restoreDefaults:(id)a0;
- (void)loadDebugMenu;
- (void)switchChanged:(id)a0;
- (void)addAccessory:(id)a0 forMenuItem:(id)a1;

@end
