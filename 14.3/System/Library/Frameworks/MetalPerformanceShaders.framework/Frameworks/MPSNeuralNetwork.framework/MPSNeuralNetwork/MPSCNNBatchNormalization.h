@class MPSNNNeuronDescriptor;
@protocol MPSCNNBatchNormalizationDataSource, MTLBuffer;

@interface MPSCNNBatchNormalization : MPSCNNKernel {
    struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x0; unsigned long long x1; id x2; id x3; struct { unsigned long long x0; unsigned long long x1; } x4; } *_gamma;
    struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x0; unsigned long long x1; id x2; id x3; struct { unsigned long long x0; unsigned long long x1; } x4; } *_beta;
    struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x0; unsigned long long x1; id x2; id x3; struct { unsigned long long x0; unsigned long long x1; } x4; } *_meanDS;
    struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x0; unsigned long long x1; id x2; id x3; struct { unsigned long long x0; unsigned long long x1; } x4; } *_varDS;
    BOOL _stateNeedsToLoad;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    id<MTLBuffer> _preluBuffer;
}

@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels;
@property (nonatomic) float epsilon;
@property (readonly, retain, nonatomic) id<MPSCNNBatchNormalizationDataSource> dataSource;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; } *)libraryInfo:(struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *)a0;

- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id)a2 destinationImages:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id)a2 destinationImage:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (void)dealloc;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (id)initWithDevice:(id)a0 dataSource:(id)a1 fusedNeuronDescriptor:(id)a2;
- (id)initWithDevice:(id)a0 dataSource:(id)a1;
- (void)reloadGammaAndBetaFromDataSource;
- (void)reloadDataSourceDeprecated:(id)a0 doReloadWeights:(BOOL)a1 doReloadStats:(BOOL)a2;
- (void)reloadMeanAndVarianceFromDataSource;
- (void)reloadDataSource:(id)a0;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 batchNormalizationState:(id)a2 destinationImage:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 batchNormalizationState:(id)a2;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 batchNormalizationState:(id)a2 destinationImages:(id)a3;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 batchNormalizationState:(id)a2;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)a0 gammaAndBetaState:(id)a1;
- (void)reloadMeanAndVarianceWithCommandBuffer:(id)a0 meanAndVarianceState:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)debugDescription;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)resultStateForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
