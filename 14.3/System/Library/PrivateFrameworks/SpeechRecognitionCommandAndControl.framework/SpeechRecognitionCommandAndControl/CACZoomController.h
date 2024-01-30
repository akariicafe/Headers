@class CACZWLensChromeView, CABackdropLayer, CAReplicatorLayer, UIView;

@interface CACZoomController : UIViewController

@property (retain, nonatomic) CABackdropLayer *screenBackdropLayer;
@property (retain, nonatomic) CABackdropLayer *zoomedRegionBackdropLayer;
@property (retain, nonatomic) CAReplicatorLayer *dockedReplicatorLayer;
@property (nonatomic) double zoomFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomedRegionFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dockedLensFrame;
@property (retain, nonatomic) CACZWLensChromeView *lensChromeView;
@property (weak, nonatomic) UIView *containingView;

+ (id)sharedController;

- (void)show;
- (void).cxx_destruct;
- (void)loadView;
- (void)hide;
- (BOOL)_canShowWhileLocked;
- (id)initWithZoomFactor:(double)a0;
- (id)initWithContainingView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bestDockFromZoomRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)moveZoomRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_prescaledSizeForFinalSize:(struct CGSize { double x0; double x1; })a0 withScaleFactor:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectiveRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(struct CGPoint { double x0; double x1; })a1 scaleFactor:(double)a2;
- (void)layerize:(id)a0 color:(id)a1;
- (void)printLayers;

@end
