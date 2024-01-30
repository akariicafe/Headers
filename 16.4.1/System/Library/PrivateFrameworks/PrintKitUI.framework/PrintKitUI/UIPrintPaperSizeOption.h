@class NSArray, UIPrinter, NSString, NSIndexPath, NSObject;
@protocol OS_dispatch_queue;

@interface UIPrintPaperSizeOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSObject<OS_dispatch_queue> *_pkPrinterQueue;
}

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSArray *loadedPaperSizes;
@property (retain, nonatomic) NSArray *supportedPaperSizes;
@property (retain, nonatomic) NSArray *loadedPaperNames;
@property (retain, nonatomic) NSArray *supportedPaperNames;
@property (retain, nonatomic) UIPrinter *observedPrinter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)summary;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)itemList;
- (id)selectedItem;
- (long long)listItemSelected:(id)a0;
- (id)_removeRollsFrom:(id)a0;
- (void)currentPrinterChanged;
- (id)defaultPaperIndex;
- (void)didSelectPrintOption;
- (id)getPaperNames:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)paperList;
- (id)printOptionTableViewCell;
- (void)updateSelectedPaper;

@end
