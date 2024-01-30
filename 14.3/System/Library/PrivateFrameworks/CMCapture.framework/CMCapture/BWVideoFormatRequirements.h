@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (copy, nonatomic) NSArray *supportedPixelFormats;
@property (copy, nonatomic) NSArray *preferredPixelFormats;
@property (copy, nonatomic) NSArray *supportedColorSpaceProperties;
@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) unsigned long long widthAlignment;
@property (nonatomic) unsigned long long heightAlignment;
@property (copy, nonatomic) NSArray *supportedCacheModes;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (nonatomic) BOOL prewireBuffers;
@property (nonatomic) BOOL memoryPoolUseAllowed;

+ (void)initialize;
+ (id)cacheModesForOptimizedCPUAccess;
+ (id)cacheModesForOptimizedDisplayAccess;
+ (id)cacheModesForOptimizedHWAccess;
+ (id)cacheModesForCacheProfile:(int)a0;

- (unsigned int)mediaType;
- (id)init;
- (void)dealloc;
- (id)initWithPixelBufferAttributes:(id)a0;
- (void)_resolvePixelFormat;
- (Class)formatClass;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
