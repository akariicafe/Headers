@class NSString, UIImage, NSData;

@interface CRKImage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *underlyingImage;
@property (nonatomic, getter=isHorizontallyFlipped) BOOL horizontallyFlipped;
@property (readonly, nonatomic) CRKImage *localizedImage;
@property (readonly, copy, nonatomic) NSData *PNGRepresentation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (copy, nonatomic) NSString *accessibilityDescription;

+ (id)imageNamed:(id)a0;
+ (double)screenScale;
+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithData:(id)a0;
+ (id)imageWithUnderlyingImage:(id)a0;
+ (id)templateImageNamed:(id)a0 inBundle:(id)a1;
+ (id)templateImageNamed:(id)a0;
+ (struct CGImage { } *)resizedCGImageFromImage:(struct CGImage { } *)a0 newSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUnderlyingImage:(id)a0;
- (id)initWithUnderlyingImage:(id)a0 horizontallyFlipped:(BOOL)a1;
- (BOOL)layoutIsLeftToRight;
- (id)flippedUnderlyingImage;
- (id)imageByResizingToSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageByEnlargingCanvasToSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageByAspectFittingToBox:(struct CGSize { double x0; double x1; })a0;
- (id)JPEGRepresentationWithCompressionFactor:(double)a0;
- (BOOL)isLargerThanSize:(struct CGSize { double x0; double x1; })a0;

@end
