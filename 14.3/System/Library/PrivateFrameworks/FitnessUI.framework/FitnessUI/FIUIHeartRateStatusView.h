@class NSString, UIImageView, NSBundle, FIUIAnimatingSpriteImageView;

@interface FIUIHeartRateStatusView : UIView {
    NSString *_heartSpriteImageName;
    long long _heartSpriteImageFrameCount;
    long long _heartSpriteImageColumnCount;
    NSBundle *_resourceBundle;
    unsigned long long _state;
    double _beatsPerMinute;
    BOOL _delayedStartMeasuringAnimation;
    BOOL _isBeatingHeart;
}

@property (retain, nonatomic) UIImageView *fullHeartImageView;
@property (retain, nonatomic) FIUIAnimatingSpriteImageView *animatingImageView;
@property (retain, nonatomic) UIImageView *reloadOutlineView;
@property (retain, nonatomic) UIImageView *reloadArrowView;
@property (nonatomic) BOOL animationsSuspended;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setState:(unsigned long long)a0;
- (void)_resumeAnimations;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBeatsPerMinute:(double)a0;
- (void)_suspendAnimations;
- (void)_startMeasuringAnimationAnimated:(BOOL)a0;
- (void)_startBeatingHeart;
- (void)_beatFullHeartOnce;
- (void)_finishedHeartbeat;
- (id)_loadHeartMeasuringImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 heartFilledImageName:(id)a1 heartSpriteImageName:(id)a2 spriteFrameCount:(long long)a3 spriteColumnCount:(long long)a4 resourceBundle:(id)a5;
- (void)setReloadHeartOutlineImage:(id)a0;
- (void)setReloadArrowImage:(id)a0;
- (void)unloadAnimationAssets;

@end
