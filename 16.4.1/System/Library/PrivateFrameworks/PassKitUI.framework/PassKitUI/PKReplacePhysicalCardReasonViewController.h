@class UIBarButtonItem, PKOrderPhysicalCardController, PKPhysicalCardController;

@interface PKReplacePhysicalCardReasonViewController : PKSectionTableViewController {
    PKPhysicalCardController *_controller;
    long long _context;
    unsigned long long _feature;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    BOOL _hasSelectedRow;
    long long _selectedRow;
    BOOL _loadingCustomizationOptions;
    PKOrderPhysicalCardController *_orderController;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_updateNavigationButtons;
- (void)_cancelButtonPressed:(id)a0;
- (id)_cellForReasonAtIndexPath:(id)a0 inTableView:(id)a1;
- (void)_nextButtonPressed:(id)a0;
- (void)_reasonRowSelectedAtIndexPath:(id)a0 inTableView:(id)a1;
- (id)initWithPhysicalCardController:(id)a0 context:(long long)a1;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
