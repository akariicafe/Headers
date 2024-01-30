@class UIView, NUNowPlayingTitleView, NUNowPlayingPlaybackScrubber, NUNowPlayingVolumeControl, NUNowPlayingArtworkView, NUNowPlayingPlaybackControls, _UIGrabber, UIButton, NUNowPlayingBottomControls;
@protocol NUNowPlayingViewControllerDelegate;

@interface NUNowPlayingViewController : UIViewController <NUNowPlayingPlaybackControlsLayoutSpecProvider, NUNowPlayingTitleViewLayoutSpecProvider, NUNowPlayingPlaybackControlsDelegate, NUNowPlayingPlaybackScrubberDelegate, NUNowPlayingBottomControlsDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NUNowPlayingArtworkView *artworkView;
@property (retain, nonatomic) NUNowPlayingTitleView *titleView;
@property (retain, nonatomic) NUNowPlayingPlaybackScrubber *playbackScrubber;
@property (retain, nonatomic) NUNowPlayingPlaybackControls *playbackControls;
@property (retain, nonatomic) NUNowPlayingVolumeControl *volumeControl;
@property (retain, nonatomic) NUNowPlayingBottomControls *bottomControls;
@property (retain, nonatomic) _UIGrabber *grabberView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (weak, nonatomic) id<NUNowPlayingViewControllerDelegate> delegate;
@property (readonly, nonatomic) double publisherLogoHeight;

- (void)setArtwork:(id)a0;
- (id)init;
- (double)titleLabelFontSize;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)dismissButtonTapped:(id)a0;
- (void)setRate:(double)a0;
- (void)setTitle:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)applicationWillEnterForeground;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setCurrentTime:(double)a0 duration:(double)a1 animated:(BOOL)a2;
- (void)setIsPlaying:(BOOL)a0 waiting:(BOOL)a1;
- (void)setArtwork:(id)a0 backgroundImage:(id)a1;
- (struct CGSize { double x0; double x1; })artworkSizeForViewWidth:(double)a0;
- (void)setPublisherImage:(id)a0 fallbackName:(id)a1;
- (double)publisherLogoHeight;
- (void)setNextTrackButtonEnabled:(BOOL)a0;
- (void)seekToPosition:(double)a0;
- (void)nowPlayingBottomControlsDidTapPlaybackSpeed:(id)a0;
- (void)nowPlayingBottomControlsDidTapEllipsis:(id)a0;
- (double)nextTrackAndRewindButtonPointSize;
- (double)playPausePointSize;
- (void)nowPlayingPlaybackControlsDidTapRewind:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapPause:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapPlay:(id)a0;
- (void)nowPlayingPlaybackControlsDidTapNextTrack:(id)a0;
- (double)publisherLogoBottomMargin;
- (void)artworkTapped:(id)a0;
- (void)titleViewTapped:(id)a0;

@end
