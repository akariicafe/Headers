@class NSArray, NSString, NSMutableOrderedSet, NSMutableArray, UITableView;

@interface WFAppInFocusTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFAppSearchViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, WFTriggerMultiSelectCellDelegate>

@property (retain, nonatomic) NSMutableOrderedSet *selectedApps;
@property (retain, nonatomic) NSMutableArray *displayNameOfSelectedApps;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)appSearchViewController:(id)a0 didFinishWithApps:(id)a1;
- (void)appSearchViewControllerDidCancel:(id)a0;
- (id)infoForSection:(long long)a0;
- (void)updateDisplayNameOfSelectedApps;
- (void)cell:(id)a0 didSelectOptionWithLeftViewSelected:(BOOL)a1 rightViewSelected:(BOOL)a2;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)presentNavControllerWithRootViewController:(id)a0;

@end
