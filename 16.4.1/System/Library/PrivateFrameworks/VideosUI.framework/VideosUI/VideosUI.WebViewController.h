@interface VideosUI.WebViewController : UIViewController <WKNavigationDelegate> {
    void /* unknown type, empty encoding */ activityIndicator;
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ url;
}

- (void)doneTapped;
- (void)backTapped;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
