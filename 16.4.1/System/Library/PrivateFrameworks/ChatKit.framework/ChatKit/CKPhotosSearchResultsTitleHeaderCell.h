@class UISegmentedControl;

@interface CKPhotosSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell

@property (retain, nonatomic) UISegmentedControl *control;
@property (nonatomic) double controlTopPadding;
@property (nonatomic) double controlBottomPadding;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_controlIndexDidChange:(id)a0;
- (void)updateSegmentedControlToFitWidth:(double)a0;

@end
