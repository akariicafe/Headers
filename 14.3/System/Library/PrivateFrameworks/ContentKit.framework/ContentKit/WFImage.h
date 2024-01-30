@class NSImage, NSData, NSURL, UIImage;

@interface WFImage : NSObject <NSCopying, NSSecureCoding> {
    id _internalCGImage;
    id _internalImageSource;
    UIImage *_platformImage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *PNGRepresentation;
@property (readonly, nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) struct CGImageSource { } *internalImageSource;
@property (readonly, nonatomic) struct CGImage { } *internalCGImage;
@property (readonly, nonatomic) long long representationType;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL allowsAnimated;
@property (readonly, nonatomic) struct CGImage { } *CGImage;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) unsigned long long renderingMode;
@property (readonly, nonatomic) UIImage *platformImage;
@property (readonly, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic) NSImage *NSImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } CGImageSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPixels;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sizeInPoints;

+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)imageWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned int)a2;
+ (id)imageWithCGImage:(struct CGImage { } *)a0;
+ (id)imageWithData:(id)a0 scale:(double)a1;
+ (id)imageWithData:(id)a0;
+ (id)imageWithContentsOfURL:(id)a0;
+ (id)imageWithData:(id)a0 scale:(double)a1 allowAnimated:(BOOL)a2;
+ (id)applicationIconImageForBundleIdentifier:(id)a0;
+ (id)applicationIconImageForBundleIdentifier:(id)a0 format:(unsigned long long)a1;
+ (id)systemImageNamed:(id)a0 pointSize:(double)a1 inCatalogs:(id)a2;
+ (id)systemImageNamed:(id)a0 pointSize:(double)a1;
+ (id)imageWithDeviceScreenScaleImageData:(id)a0;
+ (id)systemImageNamed:(id)a0 pointSize:(double)a1 scaleFactor:(double)a2 rightToLeft:(BOOL)a3 appearanceName:(id)a4 inCatalogs:(id)a5;
+ (id)systemImageNamed:(id)a0 pointSize:(double)a1 scaleFactor:(double)a2 rightToLeft:(BOOL)a3 appearanceName:(id)a4;
+ (id)imageNamed:(id)a0 inBundle:(id)a1 scale:(double)a2;
+ (BOOL)imageSizeIndicatesScreenshot:(struct CGSize { double x0; double x1; })a0;
+ (id)documentIconImageForFileType:(id)a0;
+ (id)applicationIconImageForCalendarDate:(id)a0 format:(unsigned long long)a1;
+ (id)imageWithPlatformImage:(id)a0;

- (id)initWithContentsOfURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithPlatformImage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned int)a2;
- (BOOL)hasValidImage;
- (id)imageWithRenderingMode:(unsigned long long)a0;
- (id)imageWithTintColor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)tintedImageWithColor:(id)a0;
- (void)drawInContext:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)applicationIconImageWithFormat:(unsigned long long)a0;
- (id)resizedImageWithSizeInPoints:(struct CGSize { double x0; double x1; })a0;
- (id)resizedImageWithSizeInPoints:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGImage { } *)createNonRotatedCGImageRepresentation;
- (id)initWithRepresentationType:(long long)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(unsigned int)a2 renderingMode:(unsigned long long)a3;
- (id)initWithData:(id)a0 scale:(double)a1 allowAnimated:(BOOL)a2;
- (void)drawInContext:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 blendMode:(int)a2 alpha:(double)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })contentsTransformForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
