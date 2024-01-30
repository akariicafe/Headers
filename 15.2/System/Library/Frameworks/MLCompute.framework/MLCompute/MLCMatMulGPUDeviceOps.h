@class NSArray, NSMutableArray;

@interface MLCMatMulGPUDeviceOps : MLCGPUDeviceOps

@property (retain, nonatomic) id matmulKernel;
@property (retain, nonatomic) id reduceSumKernel;
@property (retain, nonatomic) NSMutableArray *matrixDescs;
@property (retain, nonatomic) NSMutableArray *forwardMatricesOrNDArrays;
@property (retain, nonatomic) NSMutableArray *gradientMatricesOrNDArrays;
@property (retain, nonatomic) NSArray *shapes;
@property (retain, nonatomic) NSArray *transposeLeft;
@property (retain, nonatomic) NSArray *transposeRight;
@property (retain, nonatomic) NSArray *gradientLeftRightMatrixSelectionFlags;
@property (retain, nonatomic) NSArray *broadcastingFlags;
@property (retain, nonatomic) NSMutableArray *reductionShapes;

+ (id)deviceOps;
+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1 secondaryGradientKernel:(id)a2;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1 secondaryGradientKernel:(id)a2;

@end
