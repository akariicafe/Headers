@class MFWebViewDictionary, EMContentRepresentation, NSString, WKWebView, _WKRemoteObjectInterface, NSURL, NSError;
@protocol MFMailWebProcessDelegate;

@interface MFWebViewLoadingController : NSObject <WKNavigationDelegate, WKNavigationDelegatePrivate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface;
@property (retain, nonatomic) EMContentRepresentation *contentRepresentation;
@property (retain, nonatomic) NSURL *loadingURL;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL webProcessPluginNeedsUpdate;
@property (readonly, nonatomic) MFWebViewDictionary *webViewConstants;
@property (weak, nonatomic) id<MFMailWebProcessDelegate> webProcessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopLoading;
- (void)requestWebViewLoadWithError:(id)a0;
- (void)requestWebViewLoadWithContentRepresentation:(id)a0;
- (void)requestWebViewLoadWithContext:(id)a0;
- (void)requestWebViewLoadWithoutShowingMessageWithContext:(id)a0;
- (void)requestWebViewLoadWithoutShowingMessageWithRepresentation:(id)a0;
- (void)webProcessBrowserContextControllerDidBecomeAvailable;
- (void)slapWebView;
- (void)_reconveneWebProcessBundle;
- (void)_unregisterWebProcessDelegate:(id)a0;
- (void)_registerWebProcessDelegate:(id)a0;
- (void)_doIssueLoadRequest;

@end
