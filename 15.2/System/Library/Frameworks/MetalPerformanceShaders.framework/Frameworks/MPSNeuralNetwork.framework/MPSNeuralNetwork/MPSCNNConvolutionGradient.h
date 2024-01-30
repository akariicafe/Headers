@protocol MPSCNNConvolutionDataSource, MTLBuffer;

@interface MPSCNNConvolutionGradient : MPSCNNGradientKernel {
    id<MTLBuffer> _weights;
    BOOL _fullyConnected;
    BOOL _convolutionTranspose;
    unsigned int _weightsDataType;
    unsigned int _preferredWeightsDataType;
    unsigned int _weightsLayout;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, nonatomic) unsigned long long sourceGradientFeatureChannels;
@property (readonly, nonatomic) unsigned long long sourceImageFeatureChannels;
@property (readonly, nonatomic) unsigned long long groups;
@property (readonly, nonatomic) unsigned long long channelMultiplier;
@property (readonly, retain, nonatomic) id<MPSCNNConvolutionDataSource> dataSource;
@property (nonatomic) unsigned long long gradientOption;
@property (nonatomic) BOOL serializeWeightsAndBiases;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; } *)libraryInfo:(void *)a0;

- (id)weights;
- (unsigned long long)maxBatchSize;
- (id)initWithDevice:(id)a0;
- (unsigned int)weightsDataType;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)encodingStorageSizeForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (BOOL)isResultStateReusedAcrossBatch;
- (void)reloadWeightsAndBiasesFromDataSource;
- (id)biases;
- (unsigned int)weightsLayout;
- (id)initWithDevice:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2;
- (void)reloadWeightsAndBiasesWithCommandBuffer:(id)a0 state:(id)a1;
- (void)dealloc;
- (BOOL)convolutionTranspose;
- (id)initWithDevice:(id)a0 weights:(id)a1;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 primaryOffset:(struct { long long x0; long long x1; long long x2; } *)a3 secondaryOffset:(struct { long long x0; long long x1; long long x2; } *)a4 kernelOffset:(struct { long long x0; long long x1; long long x2; } *)a5;
- (void)initialize:(id)a0 convDesc:(id)a1 weights:(void *)a2 dataType:(unsigned int)a3 weightsLayout:(unsigned int)a4 fullyConnected:(BOOL)a5 convolutionTranspose:(BOOL)a6 preferredWeightsDataType:(unsigned int)a7;
- (void)initialize:(id)a0 weights:(id)a1 fullyConnected:(BOOL)a2 convolutionTranspose:(BOOL)a3;
- (id)PeakAtWeightsWithConvolutionGradientState:(id)a0;
- (unsigned int)preferredWeightsDataType;
- (BOOL)filterHandlesPlugin;
- (id)initWithDevice:(id)a0 weights:(id)a1 convolutionTranspose:(BOOL)a2;
- (id)PeakAtWeightsWithConvolutionTransposeGradientState:(id)a0;

@end
