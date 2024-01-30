@class ADWebView, ADWebViewGestureRecognizer, NSString, ADCountdownButton, NSURL, _WKRemoteObjectInterface, ADHomeButtonHandler;
@protocol ADWebProcessProxy;

@interface ADExpandActionViewController : ADActionViewController <WKNavigationDelegate> {
    id<ADWebProcessProxy> _webProcessProxy;
}

@property (retain, nonatomic) ADWebView *webView;
@property (retain, nonatomic) ADCountdownButton *dismissButton;
@property (nonatomic) BOOL adIsDismissing;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) struct CGSize { double width; double height; } maximumExpandedSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } webViewFrame;
@property (retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface;
@property (retain, nonatomic) ADWebViewGestureRecognizer *gestureRecognizer;
@property (copy, nonatomic) NSString *creativeIdentifier;
@property (nonatomic) BOOL browserContextControllerDidLoad;
@property (nonatomic) BOOL shouldBlockNavigation;
@property (nonatomic) BOOL tapWasRecognized;
@property (retain, nonatomic) ADHomeButtonHandler *homeButtonHandler;
@property (retain, nonatomic) id notificationObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)_tapRecognized:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)_dismissButtonTapped;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)dismiss;
- (void)viewWillLayoutSubviews;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallOpen:(id)a0;
- (void)_dismissKeyboard;
- (void)_registerExportedObjectInterface;
- (void)_dismissWithSystemEvent:(int)a0;
- (void)_unregisterExportedObjectInterface;
- (void)_updateWebViewFrame;
- (id)_incrementCreativeIdentifier;
- (void)_updateJSOExpandedSize;
- (void)webProcessMRAIDJSODidCallExpand:(id)a0 withMaximumSize:(id)a1;
- (BOOL)_navigationIsBlocked;
- (void)_resetGestureFlags;
- (void)_requestOpenURL:(id)a0;
- (void)clientApplicationDidEnterBackground;
- (void)didSetAdSpace;

@end
