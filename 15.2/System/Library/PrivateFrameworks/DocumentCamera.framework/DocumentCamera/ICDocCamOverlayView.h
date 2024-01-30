@class NSDate, NSString, NSArray, ICDocCamImageQuad, CAShapeLayer, CAAnimation, CAGradientLayer, NSObject, UILabel, UIColor;
@protocol OS_dispatch_semaphore;

@interface ICDocCamOverlayView : UIView <CAAnimationDelegate> {
    NSObject<OS_dispatch_semaphore> *sem;
}

@property (nonatomic) BOOL rectangleIsActive;
@property (retain, nonatomic) CAShapeLayer *llShapeLayer;
@property (retain, nonatomic) CAShapeLayer *lrShapeLayer;
@property (retain, nonatomic) CAShapeLayer *ulShapeLayer;
@property (retain, nonatomic) CAShapeLayer *urShapeLayer;
@property (retain, nonatomic) CAShapeLayer *rectangleShapeLayer;
@property unsigned long long numberOfMissedFrames;
@property (retain, nonatomic) UILabel *displayStringLabel;
@property (retain, nonatomic) CAShapeLayer *rectangleGridLayer;
@property (retain, nonatomic) NSDate *dateToStartGridAnimation;
@property (retain, nonatomic) CAAnimation *gridAnimation;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewBounds;
@property (retain) NSArray *debugRects;
@property (retain) NSString *displayString;
@property (retain) ICDocCamImageQuad *documentQuad;
@property BOOL showGridAnimation;
@property (retain) UIColor *rectColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateShapeLayers;
- (void)clearRectangles;
- (void)stopGridAnimation;
- (void)setupShapeLayersIfNeeded;
- (id)calculateCurrentRectangleFromDocumentQuad:(id)a0;
- (void)updateRectangleLayerFromRect:(id)a0;
- (void)updateGridLayerFromRect:(id)a0;
- (void)startGridAnimationFromRect:(id)a0;
- (struct CGPath { } *)newPathFromRect:(id)a0;
- (id)extrudedRectFromRect:(id)a0;
- (id)tintColorWithAlpha:(double)a0;
- (struct CGPath { } *)newGridPathFromRect:(id)a0;
- (void)setupRectangleLayer;
- (void)setupGridLayers;
- (double)crossProduct:(struct CGPoint { double x0; double x1; })a0 v2:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForContentInView;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })calculateRotationTransformForPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;

@end
