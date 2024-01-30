@class NSString;

@interface MTLSamplerDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long minFilter;
@property (nonatomic) unsigned long long magFilter;
@property (nonatomic) unsigned long long mipFilter;
@property (nonatomic) unsigned long long maxAnisotropy;
@property (nonatomic) unsigned long long sAddressMode;
@property (nonatomic) unsigned long long tAddressMode;
@property (nonatomic) unsigned long long rAddressMode;
@property (nonatomic) unsigned long long borderColor;
@property (nonatomic) BOOL normalizedCoordinates;
@property (nonatomic) float lodMinClamp;
@property (nonatomic) float lodMaxClamp;
@property (nonatomic) BOOL lodAverage;
@property (nonatomic) unsigned long long compareFunction;
@property (nonatomic) BOOL supportArgumentBuffers;
@property (copy, nonatomic) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
