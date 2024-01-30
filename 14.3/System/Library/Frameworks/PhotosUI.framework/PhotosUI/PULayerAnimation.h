@class CALayer, CAAnimation, NSString;

@interface PULayerAnimation : PUAnimationGroup <CAAnimationDelegate> {
    float _speed;
    double _timeOffset;
    double _beginTime;
    BOOL _isAnimationRunning;
}

@property (retain, nonatomic, setter=_setAnimation:) CAAnimation *_animation;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)finishImmediately;
- (void)animationDidStart:(id)a0;
- (id)initWithLayer:(id)a0 key:(id)a1;
- (void)_updateLayerAnimation;
- (void)setSpeed:(float)a0 timeOffset:(double)a1 beginTime:(double)a2;
- (BOOL)isReadyToComplete;

@end
