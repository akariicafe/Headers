@class NSArray, CAMediaTimingFunction;

@interface SHListeningOuterCirclesLayer : SHPaletteLayer

@property (retain, nonatomic) NSArray *outerCircleLayers;
@property (readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *inOutQuartTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;

- (void)setup;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)addScaleAnimationToCircleLayer:(id)a0;
- (void)addCoreAnimationToOuterCircleLayer:(id)a0 withStartOffset:(double)a1;
- (id)buildOuterCircleLayers;
- (id)outerCircleCoreBorderWidthAnimation;
- (id)outerCircleCoreScaleAnimation;
- (id)outerCircleCoreSizeAnimation;
- (id)scaleNullAnimation;
- (void)startListeningAnimation;

@end
