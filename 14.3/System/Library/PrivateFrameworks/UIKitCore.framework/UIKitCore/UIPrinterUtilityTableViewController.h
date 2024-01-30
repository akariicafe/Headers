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
}

@property (retain, nonatomic) NSArray *supplyData;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithPrinter:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)stopPrinterWarningPolling;
- (void)startPrinterWarningPoll;
- (void)setShowContactingPrinter:(BOOL)a0;

@end
