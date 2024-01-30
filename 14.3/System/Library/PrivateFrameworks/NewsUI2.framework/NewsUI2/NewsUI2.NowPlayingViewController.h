@interface NewsUI2.NowPlayingViewController : UIViewController <NUNowPlayingViewControllerDelegate, NUNowPlayingDockedViewDelegate> {
    void /* unknown type, empty encoding */ dockPresentationMode;
    void /* unknown type, empty encoding */ nowPlayingViewController;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ playbackState;
    void /* unknown type, empty encoding */ publisherImageCache;
    void /* unknown type, empty encoding */ nowPlayingImageCache;
    void /* unknown type, empty encoding */ activityViewControllerFactory;
    void /* unknown type, empty encoding */ currentTrack;
    void /* unknown type, empty encoding */ miniPlayerView;
    void /* unknown type, empty encoding */ commands;
}

- (void)nowPlayingViewController:(id)a0 seekToPosition:(double)a1;
- (void)nowPlayingViewControllerDidTapRewind:(id)a0;
- (void)nowPlayingViewControllerDidTapPause:(id)a0;
- (void)nowPlayingViewControllerDidTapPlay:(id)a0;
- (void)nowPlayingViewControllerDidTapNextTrack:(id)a0;
- (void)nowPlayingViewControllerDidTapPlaybackRate:(id)a0;
- (void)nowPlayingViewControllerDidTapEllipsis:(id)a0;
- (void)nowPlayingViewControllerDidTapDismissButton:(id)a0;
- (id)nowPlayingViewController:(id)a0 didReceiveContextMenuInteraction:(id)a1 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (void)nowPlayingViewControllerDidRequestNavigateToArticle:(id)a0;
- (void)nowPlayingDockedViewDidTapRewind:(id)a0;
- (void)nowPlayingDockedViewDidTapPause:(id)a0;
- (void)nowPlayingDockedViewDidTapPlay:(id)a0;
- (void)nowPlayingDockedViewTogglePlayPause:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
