@class UILabel, NSString, UIView, SKUIButtonViewElement, NSNumber, UIButton;

@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell <SKUIViewElementView> {
    double _buttonContentHorizontalPadding;
    SKUIButtonViewElement *_buttonViewElement;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    UIButton *_dividerButton;
    NSNumber *_dividerButtonImageRequestIdentifier;
    UILabel *_dividerLabel;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imageVerticalPadding;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _internalHorizontalMargins;
    UIView *_leftLine;
    UIView *_rightLine;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _titleVerticalPadding;
}

@property (nonatomic) double topEdgeInset;
@property (copy, nonatomic) NSString *dividerTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;
+ (id)_attributedStringForDividerTitle:(id)a0 context:(id)a1;
+ (id)_attributedStringForButtonViewElement:(id)a0 context:(id)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageVerticalPaddingForViewElement:(id)a0;
+ (id)_attributedStringForViewElementText:(id)a0 style:(id)a1 context:(id)a2;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_titleVerticalPaddingForViewElement:(id)a0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentEdgeInsetsForViewElement:(id)a0;
+ (double)viewElementInsetDividerHeight:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 dividerTitle:(id)a1 context:(id)a2;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;
- (void)_buttonAction:(id)a0;
- (id)_imageForImageViewElement:(id)a0 returningRequestIdentifier:(out id *)a1 context:(id)a2;
- (void)setColoringWithColorScheme:(id)a0;

@end
