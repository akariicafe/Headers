@class NSMutableArray, NSString, LPYouTubePlayerViewFullScreenDelegate, LPYouTubePlayerWebView, LPYouTubePlayerScriptMessageHandler;
@protocol LPYouTubePlayerDelegate;

@interface LPYouTubePlayerView : UIView <UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate> {
    LPYouTubePlayerViewFullScreenDelegate *_fullScreenDelegate;
    LPYouTubePlayerWebView *_webView;
    NSString *_videoID;
    long long _state;
    LPYouTubePlayerScriptMessageHandler *_scriptMessageHandler;
    BOOL _ready;
    NSMutableArray *_commandsPendingPlayerReadiness;
}

@property (weak, nonatomic) id<LPYouTubePlayerDelegate> delegate;
@property (nonatomic) BOOL startsPlayingAutomatically;
@property (nonatomic) BOOL showsControls;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_webView:(id)a0 navigation:(id)a1 didFailProvisionalLoadInSubframe:(id)a2 withError:(id)a3;
- (void)layoutSubviews;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)exitFullScreen;
- (void)seekTo:(double)a0;
- (void)enterFullScreen;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;
- (void)pause;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (void)play;
- (void)dealloc;
- (void)webViewWebContentProcessDidTerminate:(id)a0;
- (void)createVideoPlayerView;
- (void)loadVideoWithID:(id)a0;
- (void)didReceiveScriptMessage:(id)a0;
- (void)dispatchErrorWithCode:(long long)a0;
- (void)_evaluatePlayerCommand:(id)a0;
- (BOOL)_shouldUseElementFullScreen;
- (id)_parameterScript;
- (void)loadVideoWithURL:(id)a0;
- (void)loadVideoWithEmbedURL:(id)a0;

@end
