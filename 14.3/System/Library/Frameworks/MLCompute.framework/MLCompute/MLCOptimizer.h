@class NSArray, MLCDevice;

@interface MLCOptimizer : NSObject <NSCopying>

@property (retain, nonatomic) MLCDevice *device;
@property (retain, nonatomic) NSArray *deviceOps;
@property (nonatomic) unsigned long long numOptimizerDataBuffers;
@property (nonatomic) float learningRate;
@property (readonly, nonatomic) float gradientRescale;
@property (nonatomic) BOOL appliesGradientClipping;
@property (readonly, nonatomic) float gradientClipMax;
@property (readonly, nonatomic) float gradientClipMin;
@property (readonly, nonatomic) float regularizationScale;
@property (readonly, nonatomic) int regularizationType;

- (id)initWithDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)bindDevice:(id)a0 deviceOps:(id)a1;
- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 applyGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationScale:(float)a5 regularizationType:(int)a6;

@end
