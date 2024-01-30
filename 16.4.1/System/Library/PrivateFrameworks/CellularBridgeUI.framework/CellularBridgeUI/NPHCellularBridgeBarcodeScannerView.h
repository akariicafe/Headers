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

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)startRunning;
- (void)stopRunning;
- (void)setupCameraSession;
- (void)_changeCameraConfiguration;
- (void)autoExposeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)autoFocusAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)handleRuntimeError:(id)a0;

@end
