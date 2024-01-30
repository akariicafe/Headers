@class MLCActivationDescriptor, NSArray, _MLCGPULayer, NSMutableArray;

@interface MLCGPUDeviceOps : MLCDeviceOps

@property (retain, nonatomic) _MLCGPULayer *layer;
@property (readonly, retain, nonatomic) id forwardKernel;
@property (readonly, retain, nonatomic) id gradientKernel;
@property (readonly, retain, nonatomic) id secondaryGradientKernel;
@property (retain, nonatomic) id lossInitialGradientKernel;
@property (retain, nonatomic) id combinedForwardAndGradientLossKernel;
@property (retain, nonatomic) id reduceLossKernel;
@property (retain, nonatomic) id gradientState;
@property (retain, nonatomic) id forwardStatisticsKernel;
@property (retain, nonatomic) id gradientStatisticsKernel;
@property (retain, nonatomic) NSArray *momentumVectors;
@property (retain, nonatomic) NSArray *velocityVectors;
@property (retain, nonatomic) NSArray *centerWeightVectors;
@property (retain, nonatomic) id exportableState;
@property (retain, nonatomic) id movingState;
@property (retain, nonatomic) NSArray *bnMovingUpdateKernels;
@property (nonatomic) unsigned long long totalElementsPerChannel;
@property (retain, nonatomic) id imageToMatrixCopyKernel;
@property (retain, nonatomic) id matrixToImageCopyKernel;
@property (retain, nonatomic) id permuteKernel;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) BOOL countIncludesPadding;
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForResultGradientTensor;
@property (nonatomic) BOOL useSourceGradientDeviceMemoryForSecondaryResultGradientTensor;
@property (retain, nonatomic) NSMutableArray *matrixDescsForward;
@property (retain, nonatomic) NSMutableArray *matrixDescsBackward;
@property (nonatomic) BOOL transposeX;
@property (nonatomic) BOOL transposeY;
@property (retain, nonatomic) MLCActivationDescriptor *neuronDescriptor;
@property (nonatomic) int arithmeticOp;
@property (copy, nonatomic) NSArray *source0Shape;
@property (copy, nonatomic) NSArray *source1Shape;
@property (copy, nonatomic) NSArray *begin;
@property (copy, nonatomic) NSArray *count;
@property (copy, nonatomic) NSArray *stride;
@property (copy, nonatomic) NSArray *end;
@property (nonatomic) BOOL permutationNeededForFC;

+ (id)deviceOps;
+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1;
+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1 secondaryGradientKernel:(id)a2;
+ (id)deviceOpsWithForwardKernel:(id)a0;
+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1 secondaryGradientKernel:(id)a2 forwardStatistics:(id)a3 gradientStatistics:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1 secondaryGradientKernel:(id)a2 forwardStatistics:(id)a3 gradientStatistics:(id)a4;

@end
