@class VUICardView, IKImageElement, IKViewElement, VUICardViewLayoutFactory;

@interface VUICardCollectionViewCell : VUIFocusableCollectionViewCell

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKImageElement *mainImageViewElement;
@property (retain, nonatomic) VUICardView *cardView;
@property (retain, nonatomic) VUICardViewLayoutFactory *layoutFactory;
@property (readonly, nonatomic) double mainImageCornerRadius;

+ (long long)_cardLayoutTypeForElement:(id)a0;
+ (id)_imageLayoutForImageElement:(id)a0 cardLayout:(id)a1 cardWidth:(double)a2;
+ (id)cardCellWithElement:(id)a0 existingCell:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setCardView:(id)a0 force:(BOOL)a1;

@end
