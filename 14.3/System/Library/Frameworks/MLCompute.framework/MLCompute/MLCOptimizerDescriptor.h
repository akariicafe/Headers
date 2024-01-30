@interface MLCOptimizerDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) float learningRate;
@property (readonly, nonatomic) float gradientRescale;
@property (readonly, nonatomic) BOOL appliesGradientClipping;
@property (readonly, nonatomic) float gradientClipMax;
@property (readonly, nonatomic) float gradientClipMin;
@property (readonly, nonatomic) float regularizationScale;
@property (readonly, nonatomic) int regularizationType;

+ (id)descriptorWithLearningRate:(float)a0 gradientRescale:(float)a1 regularizationType:(int)a2 regularizationScale:(float)a3;
+ (id)descriptorWithLearningRate:(float)a0 gradientRescale:(float)a1 appliesGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationType:(int)a5 regularizationScale:(float)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 regularizationType:(int)a2 regularizationScale:(float)a3;
- (unsigned long long)hash;
- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 applyGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationType:(int)a5 regularizationScale:(float)a6;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
