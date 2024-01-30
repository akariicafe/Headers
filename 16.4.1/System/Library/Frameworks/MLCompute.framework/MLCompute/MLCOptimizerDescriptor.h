@interface MLCOptimizerDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) float learningRate;
@property (readonly, nonatomic) float gradientRescale;
@property (readonly, nonatomic) BOOL appliesGradientClipping;
@property (readonly, nonatomic) float gradientClipMax;
@property (readonly, nonatomic) float gradientClipMin;
@property (readonly, nonatomic) float regularizationScale;
@property (readonly, nonatomic) int regularizationType;
@property (readonly, nonatomic) int gradientClippingType;
@property (readonly, nonatomic) float maximumClippingNorm;
@property (readonly, nonatomic) float customGlobalNorm;

+ (id)descriptorWithLearningRate:(float)a0 gradientRescale:(float)a1 regularizationType:(int)a2 regularizationScale:(float)a3;
+ (id)descriptorWithLearningRate:(float)a0 gradientRescale:(float)a1 appliesGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationType:(int)a5 regularizationScale:(float)a6;
+ (id)descriptorWithLearningRate:(float)a0 gradientRescale:(float)a1 appliesGradientClipping:(BOOL)a2 gradientClippingType:(int)a3 gradientClipMax:(float)a4 gradientClipMin:(float)a5 maximumClippingNorm:(float)a6 customGlobalNorm:(float)a7 regularizationType:(int)a8 regularizationScale:(float)a9;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 applyGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationType:(int)a5 regularizationScale:(float)a6;
- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 applyGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationType:(int)a5 regularizationScale:(float)a6 gradientClippingType:(int)a7 maximumClippingNorm:(float)a8 customGlobalNorm:(float)a9;

@end
