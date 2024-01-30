@class SWCrashRetryThrottler, WKWebView, NSString;
@protocol FCHeadlineProviding, NULoadingDelegate;

@interface NUArticleWebViewController : UIViewController <UIScrollViewDelegate, WKNavigationDelegatePrivate, NULoadable>

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) SWCrashRetryThrottler *webCrashRetryThrottler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NULoadingDelegate> loadingDelegate;

+ (id)webViewConfiguration;

- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)_webView:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void)_webViewWebProcessDidCrash:(id)a0;
- (id)initWithHeadline:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
