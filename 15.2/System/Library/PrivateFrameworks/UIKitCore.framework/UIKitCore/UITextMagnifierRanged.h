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

- (int)horizontalMovementAtTime:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)wasPlacedCarefullyAtTime:(double)a0;
- (int)horizontalMovement;
- (struct CGPoint { double x0; double x1; })clipPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)stopMagnifying:(BOOL)a0;
- (id)initWithFrame;
- (void)beginMagnifyingTarget:(id)a0 text:(id)a1 magnificationPoint:(struct CGPoint { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3 animated:(BOOL)a4;
- (void)setMagnificationPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)zoomUpAnimation;
- (void)updateFrameAndOffset;
- (struct CGPoint { double x0; double x1; })adjustMagnificationPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)zoomDownAnimation;
- (BOOL)terminalPointPlacedCarefully;
- (double)offsetFromMagnificationPoint;

@end
