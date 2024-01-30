@interface SIRotation : NSObject {
    struct __CVPixelBufferPool { } *_pixelBufferCreatePool;
    struct OpaqueVTPixelRotationSession { } *_sessionRotate;
    struct CGSize { double width; double height; } _outputResolution;
    unsigned int _outputPixelFormat;
    unsigned long long _algorithmKey;
    BOOL _isCrop;
}

- (void)dealloc;
- (struct __CVBuffer { } *)_createCVPixelBufferWithResolution:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1;
- (struct OpaqueVTPixelRotationSession { } *)_createRotationSessionByRotationDegree:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCenterCropSrcSize:(struct CGSize { double x0; double x1; })a0 dstSize:(struct CGSize { double x0; double x1; })a1;
- (id)initForRotationDegree:(int)a0 resolution:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned int)a2 algorithmKey:(id)a3;
- (struct __CVBuffer { } *)rotateAndCropImage:(struct __CVBuffer { } *)a0;
- (BOOL)rotateAndCropImage:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;
- (struct __CVBuffer { } *)rotateImage:(struct __CVBuffer { } *)a0;
- (BOOL)rotateImage:(struct __CVBuffer { } *)a0 outputBuffer:(struct __CVBuffer { } *)a1;

@end
