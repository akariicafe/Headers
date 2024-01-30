@class CIImage, VNImageBuffer, ParabolaDetetction, CIFilter, VNDetectContoursRequest, CIContext;

@interface VNTrajectoryProcessor : NSObject {
    CIContext *_ciContext;
    CIFilter *_absoluteDiffFilter;
    CIFilter *_thresholdFilter;
    CIFilter *_dilateFilter;
    CIFilter *_contrastFilter;
    VNDetectContoursRequest *_detectContoursRequest;
    VNImageBuffer *_previousFrameBuffer;
    CIImage *_previousFrameImage;
    unsigned long long _maximumImageDimension;
    float _preScaleFactor;
    float _dilateRadius;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _frameAnalysisSpacing;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAnalyzedFramePTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _nextFrameToBeAnalyzedPTS;
    BOOL _processAllFrames;
    struct CGColorSpace { } *_sRGB;
    ParabolaDetetction *_parabolaDetector;
    unsigned long long _currentImageWidth;
    unsigned long long _currentImageHeight;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrameAnalysisSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trajectoryLength:(long long)a1;
- (struct __CVBuffer { } *)_createCroppedAndScaledBufferFromVNImageBuffer:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withOptions:(id)a2 error:(id *)a3;
- (id)_VNPointsFromCGPoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint *x0; struct CGPoint *x1; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint *x0; } x2; } *)a0;
- (id)processVNImageBuffer:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withOptions:(id)a2 warningRecorder:(id)a3 requestUUID:(id)a4 error:(id *)a5;

@end
