@class UIScrollView, CKPrintTranscriptCollectionViewController;

@interface CKTranscriptPrintPageRenderer : UIPrintPageRenderer

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CKPrintTranscriptCollectionViewController *transcriptCollectionViewController;

+ (void)renderViewWithText:(id)a0 withOffsetVertical:(double)a1;

- (void).cxx_destruct;
- (void)drawScrollViewAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithTranscriptCollectionViewController:(id)a0;
- (void)drawPageAtIndex:(long long)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)numberOfPages;

@end
