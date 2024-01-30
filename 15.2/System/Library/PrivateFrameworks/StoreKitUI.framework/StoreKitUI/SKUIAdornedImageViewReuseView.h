@class SKUIImageViewElement, NSString, NSMapTable, SKUIPlayButton;

@interface SKUIAdornedImageViewReuseView : SKUIViewReuseView <SKUIViewElementView, SKUIMediaPlayerObserver> {
    NSMapTable *_imageViewToImageResourceCacheKey;
    SKUIImageViewElement *_imageViewElement;
    unsigned long long _playButtonPosition;
    NSMapTable *_viewElementViews;
}

@property (readonly, nonatomic) SKUIPlayButton *playButton;
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
+ (id)_attributedStringForMenuItem:(id)a0 context:(id)a1;
+ (id)_attributedStringForButtonText:(id)a0 type:(long long)a1 style:(id)a2 context:(id)a3;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;
- (void)_buttonAction:(id)a0;
- (void)mediaPlayer:(id)a0 itemStateChanged:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForView:(id)a0;

@end
