@class NSArray, NSMutableArray;

@interface MLCMHAGPUDeviceOps : MLCGPUDeviceOps

@property (nonatomic) unsigned long long mhaHeadCount;
@property (nonatomic) unsigned long long mhaModelDimension;
@property (retain, nonatomic) NSMutableArray *mhaSourcesQKV;
@property (retain, nonatomic) NSMutableArray *mhaInputProjResults;
@property (retain, nonatomic) NSMutableArray *mhaMatMulSourcesQKV;
@property (retain, nonatomic) id mhaQKSoftmaxResultMatrix;
@property (retain, nonatomic) id mhaMaskSoftmaxForwardKernel;
@property (retain, nonatomic) id mhaMaskSoftmaxFastForwardKernel;
@property (retain, nonatomic) id mhaSoftmaxGradientKernel;
@property (retain, nonatomic) id mhaMatMulKernel;
@property (retain, nonatomic) id mhaMatMulKernelWithScale;
@property (retain, nonatomic) id mhaBiasAddKernel;
@property (retain, nonatomic) NSMutableArray *mhaMatrixDescriptors;
@property (retain, nonatomic) NSMutableArray *mhaNDArrayDescriptors;
@property (retain, nonatomic) NSMutableArray *mhaMatrixDescriptorsForBias;
@property (retain, nonatomic) NSMutableArray *mhaNDArrayDescriptorsForBias;
@property (retain, nonatomic) NSArray *mhaReduceSumKernels;
@property (nonatomic) BOOL mhaHasBias;
@property (nonatomic) BOOL mhaHasAttnBias;
@property (retain, nonatomic) NSArray *mhaAttentionBiasTensors;
@property (nonatomic) BOOL mhaHasZeroAttention;
@property (nonatomic) BOOL mhaHasKeyMask;
@property (nonatomic) BOOL mhaHasAttentionMask;
@property (retain, nonatomic) id mhaDropoutForwardKernel;
@property (retain, nonatomic) id mhaDropoutGradientKernel;
@property (retain, nonatomic) id mhaDropoutSource;
@property (retain, nonatomic) id mhaDropoutState;
@property (retain, nonatomic) id mhaMultiGPUChildOps;

+ (id)deviceOps;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;

@end
