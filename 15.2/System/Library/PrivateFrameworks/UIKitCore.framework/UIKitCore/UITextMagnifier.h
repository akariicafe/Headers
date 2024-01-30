@class UIResponder, UITextMagnifierTimeWeightedPoint, UIView;
@protocol UITextInput;

@interface UITextMagnifier : UIView {
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
    BOOL _isAnimating;
    long long _delayedAnimationType;
}

@property (retain, nonatomic) UIView *target;
@property (retain, nonatomic) UIResponder<UITextInput> *text;
@property (nonatomic) struct CGPoint { double x; double y; } magnificationPoint;
@property (nonatomic) struct CGPoint { double x; double y; } animationPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } terminalPoint;
@property (readonly, nonatomic) BOOL terminalPointPlacedCarefully;
@property (readonly, nonatomic) BOOL isHorizontal;
@property (readonly, nonatomic) double offsetFromMagnificationPoint;

+ (Class)renderClass;

- (void)remove;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setNeedsDisplay;
- (void)stopMagnifying:(BOOL)a0;
- (void)beginMagnifyingTarget:(id)a0 text:(id)a1 magnificationPoint:(struct CGPoint { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3 animated:(BOOL)a4;
- (void)zoomUpAnimation;
- (void)updateFrameAndOffset;
- (struct CGPoint { double x0; double x1; })adjustMagnificationPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setToMagnifierRenderer;
- (void)animateToMagnifierRenderer;
- (void)animateToAutoscrollRenderer;
- (void)zoomDownAnimation;
- (void)detectLostTouches:(id)a0;
- (void)windowWillRotate:(id)a0;
- (void)postAutoscrollPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setAutoscrollDirections:(int)a0;
- (void)autoscrollWillNotStart;
- (void)beginZoomUpAnimation:(id /* block */)a0 withDuration:(double)a1;
- (void)beginZoomDownAnimation:(id /* block */)a0 withDuration:(double)a1 postponeHandler:(id /* block */)a2;

@end
