@interface ABPKVisualizer : NSObject {
    struct __CVPixelBufferPool { } *_pixelBufferPoolBGRA;
    struct __CVPixelBufferPool { } *_pixelBufferPoolYUV;
    void /* unknown type, empty encoding */ _highConfidenceColor;
    void /* unknown type, empty encoding */ _mediumConfidenceColor;
    void /* unknown type, empty encoding */ _lowConfidenceColor;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
}

+ (void)_drawRectOfSize:(int)a0 posx:(int)a1 posy:(int)a2 pImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a3 red:(unsigned char)a4 green:(unsigned char)a5 blue:(unsigned char)a6;

- (void)dealloc;
- (id)init;
- (int)drawFaceBbox:(SEL)a0 detectedBodies2d:(struct __CVBuffer { } *)a1 confidences:(id)a2 skeletonDefinition:(id)a3 overlayImage:(id)a4 color:(struct __CVBuffer { } *)a5;
- (void)drawFaceBboxEdgewithJoints:(id)a0 withSkeletonDefinition:(SEL)a1 fromPostion:(id)a2 toPosition:(id)a3 OnImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a4 color:(void /* unknown type, empty encoding */)a5;
- (int)generateStickFigureImageFrom:(SEL)a0 detectedBodies2d:(struct __CVBuffer { } *)a1 confidences:(id)a2 skeletonDefinition:(id)a3 overlayImage:(id)a4 color:(struct __CVBuffer { } *)a5 faceOnly:(BOOL)a6;
- (BOOL)jointInImageDimensions:(SEL)a0 imageDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)overlayJoints:(SEL)a0 withSkeletonDefinition:(id)a1 confidences:(id)a2 OnImage:(id)a3 color:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a4 faceOnly:(BOOL)a5;

@end
