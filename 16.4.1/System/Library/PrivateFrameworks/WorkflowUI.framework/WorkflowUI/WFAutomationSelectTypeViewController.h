@class NSArray, WFTriggerManager, NSString;
@protocol WFAutomationSelectTypeViewControllerDelegate;

@interface WFAutomationSelectTypeViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) NSArray *tableContent;
@property (retain, nonatomic) NSArray *availableFocusModes;
@property (weak, nonatomic) id<WFAutomationSelectTypeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allKnownTriggersSortedAsInUI;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)allTriggerTypeGroups;
- (id)buildTableContent;
- (id)initWithTriggerManager:(id)a0;
- (id)triggerForIndexPath:(id)a0;

@end
