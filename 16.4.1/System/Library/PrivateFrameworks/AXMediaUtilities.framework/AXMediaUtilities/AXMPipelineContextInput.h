@class CIImage, NSURL, AXMPixelBufferWrapper;

@interface AXMPipelineContextInput : NSObject <NSSecureCoding> {
    long long _inputType;
    CIImage *_ciImage;
    NSURL *_photoLibraryURL;
    AXMPixelBufferWrapper *_pixelBuffer;
    struct CGColorSpace { } *_extendedSRGBColorSpace;
    NSURL *_URL;
    struct CGSize { double width; double height; } _cachedImageURLSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long inputType;
@property (readonly, nonatomic) CIImage *ciImage;
@property (readonly, nonatomic) NSURL *photoLibraryURL;
@property (readonly, nonatomic) AXMPixelBufferWrapper *pixelBuffer;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGColorSpace { } *imageColorSpace;
@property (readonly, nonatomic) struct __CVBuffer { } *wrappedPixelBuffer;

+ (id)new;
+ (id)inputWithURL:(id)a0;
+ (id)inputWithCIImage:(id)a0;
+ (id)inputWithCIImage:(id)a0 photoLibraryURL:(id)a1;
+ (id)inputWithPixelBuffer:(id)a0;
+ (id)inputWithURL:(id)a0 photoLibraryURL:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)_initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCIImage:(id)a0;
- (id)_initWithCIImage:(id)a0 photoLibraryURL:(id)a1;
- (id)_initWithPixelBuffer:(id)a0;
- (id)_initWithURL:(id)a0 photoLibraryURL:(id)a1;
- (struct CGImage { } *)createCGImageWithMetrics:(id)a0;

@end
