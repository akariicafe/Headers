@class UITableView, NSArray, NSString, UIPrintFinishingTemplatesOption;

@interface UIPrintFinishingsOption : UIPrintOption <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIPrintFinishingTemplatesOption *finishingTemplatesOption;
@property (retain, nonatomic) NSArray *printerFinishingOptions;
@property (retain, nonatomic) UITableView *finishingOptionsTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)summary;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)summaryString;
- (id)title;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)clearFinishingOptions;
- (void)currentPrinterChanged;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void)updateFromPrintInfo;

@end
