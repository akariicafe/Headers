@class SBFFluidBehaviorSettings;

@interface SBBlurItemContainerParameters : NSObject

@property (readonly, nonatomic) double blurRadius;
@property (readonly, nonatomic) BOOL shouldRasterize;
@property (readonly, nonatomic) double rasterizationScale;
@property (readonly, nonatomic) long long inputQuality;
@property (readonly, nonatomic) long long inputIntermediateBitDepth;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *blurAnimationSettings;

+ (id)defaultCrossblurBlurParameters;

- (void).cxx_destruct;
- (id)initWithBlurRadius:(double)a0 shouldRasterize:(BOOL)a1 rasterizationScale:(double)a2 inputQuality:(long long)a3 inputIntermediateBitDepth:(long long)a4 blurAnimationSettings:(id)a5;

@end
