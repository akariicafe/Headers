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

- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)initWithDatabase:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewLayoutMarginsDidChange;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)updateUI;
- (void)home:(id)a0 didAddTrigger:(id)a1;
- (void)home:(id)a0 didRemoveTrigger:(id)a1;
- (void)home:(id)a0 didUpdateNameForTrigger:(id)a1;
- (void)home:(id)a0 didUpdateTrigger:(id)a1;
- (void)homeDidUpdateName:(id)a0;
- (void)updateTableViewLayoutMargins;
- (void)triggerEditor:(id)a0 didFinishWithTriggerBuilder:(id)a1;
- (void)databaseResultDidChange:(id)a0;
- (void)buildTableSections;
- (void)createAutomationCoordinatorDidCancel:(id)a0;
- (void)createAutomationCoordinatorDidFinish:(id)a0;
- (void)editAutomationCoordinatorDidCancel:(id)a0;
- (void)editAutomationCoordinatorDidFinish:(id)a0;
- (void)flashAutomationForTriggerID:(id)a0;
- (BOOL)showEditViewForItem:(id)a0;
- (BOOL)showHomeAutomationEditorForTriggerItem:(id)a0;
- (BOOL)showPersonalAutomationEditorForConfiguredTrigger:(id)a0;
- (void)startCreateNewAutomation;
- (void)startCreateNewAutomationFlowAtStep:(unsigned long long)a0;
- (void)startCreateNewHomeAutomation;
- (void)startCreateNewPersonalAutomation;
- (void)updateSubheadLayoutMargins;

@end
