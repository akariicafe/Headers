@class NSMutableDictionary, CIContext;

@interface CIRectangleDetector : CIDetector {
    double _width;
    double _height;
    NSMutableDictionary *featureOptions;
    struct OpaqueVTPixelTransferSession { } *pixelTransferSession;
    struct __CVBuffer { } *interimScaleBuffer;
    struct __CVBuffer { } *scaleBuffer;
    struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *CVMLFuncs;
    float *_perMeshPtr;
    struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *_internalBuffer;
}

@property (retain, nonatomic) CIContext *context;

- (void)releaseResources;
- (void)dealloc;
- (void)finalize;
- (id)featuresInImage:(id)a0 options:(id)a1;
- (id)initWithContext:(id)a0 options:(id)a1;
- (id)featuresInImage:(id)a0;

@end
