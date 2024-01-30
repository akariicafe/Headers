@class UIView, UIColor, SKUICellLayoutView, SKUIEditorialCellLayout, SKUILockupItemCellLayout, SKUITextBoxView;

@interface SKUIEditorialLockupCellLayout : SKUIItemCellLayout {
    SKUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
    double _editorialHeight;
    SKUILockupItemCellLayout *_lockupLayout;
    SKUICellLayoutView *_lockupView;
    UIColor *_offerNoticeTextColor;
    SKUITextBoxView *_textBoxView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) unsigned long long visibleFields;
@property (readonly, nonatomic) SKUILockupItemCellLayout *lockupCellLayout;
@property (readonly, nonatomic) SKUITextBoxView *textBoxView;

+ (double)editorialWidthForCellWidth:(double)a0 lockupStyle:(struct SKUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;
+ (double)_imagePaddingForArtworkSize:(long long)a0;

- (id)iconImage;
- (void)layoutSubviews;
- (id)iconImageView;
- (void)setRestricted:(BOOL)a0;
- (void)setIconImage:(id)a0;
- (void)setClientContext:(id)a0;
- (void).cxx_destruct;
- (id)itemOffer;
- (void)setBackgroundColor:(id)a0;
- (id)itemState;
- (id)_lockupView;
- (void)setColoringWithColorScheme:(id)a0;
- (void)setItemOffer:(id)a0;
- (void)setItemState:(id)a0 animated:(BOOL)a1;
- (void)applyEditorialLayout:(id)a0 withOrientation:(long long)a1;
- (void)setIconImageHidden:(BOOL)a0;
- (void)setItemOfferButtonAppearance:(id)a0;
- (BOOL)isIconImageHidden;
- (void)layoutForItemOfferChange;
- (id)itemOfferNoticeString;
- (void)setItemOfferNoticeString:(id)a0;
- (id)_editorialContainerView;
- (id)_editorialCellLayout;
- (BOOL)_showsItemOfferUnderEditorial;
- (BOOL)_isItemOfferButtonHidden;

@end
