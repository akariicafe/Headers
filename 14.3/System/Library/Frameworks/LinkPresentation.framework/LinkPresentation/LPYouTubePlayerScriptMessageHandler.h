@class NSString, LPYouTubePlayerView;

@interface LPYouTubePlayerScriptMessageHandler : NSObject <WKScriptMessageHandler> {
    LPYouTubePlayerView *_playerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlayerView:(id)a0;
- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;

@end
