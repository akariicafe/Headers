@class NSArray, NSString, NSIndexPath, NSObject;
@protocol OS_dispatch_queue;

@interface UIPrintPaperSizeOption : UIPrintOption <UIPrintOptionListDelegate> {
    NSObject<OS_dispatch_queue> *_pkPrinterQueue;
}

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSArray *loadedPaperSizes;
@property (retain, nonatomic) NSArray *supportedPaperSizes;
@property (retain, nonatomic) NSArray *loadedPaperNames;
@property (retain, nonatomic) NSArray *supportedPaperNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemList;
- (id)summary;
- (id)paperList;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)selectedItem;
- (void).cxx_destruct;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updatePrinterInfo;
- (void)setCurrentPrinter:(id)a0;
- (id)getPaperNames:(id)a0;
- (id)defaultPaperIndex;
- (id)_removeRollsFrom:(id)a0;
- (void)listItemSelected:(id)a0;
- (void)dealloc;
- (id)selectedPaperName:(id)a0;
- (void)updateSelectedPaper;

@end
