@class UIView;

@interface CKTranscriptHeaderCell : CKTranscriptCell

@property (retain, nonatomic) UIView *loadingIndicator;

+ (double)defaultCellHeight;

- (void)layoutSubviewsForAlignmentContents;
- (void)startAnimatingActivityIndicator;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
