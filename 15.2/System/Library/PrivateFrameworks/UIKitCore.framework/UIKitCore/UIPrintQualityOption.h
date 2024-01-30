@class NSArray, UIPrintQualityView;

@interface UIPrintQualityOption : UIPrintOption <UIPrintOptionViewDelegate>

@property (retain, nonatomic) NSArray *printQualities;
@property (retain, nonatomic) UIPrintQualityView *printQualityView;
@property (retain, nonatomic) NSArray *qualities;
@property (nonatomic) long long selectedQuality;

- (id)summary;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void).cxx_destruct;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updatePrinterInfo;
- (void)updateSummary;
- (void)setCurrentPrinter:(id)a0;
- (void)dealloc;
- (id)shortSummary;
- (id)printOptionDetailView;
- (void)updateQuality;

@end
