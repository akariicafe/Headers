@class UILabel, UIButton, UIView;
@protocol NANowPlayingDockedViewDelegate;

@interface NANowPlayingDockedView : NANowPlayingBackgroundView

@property (weak, nonatomic) id<NANowPlayingDockedViewDelegate> delegate;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *publisherLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *rewindButton;
@property (readonly, nonatomic) UIButton *playPauseButton;
@property (nonatomic) BOOL waiting;

- (void)layoutSubviews;
- (void)setPublisher:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setMarqueeRunning:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)setIsPlaying:(BOOL)a0 waiting:(BOOL)a1;
- (void)rewindButtonTapped:(id)a0;
- (void)pauseButtonTapped:(id)a0;
- (void)_updateTitleAccessibilityLabel;
- (void)playButtonTapped:(id)a0;

@end
