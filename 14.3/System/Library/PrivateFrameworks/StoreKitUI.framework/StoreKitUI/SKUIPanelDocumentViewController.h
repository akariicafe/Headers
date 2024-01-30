@class SKUILayoutCache, NSString, SKUIViewElementLayoutContext, UIImageView, SKUIPanelView, SKUIPanelTemplateViewElement, SKUIMetricsImpressionSession, UIScrollView;

@interface SKUIPanelDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController> {
    UIImageView *_backgroundImageView;
    BOOL _didAttemptBecomeFirstResponder;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    long long _lastContentWidth;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIMetricsImpressionSession *_metricsImpressionSession;
    SKUIPanelView *_panelView;
    SKUILayoutCache *_textLayoutCache;
    UIScrollView *_scrollView;
    SKUIPanelTemplateViewElement *_templateElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentScrollView;
- (void).cxx_destruct;
- (void)_layoutScrollView;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)_activeBackgroundColor;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)_layoutContext;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_layoutBackgroundImageView;
- (void)viewWillLayoutSubviews;
- (void)_keyboardWillChangeNotification:(id)a0;
- (void)documentDidUpdate:(id)a0;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)impressionableViewElements;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (void)_keyboardHideNotification:(id)a0;
- (id)_templateBackgroundColor;
- (void)_reloadBackgroundImageView;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_reloadContentSize;
- (id)_imageForBackgroundImageElement:(id)a0;
- (void)_requestPanelViewLayoutWithContentWidth:(long long)a0 forced:(BOOL)a1;
- (id)initWithTemplateElement:(id)a0;

@end
