@class NSArray, NSMutableArray;

@interface MLCMultiGPUDeviceOps : MLCGPUDeviceOps

@property (nonatomic) int multiGPUReduction;
@property (retain, nonatomic) NSArray *localGradientMatrices;
@property (retain, nonatomic) NSArray *remoteGradientBuffers;
@property (retain, nonatomic) NSArray *receivedGradientMatrices;
@property (retain, nonatomic) NSArray *matrixSumKernels;
@property (retain, nonatomic) NSMutableArray *allReducedGradientMatrices;
@property (retain, nonatomic) NSMutableArray *rnnTrainableWeightGradients;

+ (id)multiGPUDeviceOpsWithGPUDeviceOps:(id)a0;

- (void).cxx_destruct;
- (id)initWithGPUDevicOps:(id)a0;

@end
