@class AVCaptureSession, NSString, AVCaptureDeviceInput, AVCaptureVideoPreviewLayer, NSObject;
@protocol OS_dispatch_queue, NPHCellularBridgeBarcodeScannerCaptureDelegate;

@interface NPHCellularBridgeBarcodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
}

@property (readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (readonly, nonatomic) BOOL canUseCamera;
@property (readonly, nonatomic) BOOL isRunning;
@property (nonatomic) id<NPHCellularBridgeBarcodeScannerCaptureDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithDelegate:(id)a0;
- (void)stopRunning;
- (void)startRunning;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)handleRuntimeError:(id)a0;
- (void)_changeCameraConfiguration;
- (void)setupCameraSession;
- (void)autoFocusAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)autoExposeAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
