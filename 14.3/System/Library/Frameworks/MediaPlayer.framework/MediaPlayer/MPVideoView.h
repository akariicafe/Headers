@class NSString, NSDictionary, AVPlayerLayer, UIView, _MPAVPlayerView, MPAVController;

@interface MPVideoView : UIView {
    _MPAVPlayerView *_playerView;
}

@property (weak, nonatomic) MPAVController *player;
@property (retain, nonatomic) NSString *movieSubtitle;
@property (retain, nonatomic) NSString *movieTitle;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (readonly, nonatomic) BOOL canChangeScaleMode;
@property (nonatomic) long long scaleMode;
@property (readonly, nonatomic) long long effectiveScaleMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } movieFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } movieContentFrame;
@property (retain, nonatomic) NSDictionary *AVURLAssetOptions;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic) UIView *contentView;

- (void)toggleScaleMode:(BOOL)a0;
- (void).cxx_destruct;
- (void)setScaleMode:(long long)a0 duration:(float)a1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setScaleMode:(long long)a0 animated:(BOOL)a1;

@end
