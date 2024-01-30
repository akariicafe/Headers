@class CAShapeLayer, NSString, AXPIFingerLayer;
@protocol AXPIFingerAppearanceDelegate;

@interface AXPIFingerView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) AXPIFingerLayer *cursorLayer;
@property (retain, nonatomic) CAShapeLayer *outerStrokeTrackLayer;
@property (retain, nonatomic) CAShapeLayer *outerStrokeLayer;
@property (retain, nonatomic) CAShapeLayer *innerStrokeLayer;
@property (weak, nonatomic) id<AXPIFingerAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (copy, nonatomic) id /* block */ lastProgressCompletionBlock;
@property (nonatomic, getter=isPressed) BOOL pressed;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) double force;
@property (nonatomic) unsigned long long shape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layerClass;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)isUserInteractionEnabled;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)backdropLayer;
- (BOOL)accessibilityIgnoresInvertColors;
- (void).cxx_destruct;
- (void)dealloc;
- (void)animateToTapWithDuration:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 appearanceDelegate:(id)a1;
- (void)_setPathForCurrentShape;
- (void)cancelExisingCircularProgressAnimation;
- (id)_createProgressLayerWithDuration:(double)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_iconScaleForForce:(double)a0;
- (id)filterLayer;
- (void)animateCircularProgressWithDuration:(double)a0 completion:(id /* block */)a1;

@end
