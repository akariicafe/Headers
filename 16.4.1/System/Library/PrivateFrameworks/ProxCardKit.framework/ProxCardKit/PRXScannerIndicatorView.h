@class NSString, CAGradientLayer, CAShapeLayer;

@interface PRXScannerIndicatorView : UIView <CAAnimationDelegate>

@property (class, readonly, nonatomic) double innerHoleRatio;
@property (class, readonly, nonatomic) double strokeWidth;

@property (readonly, nonatomic) CAShapeLayer *viewFinderTintLayer;
@property (readonly, nonatomic) CAGradientLayer *viewFinderBorderLayer;
@property (readonly, nonatomic) CAShapeLayer *borderLayerMask;
@property (readonly, nonatomic) CAShapeLayer *initialWhiteTintLayer;
@property (nonatomic) BOOL needsReset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)completed;
- (void)complete;
- (void)initial;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)animateBorderFrom:(id)a0 to:(id)a1 duration:(double)a2;
- (void)animateInitialIfNeeded;
- (void)animateToColors:(id)a0 duration:(double)a1;
- (id)innerHolePathForRatio:(double)a0 stroke:(double)a1;

@end
