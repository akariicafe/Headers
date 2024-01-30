@class SKUIItemOfferButton, NSString, SKUIItemOfferButtonAppearance, UIImage, SKUIItemOffer, SKUICellImageView, UIView, UILabel, SKUIItemState;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate> {
    BOOL _hidesItemOfferButton;
}

@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic, getter=isIconImageHidden) BOOL iconImageHidden;
@property (nonatomic) BOOL displaysItemOfferButton;
@property (nonatomic, getter=isRestricted) BOOL restricted;
@property (retain, nonatomic) SKUIItemOffer *itemOffer;
@property (retain, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (copy, nonatomic) NSString *itemOfferNoticeString;
@property (copy, nonatomic) SKUIItemState *itemState;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) SKUICellImageView *iconImageView;
@property (readonly, nonatomic) SKUIItemOfferButton *itemOfferButton;
@property (readonly, nonatomic) UILabel *itemOfferNoticeLabel;
@property (readonly, nonatomic) UIView *removeControlView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)a0;
- (void)resetLayout;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)_itemOfferConfirmAction:(id)a0;
- (void)setItemState:(id)a0 animated:(BOOL)a1;
- (void)_reloadItemOfferButton:(BOOL)a0;
- (void)_reloadItemOfferVisibility;
- (BOOL)_canShowItemOfferNotice;
- (void)layoutForItemOfferChange;
- (void)_getParentTableView:(id *)a0 collectionView:(id *)a1;
- (id)_parentCollectionViewCell;
- (void)_cancelItemOfferConfirmationAction:(id)a0;
- (void)_showItemOfferConfirmationAction:(id)a0;
- (BOOL)_useCloudButtonForItemState:(id)a0;

@end
