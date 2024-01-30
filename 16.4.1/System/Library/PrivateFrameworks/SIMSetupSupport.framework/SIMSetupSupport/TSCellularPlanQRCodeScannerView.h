@class AVCaptureSession, NSString, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer, NSObject;
@protocol AVCaptureMetadataOutputObjectsDelegate, OS_dispatch_queue;

@interface TSCellularPlanQRCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
}

@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) BOOL canUseCamera;
@property (nonatomic) id<AVCaptureMetadataOutputObjectsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)startRunning;
- (void)stopRunning;
- (void)setupCameraSession;
- (void)_changeCameraConfiguration;
- (void)_handleRuntimeError:(id)a0;
- (id)getAVCaptureMetadataOutput;
- (void)updateRectOfInterest;

@end
