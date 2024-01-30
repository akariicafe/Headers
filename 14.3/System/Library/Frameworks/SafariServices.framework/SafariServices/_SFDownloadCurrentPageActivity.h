@class WKWebView;

@interface _SFDownloadCurrentPageActivity : UIApplicationExtensionActivity {
    WKWebView *_webView;
}

- (void).cxx_destruct;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)prepareWithActivityItems:(id)a0;
- (id)initWithWebView:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
