@class WebView, WebNodeHighlightView;

@interface WebHighlightLayer : CALayer {
    WebNodeHighlightView *_view;
    WebView *_webView;
}

- (id)actionForKey:(id)a0;
- (void)layoutSublayers;
- (id)initWithHighlightView:(id)a0 webView:(id)a1;

@end
