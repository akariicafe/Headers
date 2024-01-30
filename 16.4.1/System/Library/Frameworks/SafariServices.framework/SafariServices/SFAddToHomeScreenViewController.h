@class _UIRemoteViewController, NSString, NSURL, SFQueueingServiceViewControllerProxy, _WKApplicationManifest, NSDictionary, _UIAsyncInvocation, SFAddToHomeScreenRemoteViewController, WKWebView;
@protocol SFAddToHomeScreenServiceProtocol;

@interface SFAddToHomeScreenViewController : UIViewController <SFQueueingServiceViewControllerProxyDelegate, SFAddToHomeScreenRemoteViewControllerDelegate, _UIRemoteViewControllerContaining> {
    SFAddToHomeScreenRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    SFQueueingServiceViewControllerProxy<SFAddToHomeScreenServiceProtocol> *_serviceProxy;
    NSURL *_initialURL;
    WKWebView *_webView;
    _WKApplicationManifest *_manifest;
    NSDictionary *_webClipMetadataFetcherResult;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

- (id)serviceProxy;
- (void)_connectToService;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0 completion:(id /* block */)a1;
- (void)_addRemoteViewControllerIfNeeded;
- (void)_didLoadRemoteViewController:(id)a0;
- (void)_fetchWebClipMetadataViaJavaScript;
- (void)_initializeViewService;
- (id)initWithURL:(id)a0 completion:(id /* block */)a1;
- (void)remoteViewController:(id)a0 didFinishWithResult:(BOOL)a1;
- (void)serviceProxyWillQueueInvocation:(id)a0;

@end
