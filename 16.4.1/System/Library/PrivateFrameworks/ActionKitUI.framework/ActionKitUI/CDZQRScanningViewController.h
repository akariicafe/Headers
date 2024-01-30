@class AVCaptureSession, UIButton, NSString, NSArray, UILabel, AVCaptureVideoPreviewLayer, AVCaptureDevice;

@interface CDZQRScanningViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>

@property (retain, nonatomic) AVCaptureSession *avSession;
@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) UIButton *torchButton;
@property (weak, nonatomic) UILabel *cameraUnavailableLabel;
@property (copy, nonatomic) NSString *lastCapturedString;
@property (retain, nonatomic) NSArray *metadataObjectTypes;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionWasInterrupted:(id)a0;
- (void)sessionInterruptionEnded:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)sessionRuntimeError:(id)a0;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)turnTorchOff;
- (void)turnTorchOn;
- (void)handleFocusTap:(id)a0;
- (void)cancelItemSelected:(id)a0;
- (id)initWithMetadataObjectTypes:(id)a0;
- (void)toggleTorch:(id)a0;

@end
