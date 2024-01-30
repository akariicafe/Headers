@class AVCaptureSession, AVCaptureMetadataOutput, NSString, CALayer, AVCaptureVideoPreviewLayer;
@protocol CDPUIInheritanceAccessCodeScannerViewDelegate;

@interface CDPUIInheritanceAccessCodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate>

@property (retain, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer;
@property (retain, nonatomic) CALayer *spotlightLayer;
@property (retain, nonatomic) AVCaptureMetadataOutput *metadataOutput;
@property (nonatomic) struct CGSize { double width; double height; } lastKnownDimensions;
@property (weak, nonatomic) id<CDPUIInheritanceAccessCodeScannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_bezierRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_circleRectForCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_setupLivePreview;
- (void)_setupPreviewIfNeeded;
- (id)_spotOverlayLayerWithBezierRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 CircleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
