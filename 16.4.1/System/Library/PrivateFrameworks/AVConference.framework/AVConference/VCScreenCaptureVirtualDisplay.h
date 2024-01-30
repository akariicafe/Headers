@class NSString, NSObject;
@protocol VCScreenCaptureSourceDelegate;

@interface VCScreenCaptureVirtualDisplay : VCObject <VCScreenCaptureSource> {
    NSObject<VCScreenCaptureSourceDelegate> *_delegate;
    struct OpaqueFigVirtualDisplaySession { } *_session;
    struct _VCScreenCaptureSourceContext { void *sinkContext; void /* function */ *sinkCallback; } _frameCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finalize;
- (void)dealloc;
- (void)callbackWithEventString:(id)a0;
- (id)initWithDelegate:(id)a0 screenCaptureSourceContext:(const struct _VCScreenCaptureSourceContext { void *x0; void /* function */ *x1; } *)a1;
- (int)pauseScreenCapture:(BOOL)a0;
- (int)setupCaptureSession:(id)a0;
- (void)shouldClearScreen:(BOOL)a0;
- (int)startScreenCaptureWithConfig:(id)a0;
- (int)stopScreenCapture;

@end
