@class WebView;

@interface WebIndicateLayer : CALayer {
    WebView *_webView;
}

- (id)actionForKey:(id)a0;
- (void)layoutSublayers;
- (id)initWithWebView:(id)a0;

@end
