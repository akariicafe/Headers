@class UIButton, UIView;
@protocol NUNowPlayingPlaybackControlsLayoutSpecProvider, NUNowPlayingPlaybackControlsDelegate;

@interface NUNowPlayingPlaybackControls : UIView

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<NUNowPlayingPlaybackControlsDelegate> delegate;
@property (retain, nonatomic) UIButton *rewindButton;
@property (retain, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) UIButton *nextTrackButton;
@property (nonatomic) double inset;
@property (weak, nonatomic) id<NUNowPlayingPlaybackControlsLayoutSpecProvider> layoutSpecProvider;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL nextTrackButtonEnabled;

- (void).cxx_destruct;
- (id)buttonColor;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)playButtonTapped:(id)a0;
- (void)rewindButtonTapped:(id)a0;
- (void)pauseButtonTapped:(id)a0;
- (void)nextTrackButtonTapped:(id)a0;
- (id)disabledButtonColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inset:(double)a1 layoutSpecProvider:(id)a2;

@end
