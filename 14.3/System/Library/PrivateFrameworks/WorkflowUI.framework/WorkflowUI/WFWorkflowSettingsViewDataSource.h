@class WFDatabase, NSArray, WFWorkflow, NSMapTable, WFHealthFeatureAvailability, NSString;
@protocol WFWorkflowSettingsViewDataSourceDelegate;

@interface WFWorkflowSettingsViewDataSource : NSObject <UITableViewDataSource>

@property (weak, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) NSArray *accessResources;
@property (retain, nonatomic) NSMapTable *switchToAccessResourceMapTable;
@property (retain, nonatomic) WFHealthFeatureAvailability *healthFeatureAvailability;
@property (weak, nonatomic) id<WFWorkflowSettingsViewDataSourceDelegate> delegate;
@property (copy, nonatomic) NSString *tentativeWorkflowName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)sections;
- (id)initWithWorkflow:(id)a0 database:(id)a1 healthFeatureAvailability:(id)a2;
- (void)registerCellsForTableView:(id)a0;
- (BOOL)showCustomizeShortcut;
- (BOOL)showAddToHomeScreen;
- (long long)sectionWithOffsetForButtonsSection:(long long)a0;
- (id)tableView:(id)a0 nameCellForRow:(long long)a1;
- (id)buttonCellTypes;
- (long long)buttonCellTypeForRow:(long long)a0;
- (id)tableView:(id)a0 buttonCellForRow:(long long)a1;
- (id)showInCellTypes;
- (long long)rowIndexForShowInCellType:(long long)a0;
- (long long)showInCellTypeForRow:(long long)a0;
- (id)tableView:(id)a0 showInCellForRow:(long long)a1;
- (id)setUpShowInWatchCell:(id)a0;
- (id)setUpShowInShareSheetCell:(id)a0;
- (id)setUpAcceptedTypesCell:(id)a0;
- (id)setupShowOnBedSheetCell:(id)a0;
- (long long)importQuestionsCellCount;
- (id)tableView:(id)a0 importQuestionsCellForRow:(long long)a1;
- (id)setUpImportQuestionsCell:(id)a0;
- (long long)accessResourcesCellCount;
- (id)tableView:(id)a0 accessResourcesCellForRow:(long long)a1;
- (void)toggledAccessResourceSwitch:(id)a0;
- (BOOL)shouldShowBedSheetCell;
- (id)tableView:(id)a0 helpCellForRow:(long long)a1;

@end
