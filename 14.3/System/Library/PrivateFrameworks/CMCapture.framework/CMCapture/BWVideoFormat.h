@class NSDictionary;

@interface BWVideoFormat : BWFormat

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) unsigned long long extendedWidth;
@property (nonatomic) unsigned long long extendedHeight;
@property (nonatomic) unsigned int cacheMode;
@property (nonatomic) BOOL prewireBuffers;
@property (nonatomic) BOOL memoryPoolUseAllowed;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) int colorSpaceProperties;

+ (void)initialize;
+ (id)pixelBufferAttachmentsForColorSpaceProperties:(int)a0;
+ (int)colorSpacePropertiesForSourceThatSupportsWideColor:(BOOL)a0 sourceColorSpace:(int)a1 sourcePixelFormat:(unsigned int)a2 sourceDimensions:(struct { int x0; int x1; })a3 requestedPixelFormat:(unsigned int)a4;
+ (id)_formatRequirementsByResolvingFormatRequirements:(id)a0 withFormatRequirements:(id)a1 printErrors:(BOOL)a2;
+ (int)colorSpacePropertiesWithSourceColorSpace:(int)a0 sourcePixelFormat:(unsigned int)a1 sourceDimensions:(struct { int x0; int x1; })a2 requestedPixelFormat:(unsigned int)a3;
+ (int)colorSpacePropertiesForPixelBufferAttachments:(id)a0;
+ (id)colorInfoWithSourceColorSpace:(int)a0 sourcePixelFormat:(unsigned int)a1 sourceDimensions:(struct { int x0; int x1; })a2 requestedPixelFormat:(unsigned int)a3;
+ (id)formatByResolvingRequirements:(id)a0 printErrors:(BOOL)a1;
+ (id)formatByResolvingRequirements:(id)a0;

- (struct opaqueCMFormatDescription { } *)formatDescription;
- (unsigned int)mediaType;
- (void)dealloc;
- (id)_initWithResolvedPixelBufferAttributes:(id)a0 colorSpaceProperties:(int)a1 memoryPoolUseAllowed:(BOOL)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isHLGColorSpace;
- (id)debugDescription;

@end
