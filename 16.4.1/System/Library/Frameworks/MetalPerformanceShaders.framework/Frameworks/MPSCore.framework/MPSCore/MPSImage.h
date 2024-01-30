@class NSString, MTLTextureDescriptor, MPSCommandBufferImageCache;
@protocol MTLTexture, MTLDevice;

@interface MPSImage : NSObject {
    void *_device;
    unsigned long long _textureType;
    struct MPSPixelInfo { unsigned short pixelFormat : 10; unsigned char chunkSize : 6; unsigned char chunkWidth : 4; unsigned char chunkHeight : 4; unsigned char pixelStyle : 4; unsigned char colorModel : 4; unsigned char bitDepth : 8; unsigned char isSigned : 1; unsigned char isClamped : 1; unsigned char isInteger : 1; unsigned char canFilter : 1; unsigned char canRender : 1; unsigned char canWrite : 1; unsigned char canMultisample : 1; unsigned char isSupported : 1; unsigned char isCompressed : 1; unsigned char chunkSizePlane2 : 6; unsigned char log2MinAlignment : 4; unsigned char featureChannelFormat : 3; unsigned char _padding : 2; } _pixelInfo;
    struct MPSAutoTexture { struct atomic<id<MTLTexture>> { struct __cxx_atomic_impl<id<MTLTexture>, std::__cxx_atomic_base_impl<id<MTLTexture>>> { _Atomic id __a_value; } __a_; } _texture; struct { unsigned long long size; unsigned long long align; } _resourceSize; unsigned long long _rowBytes; struct MPSPixelInfo { unsigned short pixelFormat : 10; unsigned char chunkSize : 6; unsigned char chunkWidth : 4; unsigned char chunkHeight : 4; unsigned char pixelStyle : 4; unsigned char colorModel : 4; unsigned char bitDepth : 8; unsigned char isSigned : 1; unsigned char isClamped : 1; unsigned char isInteger : 1; unsigned char canFilter : 1; unsigned char canRender : 1; unsigned char canWrite : 1; unsigned char canMultisample : 1; unsigned char isSupported : 1; unsigned char isCompressed : 1; unsigned char chunkSizePlane2 : 6; unsigned char log2MinAlignment : 4; unsigned char featureChannelFormat : 3; unsigned char _padding : 2; } _pixelInfo; union { struct { struct MPSAutoTexture *parent; unsigned int subRangeStart; unsigned int subRangeSize; } _subTex; struct { MTLTextureDescriptor *_descriptor; union { struct { struct MPSDevice *device; } _tex; struct { MPSCommandBufferImageCache *cache; } _temporary; } ; } ; } ; unsigned char _type; unsigned char _twiddled; } _texture;
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

- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a5 imageIndex:(unsigned long long)a6;
- (id)batchRepresentation;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 imageIndex:(unsigned long long)a2;
- (id).cxx_construct;
- (unsigned long long)getPixelChannelSize;
- (id)batchRepresentationWithSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerColumn:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 bytesPerImage:(unsigned long long)a4 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a5 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a6 imageIndex:(unsigned long long)a7;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a5 imageIndex:(unsigned long long)a6;
- (unsigned long long)resourceSize;
- (id)initWithTexture:(id)a0 featureChannels:(unsigned long long)a1;
- (id)initWithParentImage:(id)a0 sliceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 featureChannels:(unsigned long long)a2;
- (id)init;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a4 imageIndex:(unsigned long long)a5;
- (id)initWithDevice:(id)a0 imageDescriptor:(id)a1;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 imageIndex:(unsigned long long)a2;
- (id)initWithTexture:(id)a0 featureChannels:(unsigned long long)a1 featureChannelsLayout:(unsigned long long)a2;
- (id)initWithDescriptor:(id)a0 featureChannels:(unsigned long long)a1 featureChannelsLayout:(unsigned long long)a2 featureChannelFormat:(unsigned long long)a3 onDevice:(id)a4;
- (void).cxx_destruct;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a4 imageIndex:(unsigned long long)a5;
- (id)subImageWithFeatureChannelRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
