@class NSString, UIActivityIndicatorView, UIWebView, VSWebAuthenticationViewModel;
@protocol VSAuthenticationViewControllerDelegate;

@interface VSWebAuthenticationViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate, VSMessageQueueDelegate, VSWebAuthenticationViewController>

@property (retain, nonatomic) UIWebView *webView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VSWebAuthenticationViewModel *viewModel;
@property (weak, nonatomic) id<VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredLogoSize;

- (void).cxx_destruct;
- (void)_cancelButtonPressed:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidStartLoad:(id)a0;
- (void)webViewDidFinishLoad:(id)a0;
- (id)uiWebView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (void)uiWebView:(id)a0 didFirstLayoutInFrame:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_sendMessage:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)_stopObservingViewModel:(id)a0;
- (void)_startObservingViewModel:(id)a0;
- (void)didAddMessagesToMessageQueue:(id)a0;
- (void)_sendMessages:(id)a0;
- (void)_didBeginActivity;
- (void)_didEndActivity;
- (void)_retrieveMessages;
- (id)_canonicalRequestForRequest:(id)a0;

@end
