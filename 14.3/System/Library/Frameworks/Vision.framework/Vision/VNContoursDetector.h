@class CIContext;

@interface VNContoursDetector : VNDetector {
    CIContext *_ciContext;
    struct CGColorSpace { } *_colorSpace;
}

+ (id)configurationOptionKeysForDetectorKey;

- (void).cxx_destruct;
- (void)dealloc;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (id)_highContastMonoCIImageFromImageBuffer:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 options:(id)a2 error:(id *)a3;
- (struct StandAloneBitString { } *)_runAutoTraceOnATBitmap:(const struct ATBitmap { struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x0; } x2; } x0; char *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct __CVBuffer *x7; } *)a0 darkOnLight:(BOOL)a1 inHierarchy:(BOOL)a2 error:(id *)a3;
- (struct StandAloneBitString { } *)_runAutoTraceOnImage:(id)a0 darkOnLight:(BOOL)a1 inHierarchy:(BOOL)a2 error:(id *)a3;
- (struct StandAloneBitString { } *)_runAutoTraceOnCVPixelBuffer:(struct __CVBuffer { } *)a0 darkOnLight:(BOOL)a1 inHierarchy:(BOOL)a2 error:(id *)a3;

@end
