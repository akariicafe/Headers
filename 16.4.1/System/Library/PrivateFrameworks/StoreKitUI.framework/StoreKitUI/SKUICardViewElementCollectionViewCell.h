@class NSHashTable, NSString, SKUISizeValue, UIView, SKUICardViewElement, CALayer, SKUIBackgroundImageWrapperForHorizontalLockup, SKUICardLayout, NSMapTable, SKUIViewElement;
@protocol SKUIPerspectiveView;

@interface SKUICardViewElementCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIAdvertisingSelectable, SKUIAdvertisingSelectionForardingTargetAction, SKUIPerspectiveView, SKUIViewElementView> {
    NSHashTable *_artworkRelatedChildViewElementViews;
    id<SKUIPerspectiveView> _backgroundViewWithParallax;
    SKUIBackgroundImageWrapperForHorizontalLockup *_backgroundWrapper;
    SKUICardViewElement *_cardElement;
    BOOL _hasBottomAlignedItems;
    NSMapTable *_imageViewToImageResourceCacheKey;
    BOOL _isActivityCard;
    SKUICardLayout *_layout;
    UIView *_programmedCardBackgroundView;
    SKUIViewElement *_productImageElement;
    NSMapTable *_viewElements;
}

@property (retain, nonatomic) UIView *adCardBackgroundView;
@property (retain, nonatomic) CALayer *compactAdCardHairlineLayer;
@property (copy, nonatomic) SKUISizeValue *artworkBoundingSize;
@property (readonly, nonatomic) NSString *lineItem;
@property (readonly, nonatomic) NSString *impressionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_defaultWidthForLockupWithContext:(id)a0;
+ (struct CGSize { double x0; double x1; })artworkBoundingSizeWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (void)applyLayoutAttributes:(id)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setVanishingPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)_dividerHeight:(id)a0;
- (void)_buttonAction:(id)a0;
- (void)_imageTapAction:(id)a0;
- (void)_performDefaultActionForViewElement:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)setPerspectiveTargetView:(id)a0;
- (void)skuiadvertising_advertSelectionEventShouldBeForwarded:(id)a0;
- (void)updateForChangedDistanceFromVanishingPoint;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
