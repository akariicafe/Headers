@class WKUserContentController, NSString, UIFont, WKWebView;
@protocol HUInlineWebContainerViewDelegate;

@interface HUInlineWebContainerView : UIView <WKUIDelegate, WKNavigationDelegate>

@property (nonatomic) double estimatedHeight;
@property (readonly, nonatomic) WKUserContentController *contentController;
@property (readonly, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *HTMLContent;
@property (retain, nonatomic) UIFont *font;
@property (weak, nonatomic) id<HUInlineWebContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)webView:(id)a0 shouldPreviewElement:(id)a1;
- (double)heightForWidth:(double)a0;
- (void)setUserStyleSheet;

@end
