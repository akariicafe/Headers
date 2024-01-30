@class UIWebView, NSString, UIToolbar, _UIBackdropView;
@protocol RemoteUIWebViewControllerDelegate;

@interface RemoteUIWebViewController : UIViewController <UIWebViewDelegate> {
    UIWebView *_webView;
    UIToolbar *_toolbar;
    id /* block */ _loadCompletion;
    _UIBackdropView *_statusBarBackdrop;
}

@property (weak, nonatomic) id<RemoteUIWebViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIToolbar *toolbar;
@property (readonly, nonatomic) UIWebView *webView;
@property (nonatomic) BOOL scalesPageToFit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadURL:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (void)webViewDidFinishLoad:(id)a0;
- (void)donePressed:(id)a0;
- (void)viewDidLoad;
- (void)loadURL:(id)a0 completion:(id /* block */)a1;

@end
