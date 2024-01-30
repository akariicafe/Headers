@class __AVPlayerLayerView, NSString, LPAVPlayerViewController, LPVideoView, AVPlayerController, AVPlayer;

@interface LPFullScreenVideoController : NSObject <AVPlayerViewControllerDelegatePrivate> {
    LPVideoView *_sourceView;
    LPAVPlayerViewController *_playerViewController;
    __AVPlayerLayerView *_playerLayerView;
    AVPlayerController *_playerController;
    AVPlayer *_player;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void).cxx_destruct;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)a0;
- (BOOL)playerViewControllerShouldMuteVolumeForFullScreenDismissalTransition:(id)a0;
- (void)playerViewController:(id)a0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)playerViewController:(id)a0 willEndFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)present;
- (id)initWithPlayer:(id)a0 sourceView:(id)a1;
- (void)setUpFullScreenVideoViewControllerIfNeeded;
- (void)didCompleteDismissal;

@end
