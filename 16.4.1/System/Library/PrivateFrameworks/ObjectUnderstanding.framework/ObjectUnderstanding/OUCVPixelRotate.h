@interface OUCVPixelRotate : NSObject {
    struct __CVPixelBufferPool { } *_pixelBufferCreatePool;
    struct OpaqueVTPixelRotationSession { } *_sessionRotate;
    struct CGSize { double width; double height; } _outputResolution;
    unsigned int _outputPixelFormat;
    struct __CVBuffer { } *_rotatePixelBuffer;
    BOOL _isCrop;
}

- (void)dealloc;
- (struct OpaqueVTPixelRotationSession { } *)_createRotationSessionByRotationDegree:(int)a0;
- (struct __CVBuffer { } *)rotateImage:(struct __CVBuffer { } *)a0;
- (id)initForRotationDegree:(int)a0 resolution:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned int)a2;

@end
