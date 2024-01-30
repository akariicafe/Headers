@class NSArray, NSString, UIPrinterAttributesService, PKPrinter;

@interface UIPrinterUtilityTableViewController : UITableViewController {
    PKPrinter *_printer;
    NSString *_printerWarning;
    UIPrinterAttributesService *_printerAttributesService;
    BOOL _showSupplyDataUnderPrinterName;
    long long _mainPrinterCellSection;
    long long _printerNameAndLocationSection;
    long long _identifyPrinterSection;
    long long _removeKeychainItemSection;
    BOOL _showIdentifyPrinterItem;
    BOOL _showRemoveKeychainItem;
}

@property (retain, nonatomic) NSArray *supplyData;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithPrinter:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)stopPrinterWarningPolling;
- (void)setShowContactingPrinter:(BOOL)a0;
- (void)startPrinterWarningPoll;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
