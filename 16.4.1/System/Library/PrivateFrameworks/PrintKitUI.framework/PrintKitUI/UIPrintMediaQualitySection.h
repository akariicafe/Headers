@class NSString, UIPrintMediaTypeOption, UITableViewController, UIPrintFeedFromOption, UIPrintQualityOption;

@interface UIPrintMediaQualitySection : UIPrintOptionSection <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIPrintFeedFromOption *feedFromPrintOption;
@property (retain, nonatomic) UIPrintMediaTypeOption *mediaTypePrintOption;
@property (retain, nonatomic) UIPrintQualityOption *qualityPrintOption;
@property (retain, nonatomic) UITableViewController *mediaQualitySectionController;
@property (nonatomic) long long feedFromRow;
@property (nonatomic) long long mediaTypeRow;
@property (nonatomic) long long qualitySectionNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)currentPrinterChanged;
- (void)didSelectPrintOptionSection;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (BOOL)updatePrintOptionsList;

@end
