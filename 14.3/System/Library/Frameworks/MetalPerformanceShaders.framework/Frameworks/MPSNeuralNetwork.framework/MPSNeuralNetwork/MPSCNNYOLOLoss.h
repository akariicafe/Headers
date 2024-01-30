@class MPSMatrix, NSData, MPSImage, MPSCNNLoss, NSObject;
@protocol OS_dispatch_semaphore;

@interface MPSCNNYOLOLoss : MPSCNNKernel {
    BOOL _rescore;
    float _countOfPresentObjects;
    NSObject<OS_dispatch_semaphore> *_encodingSemaphore;
    MPSMatrix *_reductionBuffer;
    MPSImage *_firstLossTexture;
}

@property (nonatomic) float scaleXY;
@property (nonatomic) float scaleWH;
@property (nonatomic) float scaleNoObject;
@property (nonatomic) float scaleObject;
@property (nonatomic) float scaleClass;
@property (nonatomic) float minIOUForObjectPresence;
@property (nonatomic) float maxIOUForObjectAbsence;
@property (nonatomic) int reductionType;
@property (nonatomic) unsigned long long numberOfAnchorBoxes;
@property (retain, nonatomic) NSData *anchorBoxes;
@property (nonatomic) BOOL reduceAcrossBatch;
@property (readonly, retain, nonatomic) MPSCNNLoss *lossXY;
@property (readonly, retain, nonatomic) MPSCNNLoss *lossWH;
@property (readonly, retain, nonatomic) MPSCNNLoss *lossConfidence;
@property (readonly, retain, nonatomic) MPSCNNLoss *lossClasses;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; } *)libraryInfo:(struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *)a0;

- (unsigned long long)maxBatchSize;
- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)initWithDevice:(id)a0 lossDescriptor:(id)a1;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 labels:(id)a2;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 labels:(id)a2 destinationImage:(id)a3;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 labels:(id)a2 destinationImages:(id)a3;
- (id)resultStateForSourceImage:(id)a0 sourceStates:(id)a1;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 labels:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)initializeSupportFiltersWithDevice:(id)a0 lossDescriptor:(id)a1;
- (float)countPresetobjectsSourceImages:(id)a0 labels:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
