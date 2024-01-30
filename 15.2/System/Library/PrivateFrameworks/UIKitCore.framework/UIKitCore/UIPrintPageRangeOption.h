@class UIPrintRangeView, NSString, NSArray;

@interface UIPrintPageRangeOption : UIPrintOption <UIPrintOptionViewDelegate>

@property (retain, nonatomic) UIPrintRangeView *pageRangeView;
@property (retain, nonatomic) NSString *multiPageRangeTitle;
@property (nonatomic) long long pageCount;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } pageRange;
@property (retain, nonatomic) NSArray *multiPageRanges;

- (id)summary;
- (BOOL)shouldShow;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void)pdfChanged:(id)a0;
- (void).cxx_destruct;
- (id)printOptionTableViewCell;
- (void)didSelectPrintOption;
- (void)updateSummary;
- (void)dealloc;
- (void)previewSelectionChanged:(id)a0;
- (id)printOptionDetailView;

@end
