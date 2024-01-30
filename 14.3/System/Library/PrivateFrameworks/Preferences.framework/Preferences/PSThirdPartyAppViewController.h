@class PSRootController, NSString, PSSpecifierController, UIViewController;
@protocol PSController;

@interface PSThirdPartyAppViewController : UITableViewController <PSController, PSSpecifierControllerDelegate>

@property (retain, nonatomic) UIViewController<PSController> *parent;
@property (retain, nonatomic) PSRootController *root;
@property (retain, nonatomic) PSSpecifierController *specifierController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSpecifier:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (id)readPreferenceValue:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)didReloadSpecifiers;
- (id)specifier;
- (void).cxx_destruct;
- (void)setParentController:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)rootController;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)parentController;
- (void)setRootController:(id)a0;
- (void)viewDidLoad;

@end
