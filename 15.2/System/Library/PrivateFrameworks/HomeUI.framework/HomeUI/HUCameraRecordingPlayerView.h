@class UIProgressView, AVPlayer, AVPlayerLayer;

@interface HUCameraRecordingPlayerView : UIView

@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic) UIProgressView *progressView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)a0 displayingProgressView:(BOOL)a1;

@end
