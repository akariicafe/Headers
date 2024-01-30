@class VNSizeRange;

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _cachedCalculatedHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VNSizeRange *pixelsWideRange;
@property (readonly, nonatomic) VNSizeRange *pixelsHighRange;
@property (readonly, nonatomic) unsigned long long aspectRatioHandling;
@property (readonly, nonatomic) unsigned int idealImageFormat;
@property (readonly, nonatomic) unsigned int idealOrientation;
@property (readonly, nonatomic, getter=isOrientationAgnostic) BOOL orientationAgnostic;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdealFormat:(unsigned int)a0 pixelsWideRange:(id)a1 pixelsHighRange:(id)a2 aspectRatioHandling:(unsigned long long)a3 idealOrientation:(unsigned int)a4 orientationAgnostic:(BOOL)a5;
- (BOOL)isAllowedPixelsWide:(unsigned long long)a0 pixelsHigh:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
