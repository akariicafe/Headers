@class ADWebView, NSString, ADWebViewGestureRecognizer, _WKRemoteObjectInterface, ADAdImpressionPublicAttributes;
@protocol ADWebProcessProxy, ADCreativeControllerDelegate;

@interface ADCreativeController : NSObject <WKNavigationDelegate, ADWebProcessDelegate, _WKInputDelegate> {
    id<ADWebProcessProxy> _webProcessProxy;
}

@property (retain, nonatomic) ADAdImpressionPublicAttributes *publicAttributes;
@property (copy, nonatomic) id /* block */ loadCompletion;
@property (retain, nonatomic) _WKRemoteObjectInterface *remoteObjectInterface;
@property (copy, nonatomic) NSString *creativeIdentifier;
@property (copy, nonatomic) NSString *adSpaceIdentifier;
@property (nonatomic) BOOL isExpandedCreativePresented;
@property (nonatomic) BOOL browserContextControllerDidLoad;
@property (retain, nonatomic) ADWebViewGestureRecognizer *gestureRecognizer;
@property (nonatomic) BOOL shouldBlockNavigation;
@property (readonly, nonatomic) ADWebView *creativeView;
@property (nonatomic, getter=isContentVisible) BOOL contentVisible;
@property (weak, nonatomic) id<ADCreativeControllerDelegate> delegate;
@property (nonatomic) BOOL tapWasRecognized;
@property (nonatomic) BOOL isVideoAd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_webView:(id)a0 focusShouldStartInputSession:(id)a1;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)_tapRecognized:(id)a0;
- (void)unregisterExportedObjectInterface;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)_callLoadCompletionWithError:(id)a0;
- (void)tearDown;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)a0;
- (void)webProcessMRAIDJSODidCallOpen:(id)a0;
- (void)webProcessVideoAdJSOGetVideoInfo:(id /* block */)a0;
- (void)webProcessVideoAdJSOCreativeViewLoaded;
- (void)webProcessVideoAdJSODidCallPlayStarted:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallPlayResumed:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallPlayPaused:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallPlayProgressed:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)a0;
- (void)webProcessVideoAdJSODidCallViewabilityChanged:(BOOL)a0 playTime:(float)a1 volume:(float)a2;
- (void)webProcessVideoAdJSODidCallVolumeChanged:(float)a0 playTime:(float)a1;
- (void)webProcessVideoAdJSODidCallAudioMuted:(float)a0;
- (void)webProcessVideoAdJSODidCallAudioUnmuted:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallVideoTapped:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallSkipAdTapped:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallFullScreenTapped:(float)a0 volume:(float)a1;
- (void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)a0 volume:(float)a1;
- (id)_incrementCreativeIdentifier;
- (void)webProcessMRAIDJSODidCallExpand:(id)a0 withMaximumSize:(id)a1;
- (BOOL)_navigationIsBlocked;
- (void)_resetGestureFlags;
- (void)_requestOpenURL:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCreativeView;
- (void)resetVideoPlaytime;
- (void)adSpaceActionViewControllerWillDismiss:(id)a0;
- (void)adSpaceActionViewControllerWillPresent:(id)a0;
- (void)loadAdImpression:(id)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateWebProcessProxyVisibility;
- (id)_customUserAgentString;
- (id)_userAgentForUserAgentString:(id)a0;
- (void)_navigationAttemptBlockedDueToAccidentalTapForMRAIDActionType:(long long)a0;
- (void)_tapGestureTimerDidExpireForRequestedActionType:(long long)a0;
- (BOOL)contentVisible;

@end
