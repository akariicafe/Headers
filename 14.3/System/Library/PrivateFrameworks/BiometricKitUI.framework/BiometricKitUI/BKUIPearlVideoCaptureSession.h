@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue, BKUIVideoCaptureSesssionDelegate;

@interface BKUIPearlVideoCaptureSession : NSObject {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    unsigned long long _captureSessionRestarts;
    BOOL _captureSessionInterrupted;
    NSObject<OS_dispatch_queue> *_captureQueue;
}

@property (weak, nonatomic) id<BKUIVideoCaptureSesssionDelegate> delegate;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) double additionalPreviewScalingAllowedByCameraFormat;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_frontCamera;
- (void)startCapture;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)endCapture;
- (void)_captureSessionStarted:(id)a0;
- (void)_captureSessionStopped:(id)a0;
- (void)_captureSessionInterrupted:(id)a0;
- (BOOL)_synchronizedCaptureSessionInterrupted;

@end
