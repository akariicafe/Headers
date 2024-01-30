@interface CEKLightingCubeMutableAppearance : CEKLightingCubeAppearance

@property (nonatomic) struct CGGradient { } *background;
@property (nonatomic) struct CGColor { } *topFill;
@property (nonatomic) struct CGGradient { } *topGlow;
@property (nonatomic) struct CGGradient { } *topMask;
@property (nonatomic) struct CGColor { } *bottomFill;
@property (nonatomic) struct CGGradient { } *bottomInnerGlow;
@property (nonatomic) struct CGGradient { } *bottomOuterGlow;
@property (nonatomic) struct CGGradient { } *bottomMask;
@property (nonatomic) struct CGColor { } *verticalFillColor;
@property (nonatomic) double verticalFillBackIntensity;
@property (nonatomic) double verticalFillFrontIntensity;
@property (nonatomic) struct CGGradient { } *topOver;
@property (nonatomic) struct CGColor { } *stroke;

@end
