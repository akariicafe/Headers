@class NSUUID, NSData;

@interface IFImage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL placeholder;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;
@property (readonly) NSData *bitmapData;
@property BOOL largest;
@property (readonly) double dimension;
@property struct CGSize { double x0; double x1; } minimumSize;
@property BOOL placeholder;
@property unsigned long long validationFlags;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly) struct CGImage { } *CGImage;
@property (readonly) struct CGImage { } *cgImage;

+ (id)imageWithContentsOfURL:(id)a0;
+ (struct CGColorSpace { } *)defaultCGColorSpace;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (struct CGImage { } *)createCGImageWithBitmapData:(id)a0 imageHeader:(struct { unsigned int x0; float x1; float x2; unsigned int x3; unsigned int x4; float x5; float x6; unsigned char x7[4]; } *)a1;
+ (struct CGImage { } *)escapingCGImageWithCGImage:(struct CGImage { } *)a0;

- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (struct CGSize { double x0; double x1; })pixelSize;
- (BOOL)writeToURL:(id)a0;
- (double)dimension;
- (id)validationToken;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (id)initWithContentsOfURL:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)uuid;
- (id)digest;
- (id)initWithContentsOfURL:(id)a0 scale:(double)a1;
- (id)initWithData:(id)a0 uuid:(id)a1;

@end
