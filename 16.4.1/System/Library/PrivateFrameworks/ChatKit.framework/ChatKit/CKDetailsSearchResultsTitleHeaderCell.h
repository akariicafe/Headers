@class CALayer;
@protocol CKDetailsSearchResultsTitleHeaderCellDelegate;

@interface CKDetailsSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell

@property (retain, nonatomic) CALayer *bottomHairline;
@property (weak, nonatomic) id<CKDetailsSearchResultsTitleHeaderCellDelegate> detailsViewDelegate;

+ (id)reuseIdentifier;
+ (id)supplementaryViewType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_showAllButtonTapped:(id)a0;

@end
