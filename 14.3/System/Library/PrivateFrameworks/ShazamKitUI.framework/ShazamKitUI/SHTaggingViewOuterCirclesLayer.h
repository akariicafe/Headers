@class NSArray, CAMediaTimingFunction;

@interface SHTaggingViewOuterCirclesLayer : CALayer

@property (retain, nonatomic) NSArray *outerCircleLayers;
@property (readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *inOutQuartTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;

- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setupSublayers;
- (void)startTaggingAnimation;
- (id)buildOuterCircleLayers;
- (void)addCoreAnimationToOuterCircleLayer:(id)a0 withStartOffset:(double)a1;
- (void)addScaleAnimationToCircleLayer:(id)a0;
- (id)scaleNullAnimation;
- (id)outerCircleCoreSizeAnimation;
- (id)outerCircleCoreBorderWidthAnimation;
- (id)outerCircleCoreScaleAnimation;

@end
