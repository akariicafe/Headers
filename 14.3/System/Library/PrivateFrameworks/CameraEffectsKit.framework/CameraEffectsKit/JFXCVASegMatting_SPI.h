@class JFXGuidedUpscaler, JFXImageScaler, JFXGuidedFilter, NSObject;
@protocol OS_dispatch_queue;

@interface JFXCVASegMatting_SPI : JFXMatting {
    NSObject<OS_dispatch_queue> *_matteGenQ;
    struct CVASegmentation { } *_segmenter;
    struct __CVPixelBufferPool { } *_alphaMattePool;
    struct __CVPixelBufferPool { } *_tinyAlphaMattePool;
    struct __CVPixelBufferPool { } *_smallAlphaMattePool;
    struct __CVPixelBufferPool { } *_smallForegroundColorPool;
    struct __CVPixelBufferPool { } *_rotMattePool;
    struct __CVPixelBufferPool { } *_flipColorPool;
    struct __CVPixelBufferPool { } *_rotColorPool;
    struct __CVBuffer { } *_foregroundColorEstimateBuffer;
    struct __CVBuffer { } *_segmentationBuffer;
    int _cameraType;
    JFXGuidedUpscaler *_calmFilter;
    JFXGuidedFilter *_guidedFilter;
    JFXImageScaler *_imageScaler;
    int _mode;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _largestFaceRect;
    long long _interfaceOrientation;
    unsigned long long _previousMattingStatus;
    unsigned long long _currentMattingStatus;
    BOOL _visualizeFaceRect;
}

+ (id)segmentationOptionsForDepth:(struct __CVBuffer { } *)a0 rotColor:(struct __CVBuffer { } *)a1 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 cameraType:(int)a3;
+ (BOOL)_defaultMatteGeneratorPrefersDepth;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initForFrameSet:(id)a0;
- (struct __CVBuffer { } *)invertImageAndApplyGarbageMatteForPortraitOrientation:(struct __CVBuffer { } *)a0 garbageMatte:(struct __CVBuffer { } *)a1 erodedMatte:(struct __CVBuffer { } *)a2;
- (struct __CVBuffer { } *)invertImageAndApplyGarbageMatteForPortraitUpsideDownOrientation:(struct __CVBuffer { } *)a0 garbageMatte:(struct __CVBuffer { } *)a1 erodedMatte:(struct __CVBuffer { } *)a2;
- (struct __CVBuffer { } *)invertImageAndApplyGarbageMatteForLandscapeOrientation:(struct __CVBuffer { } *)a0 garbageMatte:(struct __CVBuffer { } *)a1 erodedMatte:(struct __CVBuffer { } *)a2;
- (int)depthThresholdForDepthMap:(struct __CVBuffer { } *)a0 processData:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a1 largestFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 interfaceOrientation:(long long)a3;
- (struct __CVBuffer { } *)dilateImage:(struct __CVBuffer { } *)a0 toImage:(struct __CVBuffer { } *)a1 kernelSize:(unsigned long long)a2;
- (void)erodeImage:(struct __CVBuffer { } *)a0 toImage:(struct __CVBuffer { } *)a1 kernelSize:(unsigned long long)a2;
- (void)combineInnerAndOuterMattes:(struct __CVBuffer { } *)a0 dilatedOuterMatte:(struct __CVBuffer { } *)a1;
- (int)getFaceDepth:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0 largestFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct __CVBuffer { } *)garbageMatteForFrameSet:(id)a0 matte:(struct __CVBuffer { } *)a1 erodedMatteOut:(struct __CVBuffer { } *)a2;
- (struct __CVBuffer { } *)invertImageAndApplyGarbageMatte:(struct __CVBuffer { } *)a0 garbageMatte:(struct __CVBuffer { } *)a1 erodedMatte:(struct __CVBuffer { } *)a2;
- (struct __CVBuffer { } *)invertImage:(struct __CVBuffer { } *)a0;
- (BOOL)isValidForCameraFrameSet:(id)a0;
- (struct __CVBuffer { } *)largeColorImageWithSmallForegroundEstimate:(struct __CVBuffer { } *)a0 rawAlpha:(struct __CVBuffer { } *)a1 color:(struct __CVBuffer { } *)a2;
- (void)requestMattingStatus;
- (void)alphaMatteForFrameSet:(id)a0 mattingPerfState:(id)a1 completionHandler:(id /* block */)a2;

@end
