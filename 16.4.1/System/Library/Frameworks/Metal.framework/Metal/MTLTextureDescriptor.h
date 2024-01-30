@interface MTLTextureDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned long long depth;
@property (nonatomic) unsigned long long mipmapLevelCount;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) unsigned long long usage;
@property (nonatomic) BOOL allowGPUOptimizedContents;
@property (nonatomic) long long compressionType;
@property (nonatomic) struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } swizzle;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)texture2DDescriptorWithPixelFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 mipmapped:(BOOL)a3;
+ (id)textureBufferDescriptorWithPixelFormat:(unsigned long long)a0 width:(unsigned long long)a1 resourceOptions:(unsigned long long)a2 usage:(unsigned long long)a3;
+ (id)textureCubeDescriptorWithPixelFormat:(unsigned long long)a0 size:(unsigned long long)a1 mipmapped:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
