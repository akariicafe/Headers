@interface PromotedContentUI.WebAdView : APPCPromotedContentView <WKUIDelegate, WKNavigationDelegate, APWebProcessDelegate> {
    void /* unknown type, empty encoding */ webView;
    void /* unknown type, empty encoding */ videoProgressMetricThresholds;
    void /* unknown type, empty encoding */ webViewDebugging;
    void /* unknown type, empty encoding */ outstreamVisibleThreshold;
    void /* unknown type, empty encoding */ nonOutstreamVisibleThreshold;
    void /* unknown type, empty encoding */ mraidActionTypes;
    void /* unknown type, empty encoding */ videoProgressMetricStatus;
    void /* unknown type, empty encoding */ unfairLock;
    void /* unknown type, empty encoding */ navigationCoordinator;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void)webView:(id)a0 didStartProvisionalNavigation:(id)a1;
- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void).cxx_destruct;
- (void)sizeCategoryChanged:(id)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallExpand:(id)a0 withMaximumWidth:(double)a1 andHeight:(double)a2;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)a0;
- (void)webProcessMRAIDJSODidCallOpen:(id)a0;
- (void)webProcessVideoAdJSOGetVideoInfo:(id /* block */)a0;
- (void)webProcessVideoAdJSOCreativeViewLoaded;
- (void)webProcessVideoAdJSOMediaPlaybackFailedWithErrorDescription:(id)a0;
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
- (void)webProcessDiagnosticJSOStatusReported:(id)a0 status:(id)a1;

@end
