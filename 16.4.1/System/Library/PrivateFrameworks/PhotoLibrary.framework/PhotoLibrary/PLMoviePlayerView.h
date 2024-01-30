@class PLAVPlayerView, AVPlayer, UIView;

@interface PLMoviePlayerView : UIView {
    PLAVPlayerView *_avPlayerView;
    BOOL _destinationPlaceholderHidden;
}

@property (readonly, retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) long long destinationPlaceholderStyle;
@property (nonatomic, getter=isDestinationPlaceholderHidden) BOOL destinationPlaceholderHidden;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_installBackgroundView:(id)a0;
- (void)reattachVideoView;
- (void)setScaleMode:(long long)a0;
- (void)setScaleMode:(long long)a0 duration:(double)a1;

@end
