@interface CEKLightingCubeAppearance : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) struct CGGradient { } *background;
@property (readonly, nonatomic) struct CGColor { } *topFill;
@property (readonly, nonatomic) struct CGGradient { } *topGlow;
@property (readonly, nonatomic) struct CGGradient { } *topMask;
@property (readonly, nonatomic) struct CGColor { } *bottomFill;
@property (readonly, nonatomic) struct CGGradient { } *bottomInnerGlow;
@property (readonly, nonatomic) struct CGGradient { } *bottomOuterGlow;
@property (readonly, nonatomic) struct CGGradient { } *bottomMask;
@property (readonly, nonatomic) struct CGColor { } *verticalFillColor;
@property (readonly, nonatomic) double verticalFillBackIntensity;
@property (readonly, nonatomic) double verticalFillFrontIntensity;
@property (readonly, nonatomic) struct CGGradient { } *topOver;
@property (readonly, nonatomic) struct CGColor { } *stroke;

+ (id)appearanceFrom:(id)a0 to:(id)a1 progress:(double)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithStroke:(struct CGColor { } *)a0;

@end
