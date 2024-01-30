@class NSString, NSArray, WFWorkflow, WFConfiguredTriggerRecord, WFTrigger, UITableView;
@protocol WFAutomationSummaryViewControllerDelegate;

@interface WFAutomationSummaryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) WFConfiguredTriggerRecord *triggerRecord;
@property (readonly, copy, nonatomic) NSString *triggerIdentifier;
@property (readonly, nonatomic) WFTrigger *trigger;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) NSArray *actionIcons;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<WFAutomationSummaryViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)updateUI;
- (void).cxx_destruct;
- (void)loadView;
- (void)didTapDone:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)testAutomation;
- (id)infoForSection:(long long)a0;
- (id)initWithTrigger:(id)a0 triggerIdentifier:(id)a1 workflow:(id)a2 mode:(unsigned long long)a3;
- (void)loadActionDescriptionIcons;
- (void)enabledSwitchChanged:(id)a0;
- (void)promptSwitchChanged:(id)a0;

@end
