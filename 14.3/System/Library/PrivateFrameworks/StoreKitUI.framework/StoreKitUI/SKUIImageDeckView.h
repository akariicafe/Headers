@class UIDynamicAnimator, NSArray, NSString, NSMapTable, UIView, SKUIImageDeckViewElement;

@interface SKUIImageDeckView : SKUIViewReuseView <UIGestureRecognizerDelegate, SKUIViewElementView> {
    UIDynamicAnimator *_animator;
    double _fitWidth;
    SKUIImageDeckViewElement *_imageDeckViewElement;
    NSMapTable *_viewElementViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    UIView *_selectedImageView;
    unsigned long long _selectedImageViewIndex;
}

@property (retain, nonatomic) NSArray *imageViews;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;
- (void)_layoutImages;

@end
