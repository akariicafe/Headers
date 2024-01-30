@class MPSNNNeuronDescriptor;
@protocol MPSCNNBatchNormalizationDataSource, MTLBuffer;

@interface MPSCNNBatchNormalization : MPSCNNKernel {
    void *_gamma;
    void *_beta;
    void *_meanDS;
    void *_varDS;
    BOOL _stateNeedsToLoad;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    id<MTLBuffer> _preluBuffer;
}

@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels;
@property (nonatomic) float epsilon;
@property (readonly, retain, nonatomic) id<MPSCNNBatchNormalizationDataSource> dataSource;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x40; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x41; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x42; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x43; } *)libraryInfo:(void *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id)a2 destinationImages:(id)a3;
- (id)resultStateForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id)a2 destinationImage:(id)a3;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)debugDescription;
- (void)dealloc;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 batchNormalizationState:(id)a2;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 batchNormalizationState:(id)a2 destinationImages:(id)a3;
- (id)initWithDevice:(id)a0 dataSource:(id)a1;
- (void)reloadGammaAndBetaFromDataSource;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)a0 gammaAndBetaState:(id)a1;
- (void)reloadMeanAndVarianceFromDataSource;
- (void)reloadMeanAndVarianceWithCommandBuffer:(id)a0 meanAndVarianceState:(id)a1;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 batchNormalizationState:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 batchNormalizationState:(id)a2 destinationImage:(id)a3;
- (id)initWithDevice:(id)a0 dataSource:(id)a1 fusedNeuronDescriptor:(id)a2;
- (void)reloadDataSource:(id)a0;
- (void)reloadDataSourceDeprecated:(id)a0 doReloadWeights:(BOOL)a1 doReloadStats:(BOOL)a2;

@end
