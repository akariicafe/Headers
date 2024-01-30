@class MPSNNNeuronDescriptor, NSData, MPSCNNNeuron;
@protocol MPSCNNConvolutionDataSource, MTLBuffer;

@interface MPSCNNConvolution : MPSCNNKernel {
    unsigned long long _layout;
    id<MTLBuffer> _weights;
    id<MTLBuffer> _bias;
    unsigned long long _flags;
    BOOL _fullyConnected;
    BOOL _convolutionTranspose;
    BOOL _convertFloat32Weights;
    id<MTLBuffer> _qWts;
    int _qType;
    unsigned int _weightsDataType;
    unsigned int _weightsLayout;
    NSData *_biasOriginal;
    id<MTLBuffer> _neuronABuffer;
    unsigned long long _accumulatorPrecisionOption;
    NSData *_batchNormalizationData;
}

@property (readonly, nonatomic) unsigned long long featureChannelsLayout;
@property (readonly, nonatomic) unsigned long long weightsBufferLength;
@property (readonly, nonatomic) unsigned long long inputFeatureChannels;
@property (readonly, nonatomic) unsigned long long outputFeatureChannels;
@property (readonly, nonatomic) unsigned long long groups;
@property (readonly, retain, nonatomic) id<MPSCNNConvolutionDataSource> dataSource;
@property (readonly, nonatomic) unsigned long long subPixelScaleFactor;
@property (readonly, nonatomic) MPSCNNNeuron *neuron;
@property (readonly, nonatomic) int neuronType;
@property (readonly, nonatomic) float neuronParameterA;
@property (readonly, nonatomic) float neuronParameterB;
@property (readonly, nonatomic) float neuronParameterC;
@property (readonly, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor;
@property (readonly, nonatomic) unsigned long long channelMultiplier;
@property (nonatomic) unsigned long long accumulatorPrecisionOption;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; } *)libraryInfo:(struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *)a0;

- (unsigned long long)maxBatchSize;
- (id)initWithDevice:(id)a0;
- (id)initWithDevice:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2;
- (unsigned int)weightsLayout;
- (id)resultStateBatchForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (void)dealloc;
- (BOOL)initialize:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const void *)a2 dataType:(unsigned int)a3 weightsLayout:(unsigned int)a4 range:(const void *)a5 lookUpTable:(const float *)a6 qType:(int)a7 biasTerms:(const float *)a8 flags:(unsigned long long)a9 fullyConnected:(BOOL)a10 convolutionTranspose:(BOOL)a11 preferredWeightsDataType:(unsigned int)a12;
- (void)reloadWeightsAndBiasesWithCommandBuffer:(id)a0 state:(id)a1;
- (BOOL)PrepareAndLoadData:(id)a0 dataType:(unsigned int)a1 weightsLayout:(unsigned int)a2 weights:(const void *)a3 biases:(const float *)a4 quantizationType:(int)a5 ranges:(const void *)a6 lookUpTable:(const float *)a7 convertFloat32Weights:(BOOL)a8;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3 kernelOffset:(struct { long long x0; long long x1; long long x2; } *)a4;
- (id)quantizationBuffer;
- (BOOL)convolutionTranspose;
- (BOOL)appendBatchBarrier;
- (id)temporaryResultStateBatchForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)resourceListForSourceImages:(id)a0 destinationImages:(id)a1;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (void)copyToGradientState:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)initWithDevice:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const float *)a2 biasTerms:(const float *)a3 flags:(unsigned long long)a4;
- (void)setFusedNeuronDescriptor:(id)a0;
- (id)initWithDevice:(id)a0 weights:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)exportWeightsAndBiasesWithCommandBuffer:(id)a0 resultStateCanBeTemporary:(BOOL)a1;
- (id)initWithDevice:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2 convolutionTranspose:(BOOL)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 state:(id *)a3;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3;
- (id)biases;
- (id)initializeWithDevice:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2 convolutionTranspose:(BOOL)a3;
- (id)initWithDevice:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const float *)a2 biasTerms:(const float *)a3 flags:(unsigned long long)a4 fullyConnected:(BOOL)a5 convolutionTranspose:(BOOL)a6;
- (unsigned long long)encodingStorageSizeForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (void)reloadWeightsAndBiasesWithDataSource:(id)a0;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)debugDescription;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)neuronABuffer;
- (id)initWithDevice:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const float *)a2 biasTerms:(const float *)a3 flags:(unsigned long long)a4 fullyConnected:(BOOL)a5;
- (id)resultStateForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (void)reloadWeightsAndBiasesFromDataSource;
- (unsigned int)weightsDataType;
- (void)encodeWithCoder:(id)a0;
- (int)quantizationType;
- (id)weights;

@end
