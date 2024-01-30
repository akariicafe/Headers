@interface FaceCoreImage : NSObject {
    char *_rawDataBuffer;
    char *_alignedDataBuffer;
    BOOL _freeWhenDone;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) unsigned long long bytesPerRow;
@property (readonly) char *alignedImageData;

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 buffer:(void *)a3 freeWhenDone:(BOOL)a4;

@end
