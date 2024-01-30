@class NSString, PKPrinterBrowser, NSArray, UIPrinterSearchingView, NSMutableArray, PKPrinter;
@protocol UIPrinterBrowserOwner;

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
    id<UIPrinterBrowserOwner> _ownerPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_preferredPrinters;
    NSMutableArray *_otherPrinters;
    NSMutableArray *_filteredOutPrinters;
    NSArray *_lastUsedPrinters;
    PKPrinter *_lockedPrinter;
    BOOL _loaded;
    UIPrinterSearchingView *_searchingView;
    BOOL _searchingViewConstraintsSet;
    BOOL _shouldFilterPrinters;
    double _rowHeight;
}

@property double maximumPopoverHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)adjustPopoverSize;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)printerInfoButtonTapped:(id)a0;
- (void)stopPrinterBrowser;
- (void)didChangePreferredContentSize;
- (void)updateSearching;
- (void)startPrinterBrowser;
- (id)printerAtIndexPath:(id)a0;
- (void)addPrinter:(id)a0 moreComing:(BOOL)a1;
- (void)removePrinter:(id)a0 moreGoing:(BOOL)a1;
- (void)selectPrinter:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willEnterForeground;
- (void)updateViewConstraints;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)showCancelButton;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithOwnerViewController:(id)a0;

@end
