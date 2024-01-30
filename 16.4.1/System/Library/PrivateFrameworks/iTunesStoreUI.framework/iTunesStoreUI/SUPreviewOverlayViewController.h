@class NSString, SUPreviewOverlayStorePageViewController;

@interface SUPreviewOverlayViewController : SUViewController {
    id /* block */ _loadBlock;
    BOOL _loaded;
    SUPreviewOverlayStorePageViewController *_storePageViewController;
    BOOL _visible;
}

@property (readonly, nonatomic, getter=isContentLoaded) BOOL contentLoaded;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) double paddingRight;
@property (nonatomic) double paddingTop;
@property (copy, nonatomic) NSString *userInfoString;

+ (double)defaultAnimationDuration;
+ (id)defaultRequestProperties;
+ (void)_setContentInsetsForScrollView:(id)a0 viewController:(id)a1;
+ (void)offsetScrollView:(id)a0 forViewController:(id)a1;

- (void)loadWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)loadView;
- (id)_storePageViewController;
- (void)hideInNavigationController:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)loadWithRequestProperties:(id)a0 completionBlock:(id /* block */)a1;
- (void)showInNavigationController:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)storePage:(id)a0 finishedWithSuccess:(BOOL)a1;
- (id)_previewOverlayContainerForViewController:(id)a0;
- (id)_scrollViewForViewController:(id)a0;
- (void)hideInViewController:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)invalidateForMemoryPurge;
- (void)showInViewController:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;

@end
