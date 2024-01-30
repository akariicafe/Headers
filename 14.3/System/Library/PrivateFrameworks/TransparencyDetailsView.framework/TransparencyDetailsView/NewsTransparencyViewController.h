@class UINavigationItem, NSString, UIActivityIndicatorView, UINavigationBar, UIBarButtonItem, NSDictionary, UIViewController, UILabel, WKWebView;
@protocol NewsTransparencyViewControllerDelegate;

@interface NewsTransparencyViewController : UIViewController <WKNavigationDelegate> {
    UIActivityIndicatorView *activityIndicator;
    UINavigationItem *navBarItem;
    UIBarButtonItem *leftButton;
    UIViewController *debugViewController;
}

@property (readonly, nonatomic) NSString *transparencyDetailsUnavailableMessage;
@property (readonly, nonatomic) NSString *transparencyRendererPayload;
@property (readonly, nonatomic) NSString *transparencyRendererURL;
@property (retain, nonatomic) NSDictionary *transparencyDetailsDictionary;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) WKWebView *myNewsPrivacyWebView;
@property (retain, nonatomic) UINavigationBar *transparencyNavBar;
@property (nonatomic) BOOL isiPad;
@property (nonatomic) BOOL isClientTodayWidget;
@property (retain, nonatomic) id<NewsTransparencyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDeviceLocked;
- (void)_commonInit;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (id)initWithNewsTransparencyDetailsDictionary:(id)a0;
- (void)_showErrorMessage:(id)a0;
- (void)loadWebView;
- (void)errorDelegate;
- (void)presentViewDelegate;
- (void)_hideErrorMessage;
- (void)_closeViewController:(id)a0;
- (void)requestUserPassCodeUnlockUIWithBlock:(id /* block */)a0;
- (void)_openDebugView:(id)a0;
- (void)displayDebugButtonWaitingIndicator;
- (void)debugDetailsViewControllerReady:(id)a0;

@end
