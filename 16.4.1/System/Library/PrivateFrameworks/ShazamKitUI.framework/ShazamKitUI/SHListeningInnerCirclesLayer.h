@class NSArray, CAMediaTimingFunction;

@interface SHListeningInnerCirclesLayer : SHPaletteLayer

@property (retain, nonatomic) NSArray *innerCircleLayers;
@property (readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
@property (readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;

- (void)setup;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)addCoreAnimationToInnerCircleLayer:(id)a0 withStartOffset:(double)a1;
- (void)addScaleNullAnimationToInnerCircleLayer:(id)a0;
- (id)buildInnerCircleLayers;
- (id)innerCircleCoreAnimation;
- (id)innerCircleScaleNullAnimation;
- (void)startListeningAnimation;

@end
