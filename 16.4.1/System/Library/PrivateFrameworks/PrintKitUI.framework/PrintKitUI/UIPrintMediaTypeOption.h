@class NSArray, NSString, NSMutableArray, NSIndexPath;

@interface UIPrintMediaTypeOption : UIPrintOption <UIPrintOptionListDelegate>

@property (retain, nonatomic) NSMutableArray *mediaTypeNames;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSArray *mediaTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)summary;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)summaryString;
- (void).cxx_destruct;
- (id)itemList;
- (id)selectedItem;
- (BOOL)shouldShow;
- (long long)listItemSelected:(id)a0;
- (void)currentPrinterChanged;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (id)selectedMediaTypeName;
- (void)updateFromPrintInfo;

@end
