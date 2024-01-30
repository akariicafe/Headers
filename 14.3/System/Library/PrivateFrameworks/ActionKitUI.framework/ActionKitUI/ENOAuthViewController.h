@class NSString, UIWebView, NSURL, UIActivityIndicatorView;
@protocol ENOAuthViewControllerDelegate;

@interface ENOAuthViewController : UIViewController <UIWebViewDelegate>

@property (retain, nonatomic) NSURL *authorizationURL;
@property (retain, nonatomic) NSString *oauthCallbackPrefix;
@property (retain, nonatomic) UIWebView *webView;
@property (copy, nonatomic) NSString *currentProfileName;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) BOOL isSwitchingAllowed;
@property (weak, nonatomic) id<ENOAuthViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel:(id)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidFinishLoad:(id)a0;
- (void)animationDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)viewDidLoad;
- (void)loadWebView;
- (id)initWithAuthorizationURL:(id)a0 oauthCallbackPrefix:(id)a1 profileName:(id)a2 allowSwitching:(BOOL)a3 delegate:(id)a4;
- (void)switchProfile:(id)a0;
- (void)updateUIForNewProfile:(id)a0 withAuthorizationURL:(id)a1;

@end
