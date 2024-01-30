@class WKWebView;

@interface _SFAddToHomeScreenActivity : UIAddToHomeScreenActivity {
    WKWebView *_webView;
}

- (id)activityType;
- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)_showsInSystemActionGroup;

@end
