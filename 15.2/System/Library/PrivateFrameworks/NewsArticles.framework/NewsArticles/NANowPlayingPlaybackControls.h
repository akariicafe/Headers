@class UIButton, UIView;
@protocol NANowPlayingPlaybackControlsDelegate, NANowPlayingPlaybackControlsLayoutSpecProvider;

@interface NANowPlayingPlaybackControls : UIView

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<NANowPlayingPlaybackControlsDelegate> delegate;
@property (retain, nonatomic) UIButton *rewindButton;
@property (retain, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) UIButton *nextTrackButton;
@property (nonatomic) double inset;
@property (weak, nonatomic) id<NANowPlayingPlaybackControlsLayoutSpecProvider> layoutSpecProvider;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL nextTrackButtonEnabled;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)buttonColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inset:(double)a1 layoutSpecProvider:(id)a2;
- (void)rewindButtonTapped:(id)a0;
- (void)pauseButtonTapped:(id)a0;
- (void)playButtonTapped:(id)a0;
- (void)nextTrackButtonTapped:(id)a0;
- (id)disabledButtonColor;

@end
