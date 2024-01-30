@class NSString;

@interface VNMPImageData : NSObject

@property (readonly) struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *image;
@property (readonly) struct __CVBuffer { } *imageCVPixelBuffer;
@property (retain) NSString *imageFilePath;
@property BOOL freeImageInDealloc;
@property (readonly) NSString *externalImageId;
@property (readonly) long long exifTimestamp;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 externalImageId:(id)a1 andExifTimestampString:(id)a2 error:(id *)a3;
- (id)initWithVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 externalImageId:(id)a1 andExifTimestampValue:(long long)a2 error:(id *)a3;
- (id)initWithCVPixelBufferImage:(struct __CVBuffer { } *)a0 externalImageId:(id)a1 andExifTimestampString:(id)a2 error:(id *)a3;
- (id)initWithCVPixelBufferImage:(struct __CVBuffer { } *)a0 externalImageId:(id)a1 andExifTimestampValue:(long long)a2 error:(id *)a3;

@end
