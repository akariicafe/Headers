@class PKPaymentProvisioningController, NSString, NSURL, WKWebView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCardIneligibleViewController : UIViewController <WKNavigationDelegate> {
    WKWebView *_webView;
    id /* block */ _preflightCompletion;
}

@property (nonatomic) long long reason;
@property (nonatomic) long long context;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (retain, nonatomic) NSURL *learnMoreURL;
@property (copy, nonatomic) id /* block */ learnMorePresentationHandler;
@property (copy, nonatomic) id /* block */ continueActionHandler;
@property BOOL preloadLearnMoreWebView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webView;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)handleDone:(id)a0;
- (id)_alertWithReason:(long long)a0 learnMoreURL:(id)a1 isPreloaded:(BOOL)a2;
- (void)_webViewDidLoad:(BOOL)a0 withError:(id)a1;
- (id)initWithReason:(long long)a0 context:(long long)a1 setupDelegate:(id)a2;
- (void)viewDidLoad;

@end
