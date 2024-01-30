@class WKWebView, NSLayoutConstraint;

@interface QLWebLocationItemViewController : QLItemViewController {
    WKWebView *_webView;
    id /* block */ _loadingHandler;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}

- (id)scrollView;
- (void)loadView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (void)_updateConstraintConstants:(BOOL)a0;
- (BOOL)automaticallyUpdateScrollViewContentOffset;
- (BOOL)automaticallyUpdateScrollViewContentInset;
- (BOOL)automaticallyUpdateScrollViewIndicatorInset;

@end
