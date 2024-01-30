@class NSString, NSMutableDictionary;

@interface VCScreenCapture : VCVideoCapture <VCVideoSource> {
    id _weakCapture;
    NSMutableDictionary *_options;
    struct OpaqueFigVirtualDisplaySession { } *_session;
    struct OpaqueVTImageRotationSession { } *_rotationSession;
    struct __CVPixelBufferPool { } *_rotationBufferPool;
    struct __CVPixelBufferPool { } *_resizeBufferPool;
    struct OpaqueVTPixelTransferSession { } *_resizeTransferSession;
    BOOL _shouldResizeInitialized;
    BOOL _shouldResize;
    BOOL _forceMirroring;
    BOOL _enableClearScreen;
    int _resolutionScaling;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _screenCaptureLock;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_clearScreenProc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _clearScreenLock;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _clearScreenChanged;
    BOOL _shouldClearScreen;
    struct opaqueCMSampleBuffer { } *_blackFrame;
    struct opaqueCMSampleBuffer { } *_previousCompleteFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousCompleteFrameSourceRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousCompleteFrameDestinationRect;
    unsigned int _previousCompleteFrameTransform;
    BOOL _isPreviousCompleteFrameBlack;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousFrameTime;
    BOOL _shouldValidateFrameTimingAfterIdle;
    BOOL _isPreviewing;
    BOOL _isCapturing;
    BOOL _capturePaused;
    int _captureWidth;
    int _captureHeight;
    int _captureFramerate;
    int _frameCount;
    BOOL _enableIdleFrameTimeAdjustments;
    BOOL _receivedFirstFrame;
    unsigned int _currentTransform;
}

@property (readonly) BOOL isClearScreenThreadRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)startPreview;
- (int)stop:(BOOL)a0;
- (int)setFrameRate:(int)a0;
- (int)startCaptureWithWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (void)setPauseCapture:(BOOL)a0;
- (void)dealloc;
- (BOOL)isPreviewRunning;
- (void)capturedScreen:(struct opaqueCMSampleBuffer { } *)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 desRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transform:(unsigned int)a3 isIdleBlackFrame:(BOOL)a4;
- (double)shiftSampleBufferPresentationTime:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 timeOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)validateFrameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 interArrivalTime:(double)a1 isIdle:(struct __CFBoolean { } *)a2 shouldDropFrame:(BOOL *)a3 shouldAddSignpost:(BOOL *)a4;
- (int)performIdleTimeAdjustments:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 isIdle:(struct __CFBoolean { } *)a2 shouldDropFrame:(BOOL *)a3 shouldAddSignpost:(BOOL *)a4;
- (void)startClearScreenProc;
- (void)callbackWithEventString:(id)a0;
- (void)stopClearScreenProc;
- (int)_startCapture;
- (int)setWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)copyColorInfo:(const struct __CFDictionary **)a0;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a0;
- (int)getFrameRate;
- (BOOL)isFrontCamera;
- (int)frameCount:(BOOL)a0;
- (int)frameBecameAvailableCount:(int *)a0 figBufferQueueEmptyCount:(int *)a1 figBufferQueueErrorCount:(int *)a2;
- (BOOL)cameraSupportsFormatWidth:(int)a0 height:(int)a1;
- (int)startScreenCapture;
- (int)stopScreenCapture;
- (void)shouldClearScreen:(BOOL)a0;
- (void)processAndSendIdleBlackFrame;
- (id)initWithCaptureServer:(id)a0 sourceConfig:(id)a1;

@end
