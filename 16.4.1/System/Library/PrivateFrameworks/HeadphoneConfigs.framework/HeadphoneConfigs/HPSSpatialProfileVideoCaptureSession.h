@class AVCaptureSession, NSString, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue, BKUIVideoCaptureSesssionDelegate;

@interface HPSSpatialProfileVideoCaptureSession : NSObject <BKUIPearlVideoCaptureSessionType> {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_captureQueue;
}

@property (weak, nonatomic) id<BKUIVideoCaptureSesssionDelegate> delegate;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) double additionalPreviewScalingAllowedByCameraFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)startCapture;
- (void)endCapture;
- (id)_frontCamera;

@end
