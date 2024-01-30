@class SXPlayerLayer, SXImageView, SXVideoResource, SVAVPlayer;

@interface SXVideoFillPlayerView : UIView

@property (retain, nonatomic) SXVideoResource *videoResource;
@property (retain, nonatomic) SXPlayerLayer *playerLayer;
@property (retain, nonatomic) SVAVPlayer *player;
@property (retain, nonatomic) SXImageView *stillImageView;
@property (nonatomic) BOOL hasRequestedPlayback;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) BOOL shouldLoop;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)reset;
- (id)initWithVideoResource:(id)a0 imageView:(id)a1;
- (void)playIfPossible;
- (void)switchToPlayer;

@end
