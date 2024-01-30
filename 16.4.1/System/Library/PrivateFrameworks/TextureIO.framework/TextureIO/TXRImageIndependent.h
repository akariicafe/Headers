@interface TXRImageIndependent : TXRImage

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long alphaInfo;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;

- (id)initWithCGImage:(struct CGImage { } *)a0 bufferAllocator:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithImage:(SEL)a0 dimensions:(id)a1 pixelFormat:(unsigned long long)a2;
- (struct CGImage { } *)newCGImageWithColorSpace:(struct CGColorSpace { } *)a0 error:(id *)a1;
- (BOOL)exportToURL:(id)a0 uttype:(const struct __CFString { } *)a1 error:(id *)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 pixelFormat:(unsigned long long)a1 bufferAllocator:(id)a2 options:(id)a3 error:(id *)a4;
- (id)initWithDimensions:(SEL)a0 pixelFormat:(unsigned long long)a1 alphaInfo:(unsigned long long)a2 bufferAllocator:(id)a3;
- (id)initWithDimensions:(SEL)a0 pixelFormat:(unsigned long long)a1 alphaInfo:(unsigned long long)a2 bytesPerRow:(unsigned long long)a3 bytesPerImage:(unsigned long long)a4 buffer:(id)a5 offset:(unsigned long long)a6;
- (id)initWithImage:(SEL)a0 dimensions:(id)a1 pixelFormat:(unsigned long long)a2 alphaInfo:(unsigned long long)a3;

@end
