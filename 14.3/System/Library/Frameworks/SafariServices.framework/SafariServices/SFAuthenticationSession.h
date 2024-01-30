@class NSString, NSURL, SFAuthenticationViewController;
@protocol _SFAuthenticationSessionDelegate;

@interface SFAuthenticationSession : NSObject <SFAuthenticationViewControllerPresentationDelegate, SFSafariViewControllerDelegateInternal> {
    NSURL *_initialURL;
    id /* block */ _completionHandler;
    SFAuthenticationViewController *_authViewController;
    NSString *_callbackURLScheme;
}

@property (weak, nonatomic) id<_SFAuthenticationSessionDelegate> _delegate;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession;
@property (nonatomic, getter=isSessionStarted) BOOL sessionStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)_startRequestingFromWebAuthenticationSession:(BOOL)a0 inWindow:(id)a1 dryRun:(BOOL)a2;
- (id)presentingViewControllerForAuthenticationViewController:(id)a0;
- (void)safariViewController:(id)a0 didDecideCookieSharingForURL:(id)a1 shouldCancel:(BOOL)a2;
- (void)safariViewController:(id)a0 hostApplicationOpenURL:(id)a1;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)startASWebAuthenticationSessionInWindow:(id)a0 dryRun:(BOOL)a1;
- (BOOL)start;
- (void)safariViewControllerDidFinish:(id)a0;

@end
