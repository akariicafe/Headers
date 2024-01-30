@class WebView;

@interface WebIndicateLayer : CALayer {
    WebView *_webView;
}

- (void)layoutSublayers;
- (id)actionForKey:(id)a0;
- (id)initWithWebView:(id)a0;

@end
