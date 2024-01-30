@class NSArray, WFTriggerManager, NSString;
@protocol WFAutomationSelectTypeViewControllerDelegate;

@interface WFAutomationSelectTypeViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) NSArray *tableContent;
@property (weak, nonatomic) id<WFAutomationSelectTypeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildTableContent;
+ (id)allTriggerTypeGroups;
+ (id)allKnownTriggersSortedAsInUI;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)initWithTriggerManager:(id)a0;
- (Class)triggerSourceClassForIndexPath:(id)a0;

@end
