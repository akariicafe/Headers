@class NSString, WKWebView, LPYouTubePlayerScriptMessageHandler, NSMutableArray;
@protocol LPYouTubePlayerDelegate;

@interface LPYouTubePlayerView : UIView <UIScrollViewDelegate, WKNavigationDelegate, WKUIDelegate> {
    WKWebView *_webView;
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

- (void)play;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 preferences:(id)a2 decisionHandler:(id /* block */)a3;
- (void)seekTo:(double)a0;
- (void)didReceiveScriptMessage:(id)a0;
- (void)dispatchErrorWithCode:(long long)a0;
- (void)_evaluatePlayerCommand:(id)a0;
- (id)_parameterScript;
- (void)loadVideoWithURL:(id)a0;
- (void)loadVideoWithEmbedURL:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)_webView:(id)a0 navigation:(id)a1 didFailProvisionalLoadInSubframe:(id)a2 withError:(id)a3;
- (void)webView:(id)a0 didFailNavigation:(id)a1 withError:(id)a2;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)layoutSubviews;
- (void)createVideoPlayerView;
- (void)pause;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadVideoWithID:(id)a0;
- (void)webView:(id)a0 didFailProvisionalNavigation:(id)a1 withError:(id)a2;

@end
