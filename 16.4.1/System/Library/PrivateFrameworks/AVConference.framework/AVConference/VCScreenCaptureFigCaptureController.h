@class NSString, FigScreenCaptureController, NSObject;
@protocol VCScreenCaptureSourceDelegate;

@interface VCScreenCaptureFigCaptureController : VCObject <FigScreenCaptureFrameHandlerDelegate, VCScreenCaptureSource> {
    NSObject<VCScreenCaptureSourceDelegate> *_delegate;
    FigScreenCaptureController *_captureControllerSession;
    BOOL _shouldClearScreen;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateMutex;
    BOOL _isRunning;
    struct _VCScreenCaptureSourceContext { void *sinkContext; void /* function */ *sinkCallback; } _frameCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsRunning:(BOOL)a0;
- (void)finalize;
- (void)dealloc;
- (void)screenCaptureController:(id)a0 didFailWithStatus:(int)a1;
- (void)screenCaptureController:(id)a0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 transformFlags:(unsigned long long)a2;
- (void)screenCaptureControllerDidReceiveClearScreen:(id)a0;
- (void)screenCaptureControllerMediaServicesWereReset:(id)a0;
- (void)callbackWithEventString:(id)a0;
- (id)initWithDelegate:(id)a0 screenCaptureSourceContext:(const struct _VCScreenCaptureSourceContext { void *x0; void /* function */ *x1; } *)a1;
- (int)pauseScreenCapture:(BOOL)a0;
- (void)screenCaptureControllerWasPreempted:(id)a0;
- (void)shouldClearScreen:(BOOL)a0;
- (int)startScreenCaptureWithConfig:(id)a0;
- (int)stopScreenCapture;

@end
