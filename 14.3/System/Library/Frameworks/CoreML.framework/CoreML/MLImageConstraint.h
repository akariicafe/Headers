@class MLImageSizeConstraint;

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long imageHeight;
@property (readonly) unsigned long long imageWidth;
@property (readonly) unsigned long long pixelType;
@property (readonly) unsigned int osType;
@property (readonly, nonatomic) long long pixelsHigh;
@property (readonly, nonatomic) long long pixelsWide;
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) MLImageSizeConstraint *sizeConstraint;

+ (id)_stringForOSType:(unsigned int)a0;
+ (BOOL)osType:(unsigned int)a0 isAcceptedForPixelType:(unsigned long long)a1;
+ (id)constraintWithPixelsWide:(long long)a0 pixelsHigh:(long long)a1 pixelType:(unsigned long long)a2 sizeConstraint:(id)a3;
+ (unsigned long long)imagePixelTypeFromOSType:(unsigned int)a0;
+ (id)constraintWithPixelsWide:(long long)a0 pixelsHigh:(long long)a1 pixelType:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithPixelsWide:(long long)a0 pixelsHigh:(long long)a1 pixelType:(unsigned long long)a2 sizeConstraint:(id)a3;
- (id)_stringForAllowedOSTypes;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
