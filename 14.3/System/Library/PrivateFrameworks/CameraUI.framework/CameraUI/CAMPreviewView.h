@class AVCaptureVideoPreviewLayer, CAMLevelIndicatorView, CAMVideoPreviewView, CAMSubjectIndicatorView, CAMFocusIndicatorView, CAMStageLightOverlayView, CAMInterfaceModulationView, CAMGridView, UILabel;

@interface CAMPreviewView : UIView

@property (readonly, nonatomic) UILabel *_simulatorLabel;
@property (nonatomic) int _exposureBiasSide;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewportFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overlayFrame;
@property (readonly, nonatomic) CAMVideoPreviewView *videoPreviewView;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (readonly, nonatomic) CAMInterfaceModulationView *indicatorContainerView;
@property (nonatomic) long long indicatorClippingStyle;
@property (retain, nonatomic) CAMFocusIndicatorView *continuousIndicator;
@property (retain, nonatomic) CAMFocusIndicatorView *pointIndicator;
@property (nonatomic) CAMGridView *gridView;
@property (nonatomic) CAMLevelIndicatorView *levelView;
@property (retain, nonatomic) CAMSubjectIndicatorView *centeredSubjectIndicatorView;
@property (retain, nonatomic) CAMStageLightOverlayView *stageLightOverlayView;
@property (nonatomic) double bottomContentInset;

+ (Class)layerClass;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)indicatePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fixedSizeSubjectIndicatorFrameForBodyResult:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceIndicatorFrameForFaceResult:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })mrcIndicatorFrameForMRCResult:(id)a0;
- (int)_faceOrientationForRollAngle:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fixedSizeSubjectIndicatorFrameForFaceResult:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_aspectFaceRectFromSquareFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 angle:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bodyIndicatorFrameForResult:(id)a0;

@end
