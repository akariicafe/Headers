@interface AXUISettingsSetupCapableListController : PSListController

@property (nonatomic) BOOL inSetup;

- (id)init;
- (void)dealloc;
- (id)createWelcomeControllerWithAXSettingsController:(id)a0 title:(id)a1;
- (void)filterBuddy:(id)a0;
- (void)setAllSpecifiersUnsearchable:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;

@end
