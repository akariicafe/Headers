@class NANowPlayingBottomControls, NANowPlayingVolumeControl, NANowPlayingPlaybackScrubber, NANowPlayingTitleView, UIView, _UIGrabber, NANowPlayingPlaybackControls, NANowPlayingArtworkView, UIButton;
@protocol NANowPlayingViewControllerDelegate;

@interface NANowPlayingViewController : UIViewController <NANowPlayingPlaybackControlsLayoutSpecProvider, NANowPlayingTitleViewLayoutSpecProvider, NANowPlayingPlaybackControlsDelegate, NANowPlayingPlaybackScrubberDelegate, NANowPlayingBottomControlsDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NANowPlayingArtworkView *artworkView;
@property (retain, nonatomic) NANowPlayingTitleView *titleView;
@property (retain, nonatomic) NANowPlayingPlaybackScrubber *playbackScrubber;
@property (retain, nonatomic) NANowPlayingPlaybackControls *playbackControls;
@property (retain, nonatomic) NANowPlayingVolumeControl *volumeControl;
@property (retain, nonatomic) NANowPlayingBottomControls *bottomControls;
@property (retain, nonatomic) _UIGrabber *grabberView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (weak, nonatomic) id<NANowPlayingViewControllerDelegate> delegate;
@property (readonly, nonatomic) double publisherLogoHeight;

- (void)setRate:(double)a0;
- (void)applicationWillEnterForeground;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dismissButtonTapped:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setArtwork:(id)a0;
- (void)setTitle:(id)a0;
- (void)nowPlayingBottomControlsDidTapPlaybackSpeed:(id)a0;
- (void)nowPlayingBottomControlsDidTapEllipsis:(id)a0;
- (double)publisherLogoHeight;
- (double)publisherLogoBottomMargin;
- (double)titleLabelFontSize;
- (void)setPublisherImage:(id)a0 fallbackName:(id)a1;
- (void)artworkTapped:(id)a0;
- (void)titleViewTapped:(id)a0;
- (void)setCurrentTime:(double)a0 duration:(double)a1 animated:(BOOL)a2;
- (void)setArtwork:(id)a0 animated:(BOOL)a1;
- (void)setArtwork:(id)a0 backgroundImage:(id)a1 animated:(BOOL)a2;
- (void)setNextTrackButtonEnabled:(BOOL)a0;
- (void)nowPlayingPlaybackControlsDidTapRewind:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapPause:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapPlay:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapNextTrack:(id)a0;
- (void)seekToPosition:(double)a0;
- (void)setArtwork:(id)a0 backgroundImage:(id)a1;
- (void)setIsPlaying:(BOOL)a0 waiting:(BOOL)a1;
- (struct CGSize { double x0; double x1; })artworkSizeForViewWidth:(double)a0;
- (double)playPausePointSize;
- (double)nextTrackAndRewindButtonPointSize;

@end
