@class NSArray, AVCaptureInputInternal;

@interface AVCaptureInput : NSObject {
    AVCaptureInputInternal *_inputInternal;
}

@property (readonly, nonatomic) NSArray *ports;

+ (void)initialize;

- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setSession:(id)a0;
- (struct OpaqueCMClock { } *)clock;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)session;
- (void)dealloc;
- (id)videoDevice;
- (id)initSubclass;

@end
