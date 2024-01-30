@class _SFWebView;

@interface _SFFindOnPageUIActivity : _SFActivity {
    _SFWebView *_webView;
}

- (id)activityTitle;
- (id)activityType;
- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (id)_systemImageName;
- (void)performActivity;
- (void)activityDidFinish:(BOOL)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;

@end
