@class CATransformLayer, CAShapeLayer, JFXOverlayEffectDebugViewOptions, CALayer, UIView;
@protocol JFXOverlayEffectDebugViewDelegate;

@interface JFXOverlayEffectDebugView : UIView

@property (retain, nonatomic) UIView *rootContainerView;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) CATransformLayer *rootTransformLayer;
@property (retain, nonatomic) CAShapeLayer *documentBoundingBoxLayer;
@property (retain, nonatomic) CAShapeLayer *outputROILayer;
@property (retain, nonatomic) CAShapeLayer *objectAlignedBoundingBoxLayer;
@property (retain, nonatomic) CALayer *textBoundingBoxesContainerLayer;
@property (retain, nonatomic) CAShapeLayer *hitAreaBoundingBoxLayer;
@property (retain, nonatomic) CAShapeLayer *hitAreaMinimumSizeBoundingBoxLayer;
@property (retain, nonatomic) CAShapeLayer *midpointLayer;
@property (retain, nonatomic) CAShapeLayer *cornerPointsLayer;
@property (retain, nonatomic) CALayer *textCornerPointsContainerLayer;
@property (retain, nonatomic) CAShapeLayer *hitAreaPointsLayer;
@property (retain, nonatomic) CAShapeLayer *additionalRectsLayer;
@property (retain, nonatomic) CAShapeLayer *additionalRectsTransformedLayer;
@property (retain, nonatomic) JFXOverlayEffectDebugViewOptions *options;
@property (weak, nonatomic) id<JFXOverlayEffectDebugViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setupViews;
- (void)updateWithEffectFrame:(id)a0;
- (void)updateDottedBorderedLayer:(id)a0 borderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 borderWidth:(double)a2 borderColor:(id)a3 borderPhase:(double)a4 borderDashPattern:(id)a5;
- (void)updateBorderedLayer:(id)a0 borderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 borderWidth:(double)a2 borderColor:(id)a3;
- (void)updatePolygonLayer:(id)a0 points:(id)a1 borderWidth:(double)a2 borderColor:(id)a3;
- (void)updateFilledPolygonLayer:(id)a0 path:(struct CGPath { } *)a1 fillColor:(id)a2;
- (void)updatePointsLayers:(id)a0 points:(id)a1 colors:(id)a2 size:(double)a3;
- (id)additionalRectsToDraw;
- (void)updateAdditionalRects:(id)a0 transformedLayer:(id)a1 effectScale:(double)a2 rects:(id)a3;

@end
