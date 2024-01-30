@class AVCaptureSession, NSString, UIView, AVCaptureVideoPreviewLayer;
@protocol SFPasswordOtpauthQRCodeScannerViewControllerDelegate;

@interface SFPasswordOtpauthQRCodeScannerViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIView *_viewfinderView;
}

@property (weak, nonatomic) id<SFPasswordOtpauthQRCodeScannerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_dismiss:(id)a0;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)_configureCaptureSession;

@end
