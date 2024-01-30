@class UIPrintInfo, NSString, PKPrinterBrowser, NSArray, UIPrinterSearchingView, NSMutableArray, PKPrinter;
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
    UIPrintInfo *_printInfoForBrowser;
}

@property double maximumPopoverHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willEnterForeground;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateViewConstraints;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)showCancelButton;
- (void)updateSearching;
- (void)addPrinter:(id)a0 moreComing:(BOOL)a1;
- (void)adjustPopoverSize;
- (void)didChangePreferredContentSize;
- (id)initWithOwnerViewController:(id)a0 printInfo:(id)a1;
- (id)printerAtIndexPath:(id)a0;
- (void)printerInfoButtonTapped:(id)a0;
- (void)removePrinter:(id)a0 moreGoing:(BOOL)a1;
- (void)retriveLastUsedPrintersArray;
- (void)selectPrinter:(id)a0;
- (void)startPrinterBrowser;
- (void)stopPrinterBrowser;

@end
