@class NSNumber, NSString;

@interface ASCScreenshotDisplayConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) double defaultCornerRadius;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *deviceCornerRadiusFactor;
@property (readonly, nonatomic) NSString *cornerCurve;
@property (readonly, nonatomic) unsigned long long maskedCorners;

+ (id)defaultConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (double)cornerRadiusForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDeviceCornerRadiusFactor:(id)a0;

@end
