@interface UITextMagnifierRanged : UITextMagnifier {
    double _touchOffsetFromMagnificationPoint;
    double _magnifierOffsetFromTouch;
    BOOL _isAnimating;
    long long _delayedAnimationType;
    struct CGPoint { double x; double y; } _delayedAnimationPoint;
}

@property (nonatomic) BOOL isHorizontal;

+ (id)sharedRangedMagnifier;
+ (Class)renderClass;
+ (id)activeRangedMagnifier;

- (struct CGPoint { double x0; double x1; })clipPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)stopMagnifying:(BOOL)a0;
- (void)beginMagnifyingTarget:(id)a0 text:(id)a1 magnificationPoint:(struct CGPoint { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3 animated:(BOOL)a4;
- (void)setMagnificationPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)zoomDownAnimation;
- (struct CGPoint { double x0; double x1; })adjustMagnificationPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateFrameAndOffset;
- (void)zoomUpAnimation;
- (BOOL)terminalPointPlacedCarefully;
- (id)initWithFrame;
- (double)offsetFromMagnificationPoint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (int)horizontalMovementAtTime:(double)a0;
- (BOOL)wasPlacedCarefullyAtTime:(double)a0;
- (int)horizontalMovement;

@end
