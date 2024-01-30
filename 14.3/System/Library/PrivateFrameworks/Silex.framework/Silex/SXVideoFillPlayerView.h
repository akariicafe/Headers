@class SXPlayerLayer, SXAVPlayer, SXVideoResource, SXImageView;

@interface SXVideoFillPlayerView : UIView

@property (retain, nonatomic) SXVideoResource *videoResource;
@property (retain, nonatomic) SXPlayerLayer *playerLayer;
@property (retain, nonatomic) SXAVPlayer *player;
@property (retain, nonatomic) SXImageView *stillImageView;
@property (nonatomic) BOOL hasRequestedPlayback;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) BOOL shouldLoop;

- (void)play;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)layoutSubviews;
- (void)pause;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithVideoResource:(id)a0 imageView:(id)a1;
- (void)playIfPossible;
- (void)switchToPlayer;

@end
