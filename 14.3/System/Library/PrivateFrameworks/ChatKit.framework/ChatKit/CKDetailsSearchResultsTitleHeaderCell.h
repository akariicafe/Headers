@class CALayer;
@protocol CKDetailsSearchResultsTitleHeaderCellDelegate;

@interface CKDetailsSearchResultsTitleHeaderCell : CKSearchResultsTitleHeaderCell

@property (retain, nonatomic) CALayer *bottomHairline;
@property (nonatomic) id<CKDetailsSearchResultsTitleHeaderCellDelegate> detailsViewDelegate;

+ (id)supplementaryViewType;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (void)_showAllButtonTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
