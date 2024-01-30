@class CALayer, NSArray;

@interface CKHighlightOverlayLayer : CALayer {
    NSArray *_rects;
}

@property (retain) struct CGColor { } *highlightColor;
@property (weak) CALayer *targetLayer;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithRects:(id)a0 targetLayer:(id)a1;
- (id)initWithRects:(id)a0;

@end
