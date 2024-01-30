@class TVButton, _TVImageView, _TVProgressView;
@protocol VUILibraryEpisodeFrameViewDelegate;

@interface VUILibraryEpisodeFrameView : UIView

@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) _TVProgressView *progressView;
@property (retain, nonatomic) TVButton *playButton;
@property (nonatomic) long long layout;
@property (retain, nonatomic) _TVImageView *fullyPlayedImageView;
@property (weak, nonatomic) id<VUILibraryEpisodeFrameViewDelegate> delegate;

+ (void)configureEpisodeFrameView:(id)a0 withMedia:(id)a1 layout:(long long)a2 imageSize:(struct CGSize { double x0; double x1; })a3;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_playButtonPressed;

@end
