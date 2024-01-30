@class WebView, WebNodeHighlightView;

@interface WebHighlightLayer : CALayer {
    WebNodeHighlightView *_view;
    WebView *_webView;
}

- (void)layoutSublayers;
- (id)actionForKey:(id)a0;
- (id)initWithHighlightView:(id)a0 webView:(id)a1;

@end
