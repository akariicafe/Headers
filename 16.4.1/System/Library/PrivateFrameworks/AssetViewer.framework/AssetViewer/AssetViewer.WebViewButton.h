@interface AssetViewer.WebViewButton : UIControl <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ highlightedOverlayView;
}

@property (nonatomic) BOOL highlighted;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (BOOL)isHighlighted;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
