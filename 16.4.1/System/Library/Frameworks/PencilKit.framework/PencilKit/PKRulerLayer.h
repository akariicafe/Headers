@class PKRulerController, NSString, NSTimer, CALayer, CATextLayer;

@interface PKRulerLayer : CALayer <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSTimer *imageTransformTimer;
@property (nonatomic) double initialDrawingBoundsYOrigin;
@property (nonatomic) BOOL isInlineResizing;
@property (nonatomic) BOOL isExpandedInline;
@property (retain, nonatomic) CALayer *rulerLayer;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } rulerTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } previousRulerTransform;
@property (retain, nonatomic) CALayer *rulerAngleTick;
@property (retain, nonatomic) CATextLayer *rulerAngleText;
@property (retain, nonatomic) CALayer *rulerDistanceHUD;
@property (retain, nonatomic) CATextLayer *rulerDistanceText;
@property (nonatomic) BOOL isRulerDrawingMovingToEndOfRuler;
@property (nonatomic) double currentTValueForSnappedDrawing;
@property (nonatomic) double minTValueForSnappedDrawing;
@property (nonatomic) double maxTValueForSnappedDrawing;
@property (nonatomic) double originTValueForSnappedDrawing;
@property (nonatomic) double rulerZoomStartCenterTValueOnScreen;
@property (nonatomic) double rulerZoomStartScale;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } rulerZoomStartTransform;
@property (nonatomic) BOOL zooming;
@property (weak, nonatomic) PKRulerController *rulerController;
@property (nonatomic) double rulerAlpha;
@property (retain, nonatomic) CALayer *rulerAngleMarker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (long long)currentAngle;
- (double)rulerAlignInset;
- (double)_distanceMarkerFontSize;
- (double)_fontSizeForRulerTextHUD:(id)a0;
- (id)_rulerImage;
- (id)_textForRulerHUD:(double)a0;
- (id)addOpacityAnimationOnLayer:(id)a0 delegate:(id)a1 toOpacity:(double)a2;
- (void)addScaleAndOpacityAnimationOnLayer:(id)a0 delegate:(id)a1 fromScale:(double)a2 toScale:(double)a3 fromAlpha:(double)a4 toAlpha:(double)a5;
- (id)addScaleAnimationOnLayer:(id)a0 delegate:(id)a1 fromScale:(double)a2 toScale:(double)a3;
- (BOOL)compactRuler;
- (struct CGPoint { double x0; double x1; })getRulerCenterLineOriginAndTangent:(struct CGPoint { double x0; double x1; } *)a0;
- (void)hideRulerAngleMarker;
- (void)hideRulerAnimated:(BOOL)a0;
- (id)initWithRulerController:(id)a0;
- (void)removeRulerMarkers;
- (id)rulerDialImage;
- (id)rulerDialLevelImage;
- (double)rulerTickMarkInset;
- (double)rulerWidth;
- (void)setImageTransformFrom:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 toTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 animated:(BOOL)a2 duration:(double)a3;
- (BOOL)shouldUseLargestRulerTextFontSize;
- (void)showRuler;
- (void)updateAngleWithAngleMarkerPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)updateDistanceMarkerWithSpacing:(double)a0;
- (void)updateImageTransform:(id)a0;
- (void)updateRulerAlpha:(double)a0;
- (void)updateRulerMarkerForLocation:(struct CGPoint { double x0; double x1; })a0 firstTouch:(BOOL)a1;
- (void)updateRulerTickMarkImage;
- (long long)userAngle;
- (BOOL)viewPointInRuler:(struct CGPoint { double x0; double x1; })a0;

@end
