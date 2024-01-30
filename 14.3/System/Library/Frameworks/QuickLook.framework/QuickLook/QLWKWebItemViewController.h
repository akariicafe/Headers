@class QLScrubView, NSString, NSLayoutConstraint, NSOperationQueue, WKWebView, UIPrintPageRenderer, NSCache;
@protocol QLWebKitThumbnailGenerator, QLWebKitPaginator;

@interface QLWKWebItemViewController : QLItemViewController <WKNavigationDelegate, QLPrintingProtocol, QLScrubViewDataSource, QLScrubViewDelegate, UIScrollViewDelegate> {
    NSString *_previewContentType;
    struct CGPoint { double x; double y; } _scrollViewTopOffset;
    id /* block */ _completionHandler;
    UIPrintPageRenderer *_renderer;
    BOOL _fullScreen;
    id<QLWebKitThumbnailGenerator> _thumbnailGenerator;
    id<QLWebKitPaginator> _paginator;
    struct CGSize { double width; double height; } _pageSize;
    QLScrubView *_scrubView;
    long long _thumbnailCount;
    struct CGSize { double width; double height; } _thumbnailSize;
    NSLayoutConstraint *_scrubberRightConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSCache *indexToThumbnailsCache;
@property (retain, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldDisableJavaScriptForContentType:(id)a0;

- (long long)preferredWhitePointAdaptivityStyle;
- (id)transitioningView;
- (long long)numberOfPagesInScrubView:(id)a0;
- (id)scrollView;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (id)printer;
- (id)_renderer;
- (void)scrollViewDidScroll:(id)a0;
- (void)_registerRemoteProxy;
- (void)_updateScrubberVisibilityAnimated:(BOOL)a0;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateConstraintConstants:(BOOL)a0;
- (void)_updateScrubberVisibilityAnimated:(BOOL)a0 reloadThumbnailsIfNeeded:(BOOL)a1;
- (BOOL)shouldAcceptTouch:(id)a0 ofGestureRecognizer:(id)a1;
- (void)_updateScrubberForTraitCollection:(id)a0 animated:(BOOL)a1 reloadThumbnailsIfNeeded:(BOOL)a2;
- (void)_showScrubberIfNeeded:(BOOL)a0 reloadThumbnails:(BOOL)a1;
- (void)scrubView:(id)a0 didSelectPageAtIndex:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })scrubView:(id)a0 pageSizeAtIndex:(unsigned long long)a1;
- (void)scrubView:(id)a0 thumbnailForPage:(long long)a1 size:(struct CGSize { double x0; double x1; })a2 withCompletionBlock:(id /* block */)a3;
- (void)loadView;
- (void)_webViewDidRequestPasswordForQuickLookDocument:(id)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (id)scrubView;
- (void)_hideScrubberIfNeeded:(BOOL)a0;
- (void)_prepareThumbnailView;
- (id)_thumbnailAtIndex:(unsigned long long)a0;
- (void)_addThumbnailToCache:(id)a0 atIndex:(unsigned long long)a1;
- (void)_scrollToPage:(long long)a0;
- (void)numberOfPagesWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofSize:(struct CGSize { double x0; double x1; })a1;
- (void)pdfDataForPageAtIndex:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id /* block */)a0;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (BOOL)canClickToToggleFullscreen;
- (void)transitionWillFinish:(BOOL)a0 didComplete:(BOOL)a1;
- (void)transitionDidStart:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)previewWillAppear:(BOOL)a0;
- (void)previewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (unsigned long long)currentPageNumber;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;

@end
