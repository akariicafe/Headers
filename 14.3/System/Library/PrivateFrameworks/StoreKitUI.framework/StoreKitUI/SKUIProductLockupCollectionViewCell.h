@class NSMutableArray, NSString, NSMapTable, NSHashTable, SKUILockupViewElement, SKUIProductLockupLayout, SKUIGradientView;

@interface SKUIProductLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIOfferViewDelegate, SKUIPerspectiveView, SKUIViewElementView> {
    NSHashTable *_artworkRelatedChildViewElementViews;
    NSMapTable *_buyButtonDescriptorToButton;
    NSMapTable *_elementViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SKUIProductLockupLayout *_layout;
    SKUILockupViewElement *_lockup;
    SKUIGradientView *_offerConfirmationGradientView;
    long long _offerMetadataPosition;
    NSHashTable *_offerViews;
    NSMutableArray *_segmentedControlControllers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;
+ (id)_attributedStringForButton:(id)a0 context:(id)a1;
+ (id)_attributedStringForLabel:(id)a0 context:(id)a1;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x0; double x1; })a0;
+ (void)_requestLayoutForViewElements:(id)a0 width:(double)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)setVanishingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setPerspectiveTargetView:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;
- (void)_buttonAction:(id)a0;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_showConfirmationAction:(id)a0;
- (void)_imageTapAction:(id)a0;
- (void)itemOfferButtonDidAnimateTransition:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (id)_viewElementForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stackElements:(id)a0 alignment:(long long)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stackBottomRightElements:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateLayoutToAnimateOfferTransitionForView:(id)a0;
- (void)_prepareOfferConfirmationGradientForView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSection:(long long)a0;
- (void)_layoutConfirmationGradientRelativeToSection:(long long)a0 alpha:(double)a1;
- (BOOL)offerViewAnimateTransition:(id)a0;
- (void)offerViewDidAnimateTransition:(id)a0;
- (void)offerViewWillAnimateTransition:(id)a0;

@end
