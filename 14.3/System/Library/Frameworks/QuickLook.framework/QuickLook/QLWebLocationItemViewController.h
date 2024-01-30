@class WKWebView, NSLayoutConstraint;

@interface QLWebLocationItemViewController : QLItemViewController {
    WKWebView *_webView;
    id /* block */ _loadingHandler;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

- (id)scrollView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateConstraintConstants:(BOOL)a0;
- (void)loadView;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
