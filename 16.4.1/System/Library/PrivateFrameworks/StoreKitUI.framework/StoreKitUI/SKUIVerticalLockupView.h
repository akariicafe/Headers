@class SKUISizeValue, NSString, NSMapTable, NSHashTable, SKUILockupViewElement, UIView;

@interface SKUIVerticalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIViewElementView> {
    NSHashTable *_artworkRelatedChildViewElementViews;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    NSMapTable *_imageViewToImageResourceCacheKey;
    NSMapTable *_lineSpacings;
    SKUILockupViewElement *_lockupElement;
    double _productImageAdjustedWidth;
    SKUISizeValue *_productImageBoundingSize;
    UIView *_productImageView;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _productImageViewOriginalTransform;
    NSMapTable *_topInsets;
    NSMapTable *_viewElementViews;
}

@property (nonatomic) long long sizingStyle;
@property (nonatomic) double opacityOfViewsOtherThanProductImageView;
@property (nonatomic) double zoomingImageAlpha;
@property (nonatomic) double zoomingImageWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedStringForButton:(id)a0 context:(id)a1;
+ (id)_attributedStringForLabel:(id)a0 context:(id)a1;
+ (double)_bottomInsetForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (double)_topInsetForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setVanishingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_buttonAction:(id)a0;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_showConfirmationAction:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (void)setPerspectiveTargetView:(id)a0;
- (void)updateForChangedDistanceFromVanishingPoint;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;

@end
