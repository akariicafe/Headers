@class NSString, NSURL, UIWebView;
@protocol RUIWebContainerViewDelegate;

@interface RUIWebContainerView : UIView <UIWebViewDelegate> {
    BOOL _highlighted;
    BOOL _reallyHighlighted;
    NSURL *_baseURL;
}

@property (readonly, nonatomic) UIWebView *webView;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (weak, nonatomic) id<RUIWebContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidFinishLoad:(id)a0;
- (double)heightForWidth:(double)a0;
- (void).cxx_destruct;
- (void)setUserStyleSheet:(id)a0;
- (BOOL)uiWebView:(id)a0 previewIsAllowedForPosition:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithContent:(id)a0 baseURL:(id)a1;
- (void)updateContent:(id)a0;
- (void)_setHighlightedNow;
- (id)_jsBridgeURLWithPath:(id)a0;
- (void)_addContentChangeObservingScript;
- (BOOL)_handleJavascriptBridgeRequest:(id)a0;

@end
