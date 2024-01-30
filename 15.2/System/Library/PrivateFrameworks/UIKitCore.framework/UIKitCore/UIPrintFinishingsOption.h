@class UITableView, NSArray, NSString, NSMutableArray, UIPrintFinishingTemplatesOption;

@interface UIPrintFinishingsOption : UIPrintOption <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) NSMutableArray *finishingTemplateNames;
@property (retain, nonatomic) UIPrintFinishingTemplatesOption *finishingTemplatesOption;
@property (nonatomic) long long finishingOptionSelection;
@property (retain, nonatomic) NSArray *printerFinishingOptions;
@property (retain, nonatomic) NSArray *finishingTemplates;
@property (retain, nonatomic) UITableView *finishingOptionsTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)summary;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)title;
- (id)preparepPrinterFinishingOptions;
- (BOOL)shouldShow;
- (void)clearFinishingOptions;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)updatePrinterInfo;
- (void)setCurrentPrinter:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
