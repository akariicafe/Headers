@interface AXUISettingsSetupCapableListController : PSListController

@property (nonatomic) BOOL inSetup;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)reload;
- (void)dealloc;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)viewDidLayoutSubviews;
- (id)createWelcomeControllerWithAXSettingsController:(id)a0 title:(id)a1;
- (void)filterBuddy:(id)a0;
- (void)setAllSpecifiersUnsearchable:(id)a0;
- (void)setupLongTitleSpecifiers:(id)a0;

@end
