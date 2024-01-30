@class NSString, UILabel, UIView, UIButton;
@protocol NUNowPlayingDockedViewDelegate;

@interface NUNowPlayingDockedView : NUNowPlayingBackgroundView <NUMagicTappableDockView>

@property (weak, nonatomic) id<NUNowPlayingDockedViewDelegate> delegate;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *publisherLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *rewindButton;
@property (readonly, nonatomic) UIButton *playPauseButton;
@property (nonatomic) BOOL waiting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPublisher:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMarqueeRunning:(BOOL)a0;
- (void)setIsPlaying:(BOOL)a0 waiting:(BOOL)a1;
- (BOOL)handleAccessibilityMagicTap;
- (void)playButtonTapped:(id)a0;
- (void)rewindButtonTapped:(id)a0;
- (void)pauseButtonTapped:(id)a0;
- (void)_updateTitleAccessibilityLabel;

@end
