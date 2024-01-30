@class NSArray, NSString, UITableView;

@interface WFWifiTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) NSArray *allNetworks;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)triggerTableViewController:(id)a0 didFinishWithAnySelected:(BOOL)a1 orSelectedOptions:(id)a2;
- (void)triggerTableViewControllerDidCancel:(id)a0;
- (id)initWithTrigger:(id)a0 triggerManager:(id)a1 mode:(unsigned long long)a2;
- (id)infoForSection:(long long)a0;
- (void)presentNavControllerWithRootViewController:(id)a0;
- (id)fetchWiFiNetworks;

@end
