@class NSMutableArray;

@interface UIDebuggingInformationListTableViewController : UITableViewController <UIDebuggingInformationViewController> {
    NSMutableArray *topLevelViewControllers;
    NSMutableArray *topLevelViewControllerNames;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)toggleOverlayFullscreen;
- (void)toggleOverlayVisibility;
- (void)addTopLevelViewController:(id)a0 forName:(id)a1;
- (id)topLevelViewControllerForName:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
