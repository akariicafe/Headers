@class MPSMatrixMultiplication, NSMutableArray;

@interface MPSRNNMatrixTrainingLayer : MPSKernel {
    int layerType;
    void *layer;
    MPSMatrixMultiplication *gemmKernel;
    MPSMatrixMultiplication *gemmKernel_noAccumulate;
    MPSMatrixMultiplication *gemmKernelNonTranspose;
    MPSMatrixMultiplication *gemmKernelNonTranspose_noAccumulate;
    MPSMatrixMultiplication *gemmKernelTN;
    MPSMatrixMultiplication *gemmKernelTN_accumulate;
    NSMutableArray *weightDescriptors;
}

@property (nonatomic) BOOL propagateFullRecurrentRows;
@property (readonly, nonatomic) unsigned long long inputFeatureChannels;
@property (readonly, nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) BOOL storeAllIntermediateStates;
@property (nonatomic) BOOL recurrentOutputIsTemporary;
@property (nonatomic) BOOL trainingStateIsTemporary;
@property (nonatomic) BOOL accumulateWeightGradients;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x40; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x41; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x42; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x43; } *)libraryInfo:(void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (void)createWeightGradientMatrices:(id)a0 dataType:(unsigned int)a1;
- (void)createWeightMatrices:(id)a0;
- (void)encodeCopyWeightsToCommandBuffer:(id)a0 weights:(id)a1 matrixId:(unsigned long long)a2 matrix:(id)a3 copyFromWeightsToMatrix:(BOOL)a4 matrixOffset:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5;
- (void)encodeForwardSequenceToCommandBuffer:(id)a0 sourceMatrices:(id)a1 destinationMatrices:(id)a2 trainingStates:(id)a3 weights:(id)a4;
- (void)encodeForwardSequenceToCommandBuffer:(id)a0 sourceMatrices:(id)a1 sourceOffsets:(unsigned long long *)a2 destinationMatrices:(id)a3 destinationOffsets:(unsigned long long *)a4 trainingStates:(id)a5 recurrentInputState:(id)a6 recurrentOutputStates:(id)a7 weights:(id)a8;
- (void)encodeGradientSequenceToCommandBuffer:(id)a0 forwardSources:(id)a1 forwardSourceOffsets:(unsigned long long *)a2 sourceGradients:(id)a3 sourceGradientOffsets:(unsigned long long *)a4 destinationGradients:(id)a5 destinationOffsets:(unsigned long long *)a6 weightGradients:(id)a7 trainingStates:(id)a8 recurrentInputState:(id)a9 recurrentOutputStates:(id)a10 weights:(id)a11;
- (void)encodeGradientSequenceToCommandBuffer:(id)a0 forwardSources:(id)a1 sourceGradients:(id)a2 destinationGradients:(id)a3 weightGradients:(id)a4 trainingStates:(id)a5 weights:(id)a6;
- (id)initWithDevice:(id)a0 rnnDescriptor:(id)a1 trainableWeights:(id)a2;
- (id)temporaryRecurrentStateForCommandBuffer:(id)a0 batchSize:(unsigned long long)a1 forGradientPass:(BOOL)a2;
- (void)createTemporaryWeightGradientMatrices:(id)a0 dataType:(unsigned int)a1 commandBuffer:(id)a2;
- (id)recurrentStateForBatchSize:(unsigned long long)a0 forGradientPass:(BOOL)a1;

@end
