@class NSString, NSObject;
@protocol MLCustomLayer;

@interface MLCustomLayerWrapper : NSObject <EspressoBrick>

@property (readonly, nonatomic) BOOL ndMode;
@property (readonly, nonatomic) NSString *className;
@property (retain, nonatomic) NSObject<MLCustomLayer> *customImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)factory;
+ (id)espressoTensorsToCoremlTensorsGPU:(id)a0;
+ (id)espressoTensorsToCoremlTensors:(id)a0 ndMode:(BOOL)a1;
+ (id)coremlShapesToEspressoShapes:(id)a0 ndMode:(BOOL)a1;
+ (id)espressoShapesToCoremlShapes:(id)a0 ndMode:(BOOL)a1;
+ (id)getStrides:(id)a0;
+ (id)espressoShapeToCoremlShape:(id)a0 ndMode:(BOOL)a1;
+ (id)coremlShapeToEspressoShape:(id)a0 ndMode:(BOOL)a1;
+ (id)espressoTensorToCoremlTensor:(id)a0 ndMode:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (void)setMappedWeights:(void *)a0 sizeInBytes:(unsigned long long)a1;
- (void)computeOnCPUWithInputTensors:(id)a0 outputTensors:(id)a1;
- (void)encodeToMetalCommandBuffer:(id)a0 inputTensors:(id)a1 outputTensors:(id)a2;
- (id)setupForInputShapes:(id)a0 withParameters:(id)a1;
- (BOOL)hasGPUSupport;

@end
