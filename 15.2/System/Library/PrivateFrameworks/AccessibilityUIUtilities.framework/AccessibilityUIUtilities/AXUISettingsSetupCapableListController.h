@interface AXUISettingsSetupCapableListController : PSListController

@property (nonatomic) BOOL inSetup;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)createWelcomeControllerWithAXSettingsController:(id)a0 title:(id)a1;
- (void)filterBuddy:(id)a0;
- (void)setAllSpecifiersUnsearchable:(id)a0;
- (void)setupLongTitleSpecifiers:(id)a0;

@end
