@class NSString, TMTumblrAuthenticator, WKWebView;
@protocol WFTumblrViewControllerDelegate;

@interface WFTumblrViewController : UIViewController <WKNavigationDelegate>

@property (retain, nonatomic) TMTumblrAuthenticator *authenticator;
@property (weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<WFTumblrViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithOAuthConsumerKey:(id)a0 OAuthConsumerSecret:(id)a1;

@end
