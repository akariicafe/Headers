@class UIPrintPanelViewController;

@interface UIPrintMoreOptionsTableViewController : UITableViewController {
    UIPrintPanelViewController *_printPanelViewController;
    long long _stapleRow;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)updateStaple:(id)a0;
- (id)initWithPrintPanelViewController:(id)a0;
- (void)showCancelButton;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
