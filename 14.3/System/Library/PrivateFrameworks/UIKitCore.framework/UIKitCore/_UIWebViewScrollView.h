@class UIWebBrowserView, _UIWebViewScrollViewDelegateForwarder;

@interface _UIWebViewScrollView : UIWebScrollView {
    _UIWebViewScrollViewDelegateForwarder *_forwarder;
    BOOL _bouncesSetExplicitly;
    BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    UIWebBrowserView *_browserView;
}

- (void)setContentInsetAdjustmentBehavior:(long long)a0;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)a0;
- (void)setBouncesHorizontally:(BOOL)a0;
- (void)setBouncesVertically:(BOOL)a0;
- (void)dealloc;
- (BOOL)_contentInsetAdjustmentBehaviorWasExternallyOverridden;
- (void)_setWebView:(id)a0;
- (void)_weaklySetBouncesHorizontally:(BOOL)a0;
- (void)setBounces:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (id)delegate;

@end
