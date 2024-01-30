@class UIColor, NSString, PKStackedLeadingTrailingLabelView, PKProgressBar;

@interface PKStackedLeadingTrailingLabelCell : UICollectionViewListCell {
    PKStackedLeadingTrailingLabelView *_labelView;
    PKProgressBar *_progressBar;
}

@property (copy, nonatomic) NSString *leadingPrimaryText;
@property (copy, nonatomic) NSString *leadingSecondaryText;
@property (copy, nonatomic) NSString *trailingPrimaryText;
@property (copy, nonatomic) NSString *trailingSecondaryText;
@property (nonatomic) BOOL showProgressBar;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressBarStartColor;
@property (retain, nonatomic) UIColor *progressBarEndColor;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (void)_createLabelViewIfNecessary;
- (void)_updateProgressBar;

@end
