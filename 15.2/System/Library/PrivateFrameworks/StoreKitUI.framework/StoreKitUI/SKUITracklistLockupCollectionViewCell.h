@class UIView, NSString, SKUITracklistColumnData, SUPlayerStatus, NSMutableDictionary, SKUITrackViewElement, SKUIPreviewProgressIndicator, SKUIGradientView, NSMapTable;

@interface SKUITracklistLockupCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIItemOfferButtonDelegate, SKUIPreviewContainerView, SKUIViewElementView> {
    NSMapTable *_buyButtonDescriptorToButton;
    SKUITracklistColumnData *_columnData;
    NSMutableDictionary *_columnViewsByIndex;
    NSMapTable *_imageViewToImageResourceCacheKey;
    SUPlayerStatus *_lastPlayerStatus;
    SKUIGradientView *_offerConfirmationGradientView;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    long long _previewState;
    UIView *_separatorView;
    SKUITrackViewElement *_track;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })preferredSizeForViewElement:(id)a0 context:(id)a1;
+ (void)requestLayoutForViewElement:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 viewElement:(id)a1 context:(id)a2;
+ (id)_attributedStringForOrdinal:(id)a0 context:(id)a1;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadWithViewElement:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;
- (BOOL)updateWithItemState:(id)a0 context:(id)a1 animated:(BOOL)a2;
- (id)viewForElementIdentifier:(id)a0;
- (void)_buttonAction:(id)a0;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_showConfirmationAction:(id)a0;
- (void)itemOfferButtonDidAnimateTransition:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)showPreviewProgressWithStatus:(id)a0 animated:(BOOL)a1;
- (void)_audioPlayerStatusChangeNotification:(id)a0;
- (id)_addFlipContainerViewWithFrontView:(id)a0 backView:(id)a1;
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)a0;
- (id)_previewMediaURL;
- (void)hidePreviewProgressAnimated:(BOOL)a0;
- (void)togglePreviewPlaybackAnimated:(BOOL)a0;
- (id)_previewColumnView;
- (id)_previewControlViewElement;
- (void)_enumerateViewElementViewsUsingBlock:(id /* block */)a0;
- (void)_layoutConfirmationGradientRelativeToView:(id)a0 alpha:(double)a1;

@end
