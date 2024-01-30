@class NSArray, NSString, UITableView;

@interface WFAccountListViewController : WFActionSettingsViewController <UITableViewDataSource, UITableViewDelegate, WFAccountLoginViewControllerDelegate>

@property (readonly, nonatomic) Class accountClass;
@property (readonly, weak, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithAction:(id)a0 definition:(id)a1;
- (void)loginViewController:(id)a0 didLoginWithAccount:(id)a1;
- (void)loginViewControllerDidCancel:(id)a0;

@end
