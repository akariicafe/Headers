@class NSData, MPSCNNPoolingAverage;
@protocol MTLBuffer;

@interface MPSCNNBinaryConvolution : MPSCNNKernel {
    struct NeuronInfo { int type; float a; float b; float c; NSData *aData; } _neuronInfo;
    unsigned long long _filterStride;
    id<MTLBuffer> _weights;
    id<MTLBuffer> _outputbias;
    id<MTLBuffer> _outputScale;
    id<MTLBuffer> _inputbias;
    id<MTLBuffer> _inputScale;
    unsigned long long _flags;
    unsigned long long _convType;
    MPSCNNPoolingAverage *_poolingFilter;
    BOOL _fullyConnected;
    float _outputScaleValue;
}

@property (readonly, nonatomic) unsigned long long inputFeatureChannels;
@property (readonly, nonatomic) unsigned long long outputFeatureChannels;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; } *)libraryInfo:(struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *)a0;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3;
- (id)initWithDevice:(id)a0 convolutionData:(id)a1 scaleValue:(float)a2 type:(unsigned long long)a3 flags:(unsigned long long)a4;
- (id)initWithDevice:(id)a0 convolutionData:(id)a1 outputBiasTerms:(const float *)a2 outputScaleTerms:(const float *)a3 inputBiasTerms:(const float *)a4 inputScaleTerms:(const float *)a5 type:(unsigned long long)a6 flags:(unsigned long long)a7;
- (id)initWithDeviceImpl:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const unsigned int *)a2 outputBiasTerms:(const float *)a3 outputScaleTerms:(const float *)a4 inputBiasTerms:(const float *)a5 inputScaleTerms:(const float *)a6 type:(unsigned long long)a7 flags:(unsigned long long)a8;
- (id)copyBuffer:(id)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)createBuffersFromkernelWeights:(const unsigned int *)a0 inputBiasTerms:(const float *)a1 inputScaleTerms:(const float *)a2 outputBiasTerms:(const float *)a3 outputScaleTerms:(const float *)a4 useHalfPrecision:(BOOL)a5;
- (id)initWithDeviceImpl:(id)a0 convolutionDescriptor:(id)a1 kernelWeights:(const unsigned int *)a2 biasTerms:(const float *)a3 scaleValue:(float)a4 type:(unsigned long long)a5 flags:(unsigned long long)a6;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
