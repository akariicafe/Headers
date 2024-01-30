@class NSArray, NSString, NSIndexPath, NSMutableArray;

@interface UIPrintFeedFromOption : UIPrintOption <UIPrintOptionListDelegate>

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSMutableArray *trayNames;
@property (retain, nonatomic) NSArray *trays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemList;
- (id)summary;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)selectedItem;
- (void).cxx_destruct;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updatePrinterInfo;
- (void)setCurrentPrinter:(id)a0;
- (id)getTrayList;
- (id)selectedTrayName;
- (void)listItemSelected:(id)a0;
- (id)shortSummary;

@end
