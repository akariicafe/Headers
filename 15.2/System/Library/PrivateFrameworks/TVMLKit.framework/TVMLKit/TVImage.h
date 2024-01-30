@class NSURL, NSData, NSString;

@interface TVImage : NSObject {
    struct CGImage { } *_image;
    struct CGImageSource { } *_imageSource;
    double _imageWidth;
    double _imageHeight;
    BOOL _enableCache;
    BOOL _cacheImmediately;
    NSURL *_imageURL;
    NSData *_imageData;
    NSString *_imageType;
    BOOL _imageBufferInMemory;
}

@property (readonly, nonatomic) int orientation;
@property (nonatomic) BOOL rotationEnabled;

+ (id)imageWithData:(id)a0;
+ (id)imageWithURL:(id)a0;
+ (id)imageWithCGImageRef:(struct CGImage { } *)a0 preserveAlpha:(BOOL)a1;
+ (id)imageWithCGImageRef:(struct CGImage { } *)a0 imageOrientation:(long long)a1 preserveAlpha:(BOOL)a2;
+ (id)imageWithPath:(id)a0;
+ (id)imageWithURL:(id)a0 cacheImmediately:(BOOL)a1;
+ (id)imageWithPath:(id)a0 cacheImmediately:(BOOL)a1;
+ (id)imageWithRotationFromURL:(id)a0;
+ (int)exifOrientationForImageOrientation:(long long)a0;
+ (long long)imageOrientationForExifOrientation:(int)a0;
+ (id)imageWithRotationFromPath:(id)a0;

- (id)initWithURL:(id)a0;
- (id)initWithData:(id)a0;
- (id)imageType;
- (id)uiImage;
- (void).cxx_destruct;
- (struct CGImage { } *)image;
- (void)dealloc;
- (float)aspectRatio;
- (BOOL)hasAlpha;
- (void)setEnableCache:(BOOL)a0;
- (BOOL)isPowerOfTwo;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 imageOrientation:(long long)a1 preserveAlpha:(BOOL)a2;
- (struct CGSize { double x0; double x1; })pixelBounds;
- (id)initWithCGImageRef:(struct CGImage { } *)a0 preserveAlpha:(BOOL)a1;
- (id)initWithURL:(id)a0 cacheImmediately:(BOOL)a1;
- (id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource { } *)a0;
- (long long)_uiImageOrientation;
- (void)_initializeCGImageWithRotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largestSquareRect;
- (BOOL)sourceRequiresRotation;
- (BOOL)enableCache;
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)a0;
- (BOOL)isImageBufferInMemory;

@end
