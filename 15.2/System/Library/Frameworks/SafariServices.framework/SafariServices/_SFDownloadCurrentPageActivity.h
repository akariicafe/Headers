@class WKWebView;

@interface _SFDownloadCurrentPageActivity : UIApplicationExtensionActivity {
    WKWebView *_webView;
}

- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_presentActivityOnViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
