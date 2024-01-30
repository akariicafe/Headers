@class NSString, UIWebView;

@interface SLURLPreviewGenerator : NSObject <UIWebViewDelegate> {
    id /* block */ _completion;
}

@property (retain) UIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)uiWebView:(id)a0 decidePolicyForGeolocationRequestFromOrigin:(id)a1 frame:(id)a2 listener:(id)a3;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidFinishLoad:(id)a0;
- (void)_callCompletionWithPreview:(id)a0;
- (void)loadURL:(id)a0 completion:(id /* block */)a1;

@end
