@class NSArray, UIPrintQualityView;

@interface UIPrintQualityOption : UIPrintOption <UIPrintOptionViewDelegate>

@property (retain, nonatomic) NSArray *printQualities;
@property (retain, nonatomic) UIPrintQualityView *printQualityView;
@property (retain, nonatomic) NSArray *qualities;

- (id)summary;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)summaryString;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)currentPrinterChanged;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionDetailView;
- (id)printOptionTableViewCell;
- (id)shortSummary;
- (void)updateFromPrintInfo;

@end
