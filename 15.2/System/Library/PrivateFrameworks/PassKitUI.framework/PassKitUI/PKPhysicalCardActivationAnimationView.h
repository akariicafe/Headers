@class NSString, AVPlayerItem, AVPlayerLayer, UILabel, AVPlayer;

@interface PKPhysicalCardActivationAnimationView : UIView {
    AVPlayerLayer *_playerLayer;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    BOOL _playerStarted;
    UILabel *_nameOnCardLabel;
    BOOL _invalidated;
}

@property (copy, nonatomic) NSString *nameOnCard;

- (void)startAnimation;
- (void)layoutSubviews;
- (void)_invalidate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_didFinishPlaying;
- (void)_removePlayerItem;

@end
