@interface CIBurstYUVImage : NSObject {
    struct __CFData { } *dataPtr;
    struct __CVBuffer { } *pixelBuffer;
    struct __IOSurface { } *ioSurf;
}

@property int width;
@property int height;
@property int bytesPerRow;
@property char *Ybuffer;
@property char *Cbuffer;

- (struct __CVBuffer { } *)pixelBuffer;
- (void)dealloc;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 maxDimension:(int)a1;
- (void)convertRGBAToYUV420:(char *)a0 rgbaBytesPerRow:(int)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 maxDimension:(int)a1;
- (id)initWithCIImage:(id)a0 ctx:(id)a1 maxDimension:(int)a2;

@end
