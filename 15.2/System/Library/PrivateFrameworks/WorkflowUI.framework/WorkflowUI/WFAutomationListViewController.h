@class UIView, WFEditAutomationCoordinator, NSArray, NSString, WFHomeManager, WFCreateAutomationCoordinator, WFDatabaseResult, WFTriggerManager, WFDatabase;

@interface WFAutomationListViewController : UITableViewController <WFCreateAutomationCoordinatorDelegate, WFEditAutomationCoordinatorDelegate, WFDatabaseResultObserver, WFHomeManagerEventObserver, HMHomeDelegate, HUTriggerEditorDelegate, UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (readonly, nonatomic) UIView *subheadWrapperView;
@property (retain, nonatomic) NSArray *tableSections;
@property (readonly, nonatomic) WFDatabaseResult *personalAutomationsDatabaseResult;
@property (copy, nonatomic) NSArray *sortedPersonalAutomations;
@property (retain, nonatomic) WFHomeManager *homeManager;
@property (retain, nonatomic) WFCreateAutomationCoordinator *createAutomationCoordinator;
@property (retain, nonatomic) WFEditAutomationCoordinator *editAutomationCoordinator;
@property (nonatomic) BOOL showsAddNewAutomationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDatabase:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)updateUI;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)homeDidUpdateName:(id)a0;
- (void)home:(id)a0 didAddTrigger:(id)a1;
- (void)home:(id)a0 didRemoveTrigger:(id)a1;
- (void)home:(id)a0 didUpdateNameForTrigger:(id)a1;
- (void)home:(id)a0 didUpdateTrigger:(id)a1;
- (void)dealloc;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateTableViewLayoutMargins;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)databaseResultDidChange:(id)a0;
- (void)editAutomationCoordinatorDidFinish:(id)a0;
- (void)editAutomationCoordinatorDidCancel:(id)a0;
- (void)createAutomationCoordinatorDidFinish:(id)a0;
- (void)createAutomationCoordinatorDidCancel:(id)a0;
- (void)updateSubheadLayoutMargins;
- (void)flashAutomationForTriggerID:(id)a0;
- (void)buildTableSections;
- (BOOL)showEditViewForItem:(id)a0;
- (BOOL)showPersonalAutomationEditorForConfiguredTrigger:(id)a0;
- (void)startCreateNewAutomation:(id)a0;
- (void)startCreateNewPersonalAutomation:(id)a0;
- (void)startCreateNewHomeAutomation:(id)a0;
- (void)startCreateNewAutomationFlowAtStep:(unsigned long long)a0;
- (BOOL)showHomeAutomationEditorForTriggerItem:(id)a0;

@end
