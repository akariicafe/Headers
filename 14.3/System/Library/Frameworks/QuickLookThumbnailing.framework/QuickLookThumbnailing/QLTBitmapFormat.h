@interface QLTBitmapFormat : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long width;
@property unsigned long long height;
@property unsigned long long bitsPerComponent;
@property unsigned long long bitsPerPixel;
@property unsigned long long bytesPerRow;
@property unsigned int bitmapInfo;
@property (retain) struct CGColorSpace { } *colorSpace;

+ (id)bitmapFormatWithBitmapImage:(struct CGImage { } *)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToFormat:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBitmapContext:(struct CGContext { } *)a0;

@end
