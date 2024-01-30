@class MLCActivationDescriptor;

@interface MLCActivationLayer : MLCLayer

@property (class, readonly, nonatomic) MLCActivationLayer *reluLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *relu6Layer;
@property (class, readonly, nonatomic) MLCActivationLayer *leakyReLULayer;
@property (class, readonly, nonatomic) MLCActivationLayer *sigmoidLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *hardSigmoidLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *tanhLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *absoluteLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *softPlusLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *softSignLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *eluLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *logSigmoidLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *seluLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *celuLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *hardShrinkLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *softShrinkLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *tanhShrinkLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *geluLayer;
@property (class, readonly, nonatomic) MLCActivationLayer *hardSwishLayer;

@property (readonly, copy, nonatomic) MLCActivationDescriptor *descriptor;

+ (id)layerWithDescriptor:(id)a0;
+ (id)leakyReLULayerWithNegativeSlope:(float)a0;
+ (id)linearLayerWithScale:(float)a0 bias:(float)a1;
+ (id)softPlusLayerWithBeta:(float)a0;
+ (id)eluLayerWithA:(float)a0;
+ (id)relunLayerWithA:(float)a0 b:(float)a1;
+ (id)celuLayerWithA:(float)a0;
+ (id)hardShrinkLayerWithA:(float)a0;
+ (id)softShrinkLayerWithA:(float)a0;
+ (id)thresholdLayerWithThreshold:(float)a0 replacement:(float)a1;
+ (id)clampLayerWithMinValue:(float)a0 maxValue:(float)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0;
- (BOOL)compileForDevice:(id)a0 sourceTensors:(id)a1 resultTensor:(id)a2;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:(id)a0;
- (id)resultTensorFromSources:(id)a0;

@end
