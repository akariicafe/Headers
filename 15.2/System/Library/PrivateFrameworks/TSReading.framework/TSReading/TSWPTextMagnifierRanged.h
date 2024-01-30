@class TSWPRep, NSString, TSWPTextMagnifierTimeWeightedPoint, TSWPTextMagnifierRenderer;

@interface TSWPTextMagnifierRanged : UIView <TSWPTextMagnifier, TSWPTextMagnifierRendererDelegate> {
    struct CGPoint { double x; double y; } _magnificationPoint;
    TSWPTextMagnifierTimeWeightedPoint *_weightedPoint;
    TSWPTextMagnifierRenderer *_magnifierRenderer;
    BOOL _inPlace;
}

@property (retain, nonatomic) TSWPRep *target;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } terminalPoint;
@property (readonly, nonatomic) BOOL terminalPointPlacedCarefully;
@property (nonatomic) struct CGPoint { double x0; double x1; } magnificationPoint;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) struct CGPoint { double x; double y; } animationPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *underlayImageName;
@property (readonly, nonatomic) NSString *overlayImageName;
@property (readonly, nonatomic) NSString *maskImageName;

- (double)horizontalMovementAtTime:(double)a0;
- (BOOL)wasPlacedCarefullyAtTime:(double)a0;
- (double)horizontalMovement;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)stopMagnifying:(BOOL)a0;
- (double)currentOffset;
- (void)postAutoscrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setAutoscrollDirections:(int)a0;
- (void)autoscrollWillNotStart;
- (void)updateFrame;
- (void)beginMagnifyingTarget:(id)a0 magnificationPoint:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGPoint { double x0; double x1; })a2 animated:(BOOL)a3;
- (void)canvasNeedsDisplay;
- (void)drawMagnifierClippedCanvasLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)shouldHideCanvasLayer;

@end
