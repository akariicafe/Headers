@interface UITextMagnifierCaret : UITextMagnifier {
    double _yOffset;
}

@property (nonatomic) struct CGPoint { double x; double y; } offset;

+ (Class)renderClass;
+ (id)activeCaretMagnifier;
+ (id)sharedCaretMagnifier;

- (void)remove;
- (BOOL)isHorizontal;
- (struct CGPoint { double x0; double x1; })animationPoint;
- (id)initWithFrame;
- (void)beginMagnifyingTarget:(id)a0 text:(id)a1 magnificationPoint:(struct CGPoint { double x0; double x1; })a2 offset:(struct CGPoint { double x0; double x1; })a3 animated:(BOOL)a4;
- (void)zoomUpAnimation;
- (void)updateFrameAndOffset;
- (void)zoomDownAnimation;
- (BOOL)terminalPointPlacedCarefully;
- (double)offsetFromMagnificationPoint;
- (void)setAnimationPoint:(struct CGPoint { double x0; double x1; })a0;

@end
