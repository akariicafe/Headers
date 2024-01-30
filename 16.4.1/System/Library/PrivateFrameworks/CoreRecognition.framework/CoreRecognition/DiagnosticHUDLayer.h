@class CAShapeLayer, CALayer, NSMutableArray, CRColor;

@interface DiagnosticHUDLayer : CALayer

@property (retain) CALayer *previewLayer;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewLayerVisibleRect;
@property struct CGSize { double width; double height; } cameraResolution;
@property (retain) CRColor *freshPointColor;
@property (retain) CRColor *stalePointColor;
@property (retain) NSMutableArray *pointLayers;
@property (retain) CAShapeLayer *cameraAreaLayer;
@property (retain) CAShapeLayer *focusIndicatorLayer;
@property (retain) CAShapeLayer *focusPointLayer;
@property (retain) CAShapeLayer *frameIndicator;

+ (id)layer;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)refreshFrameIndicator;
- (void)setAdjustingFocus:(BOOL)a0 pointOfInterestSupported:(BOOL)a1 focusPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)setBoxPoints:(id)a0;
- (void)setPreviewLayer:(id)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cameraResolution:(struct CGSize { double x0; double x1; })a2;

@end
