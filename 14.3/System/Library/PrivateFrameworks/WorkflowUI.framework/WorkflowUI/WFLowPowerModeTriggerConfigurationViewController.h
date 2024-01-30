@class NSArray, NSString, UITableView;

@interface WFLowPowerModeTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTriggerMultiSelectCellDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)updateUI;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)cell:(id)a0 didSelectOptionWithLeftViewSelected:(BOOL)a1 rightViewSelected:(BOOL)a2;
- (id)initWithTrigger:(id)a0 triggerManager:(id)a1 mode:(unsigned long long)a2;
- (id)infoForSection:(long long)a0;

@end
