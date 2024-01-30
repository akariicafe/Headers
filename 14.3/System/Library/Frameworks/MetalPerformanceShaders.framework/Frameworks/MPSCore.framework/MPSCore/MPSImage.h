@class NSString, MTLTextureDescriptor, MPSCommandBufferImageCache;
@protocol MTLTexture, MTLDevice;

@interface MPSImage : NSObject {
    struct MPSDevice { void /* function */ **x0; struct MPSDevice *x1; id x2; struct MPSDeviceFreeList *x3; struct atomic<MTLLibraryNode *> { struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *> > { _Atomic struct MTLLibraryNode *x0; } x0; } x4; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x5[2][2][2]; struct MPSPixelCapabilities { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 1; unsigned char x7 : 8; } x6[590]; struct atomic<void *> { struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *> > { _Atomic void *x0; } x0; } x7; unsigned int x8; int x9; unsigned int x10; struct MPSGPUInfo { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 8; unsigned short x3 : 16; unsigned char x4 : 4; unsigned short x5 : 10; unsigned short x6 : 10; } x11; struct MPSGPUInfoPerfStats { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; } x12; struct atomic<MPSLibrary *> { struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *> > { _Atomic struct MPSLibrary *x0; } x0; } x13[123]; } *_device;
    unsigned long long _textureType;
    struct MPSPixelInfo { unsigned short pixelFormat : 10; unsigned char chunkSize : 6; unsigned char chunkWidth : 4; unsigned char chunkHeight : 4; unsigned char pixelStyle : 4; unsigned char colorModel : 4; unsigned char bitDepth : 8; unsigned char isSigned : 1; unsigned char isClamped : 1; unsigned char isInteger : 1; unsigned char canFilter : 1; unsigned char canRender : 1; unsigned char canWrite : 1; unsigned char canMultisample : 1; unsigned char isSupported : 1; unsigned char isCompressed : 1; unsigned char chunkSizePlane2 : 6; unsigned char log2MinAlignment : 4; unsigned char featureChannelFormat : 3; unsigned char _padding : 2; } _pixelInfo;
    struct MPSAutoTexture { struct atomic<id<MTLTexture> > { struct __cxx_atomic_impl<id<MTLTexture>, std::__1::__cxx_atomic_base_impl<id<MTLTexture> > > { _Atomic id __a_value; } __a_; } _texture; struct { unsigned long long size; unsigned long long align; } _resourceSize; unsigned long long _rowBytes; struct MPSPixelInfo { unsigned short pixelFormat : 10; unsigned char chunkSize : 6; unsigned char chunkWidth : 4; unsigned char chunkHeight : 4; unsigned char pixelStyle : 4; unsigned char colorModel : 4; unsigned char bitDepth : 8; unsigned char isSigned : 1; unsigned char isClamped : 1; unsigned char isInteger : 1; unsigned char canFilter : 1; unsigned char canRender : 1; unsigned char canWrite : 1; unsigned char canMultisample : 1; unsigned char isSupported : 1; unsigned char isCompressed : 1; unsigned char chunkSizePlane2 : 6; unsigned char log2MinAlignment : 4; unsigned char featureChannelFormat : 3; unsigned char _padding : 2; } _pixelInfo; union { struct { struct MPSAutoTexture *parent; unsigned int subRangeStart; unsigned int subRangeSize; } _subTex; struct { MTLTextureDescriptor *_descriptor; union { struct { struct MPSDevice *device; } _tex; struct { MPSCommandBufferImageCache *cache; } _temporary; } ; } ; } ; unsigned char _type; unsigned char _twiddled; } _texture;
    BOOL _updatedAlready;
}

@property (readonly, nonatomic) unsigned long long featureChannelsLayout;
@property (readonly, retain, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long featureChannels;
@property (readonly, nonatomic) unsigned long long numberOfImages;
@property (readonly, nonatomic) unsigned long long textureType;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) unsigned long long precision;
@property (readonly, nonatomic) unsigned long long usage;
@property (readonly, nonatomic) unsigned long long featureChannelFormat;
@property (readonly, nonatomic) unsigned long long pixelSize;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (copy) NSString *label;
@property (readonly, retain, nonatomic) MPSImage *parent;

+ (id)defaultAllocator;

- (id)debugQuickLookObject;
- (id)init;
- (id)initWithParentImage:(id)a0 sliceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 featureChannels:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithTexture:(id)a0 featureChannels:(unsigned long long)a1;
- (void)dealloc;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (id)initWithDevice:(id)a0 imageDescriptor:(id)a1;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 imageIndex:(unsigned long long)a2;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 imageIndex:(unsigned long long)a2;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a5 imageIndex:(unsigned long long)a6;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)batchRepresentation;
- (id)subImageWithFeatureChannelRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)debugDescription;
- (unsigned long long)resourceSize;
- (id)initWithDescriptor:(id)a0 featureChannels:(unsigned long long)a1 featureChannelsLayout:(unsigned long long)a2 featureChannelFormat:(unsigned long long)a3 onDevice:(id)a4;
- (id)batchRepresentationWithSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)getPixelChannelSize;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a5 imageIndex:(unsigned long long)a6;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerColumn:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 bytesPerImage:(unsigned long long)a4 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a5 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a6 imageIndex:(unsigned long long)a7;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a4 imageIndex:(unsigned long long)a5;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a4 imageIndex:(unsigned long long)a5;
- (id)initWithTexture:(id)a0 featureChannels:(unsigned long long)a1 featureChannelsLayout:(unsigned long long)a2;

@end
