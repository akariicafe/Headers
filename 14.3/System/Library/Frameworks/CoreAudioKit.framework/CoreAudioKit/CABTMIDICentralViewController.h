@class UIBarButtonItem, NSString, UIActivityIndicatorView, NSTimer, NSMutableArray, AMSBTLEConnectionManager;

@interface CABTMIDICentralViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable> {
    NSMutableArray *peripheralList;
    AMSBTLEConnectionManager *connectionManager;
    UIActivityIndicatorView *indicator;
    BOOL didCleanup;
    BOOL inEditingMode;
    NSTimer *connectionTimer;
    UIBarButtonItem *previousLeftItem;
    UIBarButtonItem *previousRightItem;
    UIBarButtonItem *editButton;
    UIBarButtonItem *cancelButton;
    UIBarButtonItem *forgetButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)cleanup;
- (void)dealloc;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)didReceiveMemoryWarning;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)title;
- (void)viewDidLoad;
- (void)cancelAction:(id)a0;
- (void)updatePeripheralTable;
- (void)setUIEnabled:(BOOL)a0;
- (void)updateButtonsToMatchTableState;
- (unsigned long long)peripheralCount;
- (id)peripheralAtIndex:(unsigned long long)a0;
- (void)centralTimerFired:(id)a0;
- (void)forgetAction:(id)a0;
- (void)editAction:(id)a0;

@end
