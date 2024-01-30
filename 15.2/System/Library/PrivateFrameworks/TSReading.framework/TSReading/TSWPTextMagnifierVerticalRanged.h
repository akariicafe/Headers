@interface TSWPTextMagnifierVerticalRanged : TSWPTextMagnifierRanged

+ (id)sharedRangedMagnifier;

- (void)remove;
- (void)dealloc;
- (void)stopMagnifying:(BOOL)a0;
- (double)currentOffset;
- (void)updateFrame;
- (id)initWithDefaultFrame;
- (void)beginMagnifyingTarget:(id)a0 magnificationPoint:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGPoint { double x0; double x1; })a2 animated:(BOOL)a3;
- (void)drawMagnifierClippedCanvasLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)shouldHideCanvasLayer;
- (id)underlayImageName;
- (id)overlayImageName;
- (id)maskImageName;
- (void)zoomLeftAnimation;
- (void)zoomRightAnimation;

@end
