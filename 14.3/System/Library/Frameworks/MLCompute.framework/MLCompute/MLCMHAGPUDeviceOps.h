@class NSMutableArray;

@interface MLCMHAGPUDeviceOps : MLCGPUDeviceOps

@property (nonatomic) unsigned long long mhaHeadCount;
@property (retain, nonatomic) id mhaConcatKernel;
@property (retain, nonatomic) id mhaPermuteKernel;
@property (retain, nonatomic) NSMutableArray *mhaSourcesQKV;
@property (retain, nonatomic) NSMutableArray *mhaInputProjForwardKernels;
@property (retain, nonatomic) NSMutableArray *mhaInputProjGradientKernels;
@property (retain, nonatomic) NSMutableArray *mhaInputProjStates;
@property (retain, nonatomic) NSMutableArray *mhaInputProjResults;
@property (retain, nonatomic) NSMutableArray *mhaMatMulForwardKernels;
@property (retain, nonatomic) NSMutableArray *mhaMatMulGradientKernels;
@property (retain, nonatomic) NSMutableArray *mhaMatMulSecondaryGradientKernels;
@property (retain, nonatomic) NSMutableArray *mhaMatMulSourcesQKV;
@property (retain, nonatomic) NSMutableArray *mhaQKSoftMaxForwardKernels;
@property (retain, nonatomic) NSMutableArray *mhaQKSoftMaxGradientKernels;
@property (retain, nonatomic) NSMutableArray *mhaQKSoftMaxResultMatrix;
@property (retain, nonatomic) NSMutableArray *mhaAttentionBiasTensors;
@property (retain, nonatomic) NSMutableArray *mhaAttentionBiasGradientTensors;
@property (nonatomic) BOOL mhaHasZeroAttention;
@property (retain, nonatomic) id mhaZeroAttenionData;
@property (nonatomic) BOOL mhaHasKeyMask;
@property (retain, nonatomic) id mhaKeyMaskCompareKernel;
@property (retain, nonatomic) id mhaKeyMaskGateKernel;
@property (nonatomic) BOOL mhaHasAttentionMask;
@property (retain, nonatomic) id mhaAttentionMaskKernel;
@property (retain, nonatomic) id mhaDropoutForwardKernel;
@property (retain, nonatomic) id mhaDropoutGradientKernel;
@property (retain, nonatomic) id mhaDropoutSource;
@property (retain, nonatomic) id mhaDropoutState;
@property (retain, nonatomic) NSMutableArray *mhaMultiGPUChildOps;
@property (nonatomic) BOOL mhaHasBias;
@property (nonatomic) BOOL mhaHasAttentionBias;

+ (id)deviceOpsWithForwardKernel:(id)a0 gradientKernel:(id)a1;

- (void).cxx_destruct;
- (id)initWithForwardKernel:(id)a0 gradientKernel:(id)a1;

@end
