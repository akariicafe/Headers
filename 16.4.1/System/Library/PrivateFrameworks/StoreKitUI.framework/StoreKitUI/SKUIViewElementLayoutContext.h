@class NSMutableDictionary, NSMapTable, SKUIResourceLoader, SKUIItemOfferButton, UIViewController, UIColor, NSString, NSHashTable, NSMutableSet, SKUIClientContext, SKUIViewElementTextLayoutCache, MPUBorderDrawingCache, SKUIBadgeTextAttachmentLoader, NSCache;
@protocol SKUIArtworkRequestDelegate;

@interface SKUIViewElementLayoutContext : NSObject {
    NSMutableDictionary *_aggregateValues;
    SKUIBadgeTextAttachmentLoader *_badgeImageLoader;
    MPUBorderDrawingCache *_borderDrawingCache;
    NSMapTable *_editorialLayouts;
    NSHashTable *_expandedEditorialLayouts;
    SKUIItemOfferButton *_itemOfferButton;
    NSMutableDictionary *_itemOfferButtonSizes;
    NSMutableSet *_observedArtworkRequestIDs;
    NSMapTable *_blurColors;
}

@property (readonly, nonatomic) NSCache *placeholderImageCache;
@property (nonatomic) double activePageWidth;
@property (weak, nonatomic) id<SKUIArtworkRequestDelegate> artworkRequestDelegate;
@property (readonly, nonatomic) SKUIBadgeTextAttachmentLoader *badgeImageLoader;
@property (readonly, nonatomic) MPUBorderDrawingCache *borderDrawingCache;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (nonatomic) unsigned long long containerViewElementType;
@property (retain, nonatomic) SKUIViewElementTextLayoutCache *labelLayoutCache;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } largeScreenElementPadding;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) double displayScale;

+ (double)_calculateValueFromString:(id)a0 withDefault:(double)a1 coefficent:(double)a2;
+ (double)itemWidthForElement:(id)a0 withDefaultWidth:(double)a1 fitWidth:(double)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (double)defaultItemWidthForViewElement:(id)a0;
- (void)expandEditorialForLabelElement:(id)a0;
- (void)_artworkRequestDidLoadImageNotification:(id)a0;
- (id)_initSKUIViewElementLayoutContext;
- (BOOL)_loadImageForURL:(id)a0 cacheKey:(id)a1 dataConsumer:(id)a2 reason:(long long)a3;
- (struct CGSize { double x0; double x1; })_sizeForImageElement:(id)a0 applyTransform:(BOOL)a1;
- (id)aggregateValueForKey:(id)a0;
- (id)blurColorForCacheKey:(id)a0;
- (id)dataConsumerForImageElement:(id)a0;
- (id)editorialLayoutForLabelElement:(id)a0 width:(double)a1;
- (id)imageResourceCacheKeyForArtwork:(id)a0;
- (id)imageResourceCacheKeyForViewElement:(id)a0;
- (id)initWithStorePageSectionContext:(id)a0;
- (id)initWithStorePageSectionContext:(id)a0 previousLayoutContext:(id)a1;
- (void)invalidateAllEditorialLayouts;
- (BOOL)isEditorialLayoutExpanded:(id)a0;
- (BOOL)loadImageForArtwork:(id)a0 dataConsumer:(id)a1 reason:(long long)a2;
- (BOOL)loadImageForArtwork:(id)a0 reason:(long long)a1;
- (BOOL)loadImageForBadgeElement:(id)a0 reason:(long long)a1;
- (BOOL)loadImageForImageElement:(id)a0 reason:(long long)a1;
- (BOOL)loadImageForImageElement:(id)a0 reason:(long long)a1 dataConsumer:(id)a2;
- (BOOL)loadTemplatedImageForBadgeElement:(id)a0 reason:(long long)a1;
- (long long)maxWidthForElement:(id)a0 withDefaultWidth:(long long)a1;
- (id)placeholderImageForImageElement:(id)a0 dataConsumer:(id)a1;
- (id)placeholderImageForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)prefetchResourcesForViewElement:(id)a0 reason:(long long)a1;
- (id)requestIdentifierForArtwork:(id)a0;
- (id)requestIdentifierForResourceCacheKey:(id)a0;
- (id)requestIdentifierForViewElement:(id)a0;
- (void)setAggregateValue:(id)a0 forKey:(id)a1;
- (void)setBlurColor:(id)a0 cacheKey:(id)a1;
- (void)setLargeScreenElementPaddingFromContext:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForBadgeElement:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForImageElement:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItemOfferButton:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForViewElement:(id)a0 width:(double)a1;
- (id)textPropertiesForViewElement:(id)a0 width:(double)a1;
- (id)transientRequestIdentifierForViewElement:(id)a0;

@end
