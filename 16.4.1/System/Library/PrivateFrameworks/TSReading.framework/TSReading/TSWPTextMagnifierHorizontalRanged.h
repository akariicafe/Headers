@interface TSWPTextMagnifierHorizontalRanged : TSWPTextMagnifierRanged

@property (nonatomic) BOOL shouldIgnoreTextInputEditor;

+ (id)sharedRangedMagnifier;

- (void)remove;
- (double)currentOffset;
- (void)dealloc;
- (void)zoomUpAnimation;
- (void)stopMagnifying:(BOOL)a0;
- (void)zoomDownAnimation;
- (id)initWithDefaultFrame;
- (void)updateFrame;
- (void)beginMagnifyingTarget:(id)a0 magnificationPoint:(struct CGPoint { double x0; double x1; })a1 offset:(struct CGPoint { double x0; double x1; })a2 animated:(BOOL)a3;
- (void)drawMagnifierClippedCanvasLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)maskImageName;
- (id)overlayImageName;
- (BOOL)shouldHideCanvasLayer;
- (id)underlayImageName;

@end
