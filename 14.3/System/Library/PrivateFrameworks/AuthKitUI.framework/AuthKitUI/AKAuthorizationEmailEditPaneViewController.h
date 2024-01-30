@class AKAuthorizationScopeChoices, NSString;

@interface AKAuthorizationEmailEditPaneViewController : AKAuthorizationPaneViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) AKAuthorizationScopeChoices *editableScopeChoices;
@property (retain, nonatomic) NSString *applicationName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 anonymousCellForRow:(unsigned long long)a1;
- (id)tableView:(id)a0 emailCellForRow:(unsigned long long)a1;

@end
