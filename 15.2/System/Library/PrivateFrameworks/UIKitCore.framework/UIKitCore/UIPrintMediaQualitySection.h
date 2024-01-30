@class UIPrintMediaQualityTableViewController, NSString, UIPrintMediaTypeOption, UIPrintFeedFromOption, UIPrintQualityOption;

@interface UIPrintMediaQualitySection : UIPrintOptionSection <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIPrintFeedFromOption *feedFromPrintOption;
@property (retain, nonatomic) UIPrintMediaTypeOption *mediaTypePrintOption;
@property (retain, nonatomic) UIPrintQualityOption *qualityPrintOption;
@property (retain, nonatomic) UIPrintMediaQualityTableViewController *mediaQualitySectionController;
@property (nonatomic) long long feedFromRow;
@property (nonatomic) long long mediaTypeRow;
@property (nonatomic) long long qualitySection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)updatePrinterInfo;
- (void)updatePrintOptionsList;
- (void)didSelectPrintOptionSection;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)setCurrentPrinter:(id)a0;
- (void)updateSectionSummary:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
