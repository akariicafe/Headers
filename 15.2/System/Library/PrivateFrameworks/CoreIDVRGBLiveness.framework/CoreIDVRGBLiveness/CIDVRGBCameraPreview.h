@class CALayer, CAShapeLayer;
@protocol CIDVRGBAVSessionManager;

@interface CIDVRGBCameraPreview : UIView {
    id<CIDVRGBAVSessionManager> _sessionManager;
    CAShapeLayer *_regionOfInterestLayer;
    CALayer *_objectLayer;
}

@property (retain, nonatomic) CAShapeLayer *debugLayer;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } metadataRegionOfInterest;

+ (Class)layerClass;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setSessionManager:(id)a0;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOfInterest;
- (void)processFrame:(id)a0;
- (id)previewLayer;
- (void)flashRegionOfInterest;
- (void)_alignVideoFeedToCurrentOrientation;
- (void)_alignRegionOfInterest;
- (void)_drawRegionOfInterest;
- (void)showDetectedObjectBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)debugLayer;
- (void)_drawLandmarks:(id)a0 obtainedFromFaceWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_convertPoints:(id)a0 fromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_drawLandmarkRegionWithPoints:(id)a0;
- (void)setDebugLayer:(id)a0;
- (void)_processLandmarksInFrame:(id)a0;

@end
