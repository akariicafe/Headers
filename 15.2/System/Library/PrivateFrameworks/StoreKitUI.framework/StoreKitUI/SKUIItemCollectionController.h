@class SKUIStyledImageDataConsumer, NSString, NSArray, SKUIResourceLoader, UIImage, SKUIClientContext, SKUIItemArtworkContext, NSMutableDictionary, SKUIScreenshotDataConsumer;
@protocol SKUIItemCollectionDelegate;

@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver> {
    NSMutableDictionary *_itemIDsToArtworkRequestIDs;
    UIImage *_placeholderImage;
    NSMutableDictionary *_itemIDsToScreenshotRequestIDs;
    BOOL _delegateProvidesScreenshots;
    UIImage *_landscapeScreenshotPlaceholderImage;
    UIImage *_portraitScreenshotPlaceholderImage;
}

@property (weak, nonatomic) id<SKUIItemCollectionDelegate> delegate;
@property (retain, nonatomic) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIItemArtworkContext *artworkContext;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (retain, nonatomic) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer;
@property (retain, nonatomic) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long numberOfItemsPerPage;
@property (nonatomic) double numberOfPagesToCacheAhead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)enterBackground;
- (void)removeAllCachedResources;
- (void)enterForeground;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)itemStateCenter:(id)a0 itemStatesChanged:(id)a1;
- (void)itemStateCenterRestrictionsChanged:(id)a0;
- (id)initWithClientContext:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)_artworkLoader;
- (void)loadNextPageOfArtworkWithReason:(long long)a0;
- (void)precacheNextPageArtworkForOffset:(struct CGPoint { double x0; double x1; })a0 direction:(double)a1;
- (id)performActionForItemAtIndex:(long long)a0;
- (void)configureCellLayout:(id)a0 forIndex:(long long)a1;
- (void)didEndDisplayingItemAtIndex:(long long)a0;
- (void)_memoryWarningNotification:(id)a0;
- (id)_initSKUIItemCollectionController;
- (id)_iconArtworkRequestWithItem:(id)a0;
- (id)_placeholderImageForItem:(id)a0;
- (void)_reloadScreenshotForCellLayout:(id)a0 item:(id)a1 isRestricted:(BOOL)a2;
- (BOOL)_loadArtworkForItem:(id)a0 reason:(long long)a1;
- (void)_enumerateVisibleCellLayoutsWithBlock:(id /* block */)a0;
- (void)_reloadForItemStateChange:(id)a0;
- (void)_reloadForRestrictionsChange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_visibleItemRange;
- (id)_screenshotArtworkRequestWithItem:(id)a0;
- (id)_screenshotForItem:(id)a0;
- (id)_placeholderImageForScreenshot:(id)a0;
- (void)cancelArtworkLoadForItemIndex:(long long)a0;

@end
