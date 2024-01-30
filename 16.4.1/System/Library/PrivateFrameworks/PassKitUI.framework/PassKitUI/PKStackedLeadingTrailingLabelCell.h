@class UIColor, NSString, UILabel, PKProgressBar;

@interface PKStackedLeadingTrailingLabelCell : UICollectionViewListCell {
    UILabel *_leadingPrimaryLabel;
    UILabel *_leadingSecondaryLabel;
    UILabel *_trailingPrimaryLabel;
    UILabel *_trailingSecondaryLabel;
    UILabel *_detailLabel;
    PKProgressBar *_progressBar;
}

@property (copy, nonatomic) NSString *leadingPrimaryText;
@property (copy, nonatomic) NSString *leadingSecondaryText;
@property (copy, nonatomic) NSString *trailingPrimaryText;
@property (copy, nonatomic) NSString *trailingSecondaryText;
@property (copy, nonatomic) NSString *detailText;
@property (nonatomic) BOOL showProgressBar;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressBarStartColor;
@property (retain, nonatomic) UIColor *progressBarEndColor;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)_layoutLabelsSideBySide:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allocated:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 unallocated:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 isTemplateLayout:(BOOL)a3;
- (double)_layoutLabelsStacked:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 allocated:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 unallocated:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 isTemplateLayout:(BOOL)a3;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_updateProgressBar;

@end
