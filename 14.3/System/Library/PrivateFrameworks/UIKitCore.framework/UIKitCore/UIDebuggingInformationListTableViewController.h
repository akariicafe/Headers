@class NSMutableArray;

@interface UIDebuggingInformationListTableViewController : UITableViewController <UIDebuggingInformationViewController> {
    NSMutableArray *topLevelViewControllers;
    NSMutableArray *topLevelViewControllerNames;
}

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)toggleOverlayFullscreen;
- (void)toggleOverlayVisibility;
- (void)addTopLevelViewController:(id)a0 forName:(id)a1;
- (id)topLevelViewControllerForName:(id)a0;
- (void)viewDidLoad;

@end
