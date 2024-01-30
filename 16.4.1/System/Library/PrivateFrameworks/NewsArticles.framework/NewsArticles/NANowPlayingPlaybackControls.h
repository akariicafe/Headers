@class UIButton, UIView;
@protocol NANowPlayingPlaybackControlsDelegate, NANowPlayingPlaybackControlsLayoutSpecProvider;

@interface NANowPlayingPlaybackControls : UIView

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<NANowPlayingPlaybackControlsDelegate> delegate;
@property (retain, nonatomic) UIButton *rewindButton;
@property (retain, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) UIButton *forwardButton;
@property (nonatomic) double inset;
@property (weak, nonatomic) id<NANowPlayingPlaybackControlsLayoutSpecProvider> layoutSpecProvider;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL nextTrackButtonEnabled;
@property (nonatomic) BOOL skipForwardButtonEnabled;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)buttonColor;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)disabledButtonColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inset:(double)a1 layoutSpecProvider:(id)a2;
- (void)nextTrackButtonTapped:(id)a0;
- (void)pauseButtonTapped:(id)a0;
- (void)playButtonTapped:(id)a0;
- (void)rewindButtonTapped:(id)a0;
- (void)skipForwardButtonTapped:(id)a0;
- (void)updateForwardButton;

@end
