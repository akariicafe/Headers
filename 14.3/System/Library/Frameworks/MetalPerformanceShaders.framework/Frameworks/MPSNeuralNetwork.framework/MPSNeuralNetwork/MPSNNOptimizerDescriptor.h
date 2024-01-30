@interface MPSNNOptimizerDescriptor : NSObject

@property (nonatomic) float learningRate;
@property (nonatomic) float gradientRescale;
@property (nonatomic) BOOL applyGradientClipping;
@property (nonatomic) float gradientClipMax;
@property (nonatomic) float gradientClipMin;
@property (nonatomic) float regularizationScale;
@property (nonatomic) unsigned long long regularizationType;

+ (id)optimizerDescriptorWithLearningRate:(float)a0 gradientRescale:(float)a1 regularizationType:(unsigned long long)a2 regularizationScale:(float)a3;
+ (id)optimizerDescriptorWithLearningRate:(float)a0 gradientRescale:(float)a1 applyGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationType:(unsigned long long)a5 regularizationScale:(float)a6;

- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 regularizationType:(unsigned long long)a2 regularizationScale:(float)a3;
- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 applyGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationType:(unsigned long long)a5 regularizationScale:(float)a6;

@end
