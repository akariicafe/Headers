@class MPSImageBox3D, NSArray, MPSImageBilinearScale;
@protocol MTLTexture;

@interface MPSImageSpatioTemporalGuidedFilter : MPSKernel {
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _arrayLength;
    unsigned long long _kernelSpatialDiameter;
    unsigned long long _kernelTemporalDiameter;
    float _epsilon;
    unsigned long long _sourceChannels;
    unsigned long long _guideChannels;
    BOOL _preallocateIntermediates;
    BOOL _useFloatIntermediates;
    BOOL _supportsReadWriteTextures;
    MPSImageBox3D *_boxFilter;
    MPSImageBilinearScale *_bilinearScaler;
    id<MTLTexture> _guideStack;
    NSArray *_sourceStackArray;
    id<MTLTexture> _mean_guideStack;
    id<MTLTexture> _mean_sourceStack;
    NSArray *_var_I;
    id<MTLTexture> _constraints;
    NSArray *_coefficientsTextureArray;
}

@property (readonly, nonatomic) unsigned long long preallocatedSize;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; } *)libraryInfo:(struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void)allocateResourcesWithDevice:(id)a0;
- (id)allocateIntermediateTextureWithDevice:(id)a0 textureDescriptor:(id)a1;
- (void)validateCoefficientsTextures:(id)a0;
- (void)encodeShiftOn:(id)a0 textureArray:(id)a1 by:(unsigned long long)a2;
- (void)encodeDownsamplingOn:(id)a0 inputTexture:(id)a1 outputTexture:(id)a2;
- (void)encodeReconstructionToCommandBuffer:(id)a0 guidanceTexture:(id)a1 constraintsTexture:(id)a2 coefficientsTextureArray:(id)a3 destinationTexture:(id)a4;
- (id)newTemporaryIntermediate:(id)a0 texture:(id)a1;
- (void)encodeReconstructionToCommandBuffer:(id)a0 guidanceTexture:(id)a1 coefficientsTextureArray:(id)a2 destinationTextureArray:(id)a3;
- (void)encodeRegressionToCommandBuffer:(id)a0 sourceTextureArray:(id)a1 guidanceTexture:(id)a2 constraintsTextureArray:(id)a3 numberOfIterations:(unsigned long long)a4 destinationCoefficientsTextureArray:(id)a5;
- (void)encodeReconstructionToCommandBuffer:(id)a0 guidanceTexture:(id)a1 constraintsTextureArray:(id)a2 coefficientsTextureArray:(id)a3 destinationTextureArray:(id)a4;
- (id)initWithDevice:(id)a0 filterDescriptor:(id)a1;
- (void)compileKernels;
- (void)encodeToCommandBuffer:(id)a0 sourceTextureArray:(id)a1 guidanceTexture:(id)a2 constraintsTextureArray:(id)a3 numberOfIterations:(unsigned long long)a4 destinationTextureArray:(id)a5;

@end
