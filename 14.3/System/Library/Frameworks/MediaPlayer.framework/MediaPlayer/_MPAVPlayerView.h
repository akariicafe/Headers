@class NSString, _MPAVPlayerViewPlayerLayerView, UIViewPropertyAnimator, AVPlayer;

@interface _MPAVPlayerView : UIView {
    _MPAVPlayerViewPlayerLayerView *_playerLayerView;
}

@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (readonly, nonatomic) _MPAVPlayerViewPlayerLayerView *playerLayerView;
@property (copy, nonatomic) NSString *targetVideoGravity;
@property (retain, nonatomic) UIViewPropertyAnimator *videoGravityAnimator;

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)setVideoGravity:(id)a0 duration:(float)a1;
- (BOOL)_isDescendantOfScrollView;
- (void)_updatePlayerLayerViewFrame;
- (void)_updatePlayerLayerViewFrame:(id)a0;
- (id)_mediaTimingFunctionForCurrentAnimationCurve;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
