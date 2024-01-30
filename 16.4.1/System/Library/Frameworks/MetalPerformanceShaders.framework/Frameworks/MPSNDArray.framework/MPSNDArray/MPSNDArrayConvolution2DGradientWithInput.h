@class MPSNDArrayIdentity, MPSExternalNDArrayBinaryGradient;

@interface MPSNDArrayConvolution2DGradientWithInput : MPSNDArrayBinaryPrimaryGradientKernel {
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _dilationRateInX;
    unsigned long long _dilationRateInY;
    struct MPSNDArrayConvolutionOffsets { long long offset[2]; } _offsets;
    struct MPSNDArrayConvolutionOffsets { long long offset[2]; } _kernelOffsets;
    MPSExternalNDArrayBinaryGradient *_plugin;
    MPSNDArrayIdentity *_ndArrayIdentity;
    BOOL _forcePlugin;
    void *_autoTuningParams;
    int _autoTuningTarget;
}

@property (readonly, nonatomic) struct MPSNDArrayConvolutionSizes { unsigned long long x0[2]; } kernelSizes;
@property (readonly, nonatomic) struct MPSNDArrayConvolutionSizes { unsigned long long x0[2]; } strideInPixels;
@property (readonly, nonatomic) struct MPSNDArrayConvolutionSizes { unsigned long long x0[2]; } dilationRates;
@property (readonly, nonatomic) unsigned long long inputFeatureChannels;
@property (readonly, nonatomic) unsigned long long outputFeatureChannels;
@property (readonly, nonatomic) unsigned long long groups;
@property (readonly, nonatomic) unsigned long long channelMultiplier;
@property (readonly, nonatomic) unsigned int dataFormat;
@property (readonly, nonatomic) unsigned int weightsFormat;
@property (nonatomic) struct MPSNDArrayConvolutionOffsets { long long x0[2]; } offsets;
@property (nonatomic) struct MPSNDArrayConvolutionOffsets { long long x0[2]; } kernelOffsets;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x40; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x41; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x42; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x43; } *)libraryInfo:(void *)a0;
+ (BOOL)supportsPostfixForDevice:(void *)a0;
+ (BOOL)supportsPostfixForDevice:(void *)a0 convolutionDescriptor:(id)a1 sourceTensorDescriptor:(struct MPSNDArrayDataTensorDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a2 destinationTensorDescriptor:(struct MPSNDArrayDataTensorDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a3 weightsTensorDescriptor:(struct MPSNDArrayWeightsTensorDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a4;
+ (BOOL)supportsPrefixForDevice:(void *)a0;

- (id)initWithDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)dealloc;
- (id)initWithDevice:(id)a0 ndArrayConvolution2DDescriptor:(id)a1;
- (void /* unknown type, empty encoding */)destinationStrides;
- (void /* unknown type, empty encoding */)dimensionsNotToBeBroadcast;
- (void /* unknown type, empty encoding */)dimensionsToBeRetained;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)a0;
- (void)setAutoTuningParameters:(void *)a0;
- (void)setAutoTuningTarget:(int)a0;
- (void /* unknown type, empty encoding */)stridesAtSourceIndex:(unsigned long long)a0;
- (id)workloadStatisticsForSourceArrays:(id)a0 destArrays:(id)a1 kernel:(id)a2 kernelDAGObject:(id)a3 sourceState:(id)a4;

@end
