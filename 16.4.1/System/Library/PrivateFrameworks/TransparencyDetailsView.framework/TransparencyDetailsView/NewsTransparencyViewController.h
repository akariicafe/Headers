@class UIViewController, NSString, NSDictionary, WKWebView, UILabel, UIActivityIndicatorView, UIBarButtonItem;
@protocol NewsTransparencyViewControllerDelegate;

@interface NewsTransparencyViewController : UIViewController <WKNavigationDelegate> {
    UIActivityIndicatorView *activityIndicator;
    UIBarButtonItem *leftButton;
    UIViewController *debugViewController;
}

@property (readonly, nonatomic) NSString *transparencyDetailsUnavailableMessage;
@property (readonly, nonatomic) NSString *transparencyRendererPayload;
@property (readonly, nonatomic) NSString *transparencyRendererURL;
@property (readonly, nonatomic) BOOL renderingStatusForLocationPermission;
@property (readonly, nonatomic) BOOL renderingStatusForPAPermission;
@property (retain, nonatomic) NSDictionary *transparencyDetailsDictionary;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) WKWebView *myNewsPrivacyWebView;
@property (nonatomic) BOOL isiPad;
@property (nonatomic) BOOL isClientTodayWidget;
@property (retain, nonatomic) id notificationObserver;
@property (retain, nonatomic) id<NewsTransparencyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (BOOL)isDeviceLocked;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)_commonInit;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_showErrorMessage:(id)a0;
- (id)initWithNewsTransparencyDetailsDictionary:(id)a0;
- (void)errorDelegate;
- (void)loadWebView;
- (void)_openDebugView:(id)a0;
- (void)_closeViewController:(id)a0;
- (void)_hideErrorMessage;
- (void)debugDetailsViewControllerReady:(id)a0;
- (void)displayDebugButtonWaitingIndicator;
- (void)presentViewDelegate;
- (void)requestUserPassCodeUnlockUIWithBlock:(id /* block */)a0;

@end
