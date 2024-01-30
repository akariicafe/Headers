@class UIPrintPanelViewController;

@interface UIPrintPaperViewController : UITableViewController {
    UIPrintPanelViewController *_printPanelViewController;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)adjustPopoverSize;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithPrintPanelViewController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateScaleUp:(id)a0;

@end
