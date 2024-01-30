@class NSArray, CAMediaTimingFunction;

@interface SHTaggingViewInnerCirclesLayer : CALayer

@property (retain, nonatomic) NSArray *innerCircleLayers;
@property (readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;

- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setupSublayers;
- (id)buildInnerCircleLayers;
- (void)addCoreAnimationToInnerCircleLayer:(id)a0 withStartOffset:(double)a1;
- (void)addScaleNullAnimationToInnerCircleLayer:(id)a0;
- (id)innerCircleCoreAnimation;
- (id)innerCircleScaleNullAnimation;
- (void)startTaggingAnimation;

@end
