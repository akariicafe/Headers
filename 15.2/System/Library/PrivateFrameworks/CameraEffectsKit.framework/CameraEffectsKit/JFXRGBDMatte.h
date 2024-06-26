@class JFXImageScaler, PVComputeGrabCut, JFXPixelRotationSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface JFXRGBDMatte : JFXMatting {
    PVComputeGrabCut *_grabCutModules[2];
    unsigned int _grabCutCounter;
    struct CGSize { double width; double height; } _depthSize;
    struct CGSize { double width; double height; } _depthSizeRotated;
    struct __CVPixelBufferPool { } *_fixedPointDepthPool;
    NSObject<OS_dispatch_queue> *_submissionQ;
    NSObject<OS_dispatch_queue> *_processQ;
    NSObject<OS_dispatch_semaphore> *_processThrottle;
    int _numberOfGaussiansBackgroundGMM;
    int _numberOfGaussiansForegroundGMM;
    int _numberOfIterationsGrabcut;
    int _topOfHeadHalf;
    int _heightOfMattingWin;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _largestFaceRect;
    long long _interfaceOrientation;
    BOOL _isRepeatingFrame;
    int _depthHist[100];
    char *_depthBufferHalf[4];
    char *_depthBufferFull;
    char *_vImageTempBuffer;
    unsigned long long _numFramesWithVeryClosePixels;
    unsigned long long _previousMattingStatus;
    unsigned long long _currentMattingStatus;
    int _minObjectDistance;
    struct __CVPixelBufferPool { } *_scaledSourcePool;
    struct __CVPixelBufferPool { } *_scaledDestinationPool;
    struct __CVPixelBufferPool { } *_processedMattePool;
    struct __CVPixelBufferPool { } *_rotatedMattePool;
    struct __CVBuffer { } *_alphaMatteHistory;
    JFXImageScaler *_imageScaler;
    JFXPixelRotationSession *_matteRotator;
    JFXPixelRotationSession *_colorRotator;
    BOOL _disableMattingMultithreading;
    BOOL _usingFaceRect;
    BOOL _usingforegroundSegBooster;
    BOOL _usingLargerRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLargestFaceRect;
    int _faceRectDepth;
    BOOL _motionDetected;
    BOOL _visualizeFaceRect;
    struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *_depthProcessingData;
    struct ContourMemoryPool { char *x0; char *x1; int *x2; int *x3; } *_contourMemoryPool;
}

+ (BOOL)_defaultMatteGeneratorPrefersDepth;
+ (struct CGSize { double x0; double x1; })mattingDepthInputSize;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initForFrameSet:(id)a0;
- (BOOL)isValidForCameraFrameSet:(id)a0;
- (void)requestMattingStatus;
- (void)alphaMatteForFrameSet:(id)a0 mattingPerfState:(id)a1 completionHandler:(id /* block */)a2;
- (struct __CVBuffer { } *)processAlphaMapUsingDepthAndColor:(struct __CVBuffer { } *)a0 colorBuffer:(struct __CVBuffer { } *)a1;
- (void)getDepthData:(struct __CVBuffer { } *)a0 processData:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a1;
- (void)depthToAlphaMap:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0;
- (struct __CVBuffer { } *)localMattingHalfRGBD:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0 colorBuffer:(struct __CVBuffer { } *)a1;
- (void)findRectOrientationRightLeft:(int *)a0 numContourPixels:(int)a1 winHeight:(int)a2 halfHeight:(int)a3 originY:(int *)a4 sizeHeight:(int *)a5 isRight:(BOOL)a6;
- (char *)localDepthBufferBig;
- (char *)localDepthBufferSmall;
- (char *)localDepthBuffer;
- (void)mattingGrabCut:(char *)a0 depthMap:(char *)a1 colorBuffer:(struct __CVBuffer { } *)a2 processWin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)findLocalMattingRect:(int *)a0 processingData:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a1 mattingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)expansionOfKnownRegionsRGBD:(struct __CVBuffer { } *)a0 processingData:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a1 regionWin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 centerOfRow:(int)a3;
- (void)innerOuterFusion:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0 processWin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)erodeAndDilateMatte:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0;
- (char *)makeTrimap:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0;
- (void)moveLocalDepthBufferToDepthOuter:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0;
- (void)grabCutWithTrimap:(char *)a0 color:(struct __CVBuffer { } *)a1 processWin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (char *)localDepthBufferTemp;
- (void)postProcessing:(const char *)a0 depthDataSmall:(const char *)a1 depthData:(const char *)a2 RGBDMatte:(char *)a3 halfHeight:(int)a4 halfWidth:(int)a5;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })featherMatte:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0;
- (struct __CVBuffer { } *)createInvertedMatte:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (struct __CVBuffer { } *)createTemporalFilteredMatte:(struct __CVBuffer { } *)a0;
- (void)findDepthForFace:(struct DepthProcessingDataRGBD { int *x0; int *x1; int *x2; unsigned long long x3; unsigned long long x4; struct __CVBuffer *x5; char *x6; id x7; unsigned long long x8; unsigned long long x9; char *x10; char *x11; char *x12; int x13; int x14; int x15; } *)a0;

@end
