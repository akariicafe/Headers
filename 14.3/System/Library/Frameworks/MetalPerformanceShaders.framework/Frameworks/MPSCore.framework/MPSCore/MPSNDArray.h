@class NSString, MPSCommandBufferImageCache;
@protocol MTLDevice;

@interface MPSNDArray : NSObject {
    void /* unknown type, empty encoding */ _dimensionLengths;
    void /* unknown type, empty encoding */ _sliceOffsets;
    void /* unknown type, empty encoding */ _sliceLengths;
    void /* unknown type, empty encoding */ _dimensionOrder;
    struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *_device;
    struct MPSAutoBuffer { struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *__a_value; } __a_; } _buffer; unsigned long long _requestedSize; id<MTLDevice> _device; MPSCommandBufferImageCache *_cache; struct { unsigned long long size; unsigned long long align; } _resourceSize; } _buffer;
    unsigned long long _offset;
    unsigned long long _rowBytes;
    struct MPSLibrary { id x0; struct atomic<MPSKey_data *> *x1; unsigned long long x2; union { struct MPSDeviceSpecificInfo *x0; struct MPSDeviceBehaviors *x1; } x3; unsigned long long x4; struct MPSKey_data *x5[128]; struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; } x6; struct *x7; struct MPSLibraryInfo *x8; } *_library;
    BOOL _isTemporary;
}

@property (copy) NSString *label;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) unsigned long long dataTypeSize;
@property (readonly, nonatomic) unsigned long long numberOfDimensions;
@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, retain, nonatomic) MPSNDArray *parent;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; } *)libraryInfo:(struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *)a0;
+ (id)defaultAllocator;

- (id)init;
- (void).cxx_destruct;
- (void)importDataWithCommandBuffer:(id)a0 fromBuffer:(id)a1 sourceDataType:(unsigned int)a2 offset:(unsigned long long)a3 rowStrides:(long long *)a4;
- (void)dealloc;
- (void)exportDataWithCommandBuffer:(id)a0 toBuffer:(id)a1 destinationDataType:(unsigned int)a2 offset:(unsigned long long)a3 rowStrides:(long long *)a4;
- (id)arrayViewWithCommandBuffer:(id)a0 descriptor:(id)a1 aliasing:(unsigned long long)a2;
- (id)descriptor;
- (unsigned long long)offset;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (void)readBytes:(void *)a0 strideBytes:(long long *)a1;
- (void)writeBytes:(void *)a0 strideBytes:(long long *)a1;
- (id)matrixWithCommandBuffer:(id)a0 descriptor:(id)a1 aliasing:(unsigned long long)a2;
- (id).cxx_construct;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)debugDescription;
- (unsigned long long)lengthOfDimension:(unsigned long long)a0;
- (id)arrayViewWithCommandBuffer:(id)a0 computeEncoder:(id)a1 descriptor:(id)a2 destinationArray:(id)a3 aliasing:(unsigned long long)a4;
- (id)safeArrayViewWithCommandBuffer:(id)a0 computeEncoder:(id)a1 descriptor:(id)a2 aliasing:(unsigned long long)a3;
- (void)makeStrideBytesInArray:(long long *)a0;
- (void /* unknown type, empty encoding */)makeStrideBytes;
- (void)copyDataWithCommandBuffer:(id)a0 images:(id)a1 offset:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 imageToArray:(BOOL)a3;
- (void)encodeCopyWithCommandBuffer:(id)a0 computeEncoder:(id)a1 toBuffer:(id)a2 destinationDataType:(unsigned int)a3 destinationOffsetBytes:(unsigned long long)a4 destinationStrideBytes:(long long *)a5;
- (void)exportDataWithCommandBuffer:(id)a0 toBuffer:(id)a1 destinationDataType:(unsigned int)a2 offset:(unsigned long long)a3 rowStrides:(long long *)a4 lengths:(unsigned long long *)a5 numLengths:(unsigned long long)a6 flatteningLevel:(unsigned long long)a7;
- (void)encodeReshapedMatrixWithCommandBuffer:(id)a0 computeEncoder:(id)a1 toBuffer:(id)a2 destinationDataType:(unsigned int)a3 destinationOffsetBytes:(unsigned long long)a4 destinationRowBytes:(unsigned long long)a5 destinationColumns:(unsigned long long)a6 destinationRows:(unsigned long long)a7;
- (void)printNDArrayToFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (id)dataWithCommandBuffer:(id)a0;
- (id)initWithDevice:(id)a0 matrix:(id)a1;
- (void)exportDataWithCommandBuffer:(id)a0 computeEncoder:(id)a1 toBuffer:(id)a2 destinationDataType:(unsigned int)a3 offset:(unsigned long long)a4 rowStrides:(long long *)a5 lengths:(unsigned long long *)a6 numLengths:(unsigned long long)a7 flatteningLevel:(unsigned long long)a8;
- (id)initWithDevice:(id)a0 scalar:(double)a1;
- (unsigned long long)resourceSize;
- (id)safeArrayViewWithCommandBuffer:(id)a0 descriptor:(id)a1 aliasing:(unsigned long long)a2;
- (void /* unknown type, empty encoding */)makeStrideElements;
- (void)arrayViewWithCommandBuffer:(id)a0 descriptor:(id)a1 destinationArray:(id)a2 aliasing:(unsigned long long)a3;
- (void)encodeReshapedBatchWithCommandBuffer:(id)a0 toBuffer:(id)a1 destinationDataType:(unsigned int)a2 destinationOffsetBytes:(unsigned long long)a3 destinationRowBytes:(unsigned long long)a4 destinationColumns:(unsigned long long)a5 destinationRows:(unsigned long long)a6;
- (void)printNDArray;
- (void)exportDataWithCommandBuffer:(id)a0 toImages:(id)a1 offset:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (void)importDataWithCommandBuffer:(id)a0 fromImages:(id)a1 offset:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)checkNDArray:(float *)a0 nativeUlps:(float)a1 absoluteErr:(float)a2;
- (id)buffer;
- (id)initWithBuffer:(id)a0 descriptor:(id)a1;

@end
