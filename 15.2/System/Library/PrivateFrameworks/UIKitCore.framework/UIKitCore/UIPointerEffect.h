@class NSValue, UITargetedPreview;

@interface UIPointerEffect : NSObject <NSCopying>

@property (copy, nonatomic) UITargetedPreview *preview;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long constrainedAxes;
@property (readonly, nonatomic) NSValue *overrideSlipPoints;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } slipFactor;
@property (readonly, nonatomic) double maxSlip;
@property (readonly, nonatomic) double parallaxAmount;
@property (readonly, nonatomic) double scaleUpPoints;
@property (readonly, nonatomic) double defaultPointerCornerRadius;
@property (readonly, nonatomic) double scaleUpAnimationResponse;
@property (readonly, nonatomic) double scaleUpAnimationDampingRatio;
@property (readonly, nonatomic) double dampedAnimationResponse;
@property (readonly, nonatomic) double dampedAnimationDampingRatio;
@property (readonly, nonatomic) BOOL useSoftShadow;
@property (readonly, nonatomic) BOOL allowsSanitization;
@property (readonly, nonatomic) BOOL usesPointerArbiter;
@property (readonly, nonatomic) id /* block */ tintColorMatrixProvider;

+ (id)effectWithPreview:(id)a0;

- (id)settings;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
