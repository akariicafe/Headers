@class NSArray, NSString, UITableView;

@interface WFWorkoutTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTriggerTableViewControllerDelegate, WFTriggerMultiSelectCellDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)updateUI;
- (void)loadView;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)cell:(id)a0 didSelectOptionWithLeftViewSelected:(BOOL)a1 rightViewSelected:(BOOL)a2;
- (void)triggerTableViewController:(id)a0 didFinishWithAnySelected:(BOOL)a1 orSelectedOptions:(id)a2;
- (void)triggerTableViewControllerDidCancel:(id)a0;
- (id)infoForSection:(long long)a0;

@end
