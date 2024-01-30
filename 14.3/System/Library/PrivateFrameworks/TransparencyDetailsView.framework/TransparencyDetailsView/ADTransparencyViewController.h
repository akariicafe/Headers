@class NSString, NSDictionary, WKWebView, UILabel, UIActivityIndicatorView, UINavigationBar;
@protocol ADTransparencyViewControllerDelegate;

@interface ADTransparencyViewController : UIViewController <WKNavigationDelegate> {
    UIActivityIndicatorView *activityIndicator;
}

@property (readonly, nonatomic) NSString *transparencyDetailsUnavailableMessage;
@property (readonly, nonatomic) NSString *transparencyRendererPayload;
@property (readonly, nonatomic) NSString *transparencyRendererURL;
@property (copy, nonatomic) NSString *transparencyDetails;
@property (retain, nonatomic) NSDictionary *transparencyDetailsData;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) WKWebView *myWebView;
@property (retain, nonatomic) UINavigationBar *transparencyNavBar;
@property (nonatomic) BOOL isiPad;
@property (retain, nonatomic) id<ADTransparencyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredInterfaceOrientationForPresentation;
- (void)_commonInit;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)_showErrorMessage:(id)a0;
- (void)loadWebView;
- (void)errorDelegate;
- (void)presentViewDelegate;
- (void)_hideErrorMessage;
- (void)_closeViewController:(id)a0;
- (void)requestViewWithTransparencyDetailsDictionary:(id)a0;
- (void)requestViewWithTransparencyDetails:(id)a0;
- (id)bundleForTransparencyDetailsView;
- (void)_reportTransparencyViewControllerEventWithType:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithTransparencyDetails:(id)a0;

@end
