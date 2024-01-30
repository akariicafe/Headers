@class NSArray, MLCDevice, NSMutableArray;

@interface MLCOptimizer : NSObject <NSCopying>

@property (retain, nonatomic) MLCDevice *device;
@property (retain, nonatomic) NSArray *deviceOps;
@property (nonatomic) unsigned long long numOptimizerDataBuffers;
@property (retain, nonatomic) NSMutableArray *oneStepOptimizerBuffers;
@property (nonatomic) float learningRate;
@property (readonly, nonatomic) float gradientRescale;
@property (nonatomic) BOOL appliesGradientClipping;
@property (readonly, nonatomic) float gradientClipMax;
@property (readonly, nonatomic) float gradientClipMin;
@property (readonly, nonatomic) float regularizationScale;
@property (readonly, nonatomic) int regularizationType;
@property (readonly, nonatomic) int gradientClippingType;
@property (readonly, nonatomic) float maximumClippingNorm;
@property (readonly, nonatomic) float customGlobalNorm;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDescriptor:(id)a0;
- (void)bindDevice:(id)a0 deviceOps:(id)a1;
- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 applyGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationScale:(float)a5 regularizationType:(int)a6 gradientClippingType:(int)a7 maximumClippingNorm:(float)a8 customGlobalNorm:(float)a9;
- (id)initWithLearningRate:(float)a0 gradientRescale:(float)a1 applyGradientClipping:(BOOL)a2 gradientClipMax:(float)a3 gradientClipMin:(float)a4 regularizationScale:(float)a5 regularizationType:(int)a6;

@end
