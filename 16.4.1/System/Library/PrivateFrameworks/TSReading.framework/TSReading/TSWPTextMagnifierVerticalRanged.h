@interface TSWPTextMagnifierVerticalRanged : TSWPTextMagnifierRanged

+ (id)sharedRangedMagnifier;

- (void)remove;
- (double)currentOffset;
- (void)dealloc;
- (void)stopMagnifying:(BOOL)a0;
- (id)initWithDefaultFrame;
- (void)updateFrame;
- (void)beginMagnifyingTarget:(id)a0 magnificationPoint:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGPoint { double x0; double x1; })a2 animated:(BOOL)a3;
- (void)drawMagnifierClippedCanvasLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)maskImageName;
- (id)overlayImageName;
- (BOOL)shouldHideCanvasLayer;
- (id)underlayImageName;
- (void)zoomLeftAnimation;
- (void)zoomRightAnimation;

@end
