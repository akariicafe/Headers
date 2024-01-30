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

- (void)layoutSubviews;
- (id)initWithDelegate:(id)a0;
- (void)stopRunning;
- (void)startRunning;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_changeCameraConfiguration;
- (void)setupCameraSession;
- (void)_handleRuntimeError:(id)a0;

@end
