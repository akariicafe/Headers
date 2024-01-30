@class NSUUID, NSData;

@interface ISImage : NSObject

@property (retain) NSUUID *uuid;
@property (readonly) NSData *bitmapData;
@property (readonly) struct CGSize { double x0; double x1; } pixelSize;
@property struct CGSize { double x0; double x1; } minimumSize;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly) double scale;
@property (readonly) struct CGImage { } *CGImage;
@property (readonly) struct CGImage { } *cgImage;
@property (readonly) BOOL placeholder;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (struct CGColorSpace { } *)srgbColorSpace;

- (struct CGImage { } *)CGImage;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1;
- (id)digest;
- (id)initWithContentsOfURL:(id)a0 scale:(double)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (id)initWithData:(id)a0 scale:(double)a1;
- (BOOL)writeToURL:(id)a0;
- (void).cxx_destruct;
- (id)uuid;
- (id)description;
- (id)_init;
- (id)debugDescription;

@end
