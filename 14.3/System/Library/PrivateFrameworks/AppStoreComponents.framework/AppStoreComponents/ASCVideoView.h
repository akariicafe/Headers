@class AVPlayerLayer, ASCBorderedScreenshotView, AVPlayer;

@interface ASCVideoView : UIView

@property (readonly, nonatomic) ASCBorderedScreenshotView *previewFrameArtwork;
@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (readonly, nonatomic) BOOL isPlaying;

- (void).cxx_destruct;
- (void)pauseVideo;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playVideo;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoURL:(id)a1;
- (struct CGSize { double x0; double x1; })preferredVideoSize;
- (void)setImage:(id)a0 withDecoration:(id)a1;
- (void)toggleIsPlaying;

@end
