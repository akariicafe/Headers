@class MPSAccelerationStructureGroup, NSDictionary;
@protocol MTLComputePipelineState;

@interface MPSAccelerationStructure : MPSKernel <NSSecureCoding, NSCopying> {
    MPSAccelerationStructureGroup *_group;
    NSDictionary *_privateOptions;
    id<MTLComputePipelineState> _boundingBoxCopyPipeline;
    unsigned long long _status;
    unsigned long long _usage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MPSAccelerationStructureGroup *group;
@property (readonly, nonatomic) struct _MPSAxisAlignedBoundingBox { } boundingBox;
@property (readonly, nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long usage;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; } *)libraryInfo:(struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *)a0;

- (id)statistics;
- (id)initWithDevice:(id)a0;
- (id)initWithGroup:(id)a0;
- (void)setStatus:(unsigned long long)a0;
- (void)dealloc;
- (void)validate;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)rebuild;
- (void)setGroup:(id)a0;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0 group:(id)a1;
- (struct MPSBVHOptions { BOOL x0; int x1; float x2; float x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; unsigned int x11; int x12; int x13; })getBVHOptions;
- (void)bindResourcesWithEncoder:(id)a0 commandBuffer:(id)a1 retainedResources:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0 group:(id)a1;
- (BOOL)useResourceBuffer;
- (void)encodeClearWithEncoder:(id)a0 buffer:(id)a1 bufferOffset:(unsigned long long)a2 value:(unsigned int)a3;
- (void)encodeIndirectDispatchWithEncoder:(id)a0 pipeline:(id)a1 threadCountBuffer:(id)a2 threadCountBufferOffset:(unsigned long long)a3 indirectDispatchBuffer:(id)a4 indirectDispatchBufferOffset:(unsigned long long)a5;
- (id)boundingBoxCopyPipeline;
- (void)rebuildWithCompletionHandler:(id /* block */)a0;
- (void)encodeRefitToCommandBuffer:(id)a0;
- (void)sharedInitAccelerationStructureWithGroup:(id)a0;
- (void)decodeAccelerationStructureWithCoder:(id)a0;
- (id)copyAccelerationStructureWithZone:(struct _NSZone { } *)a0 device:(id)a1 group:(id)a2;
- (id)privateOptions;
- (void)setPrivateOptions:(id)a0;
- (void)updateResourceBufferWithEncoder:(id)a0 commandBuffer:(id)a1 retainedResources:(id)a2;

@end
