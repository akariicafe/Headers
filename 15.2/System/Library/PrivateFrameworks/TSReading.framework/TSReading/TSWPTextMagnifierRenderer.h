@class CALayer;
@protocol TSWPTextMagnifierRendererDelegate;

@interface TSWPTextMagnifierRenderer : UIView {
    CALayer *_underlayLayer;
    CALayer *_canvasLayer;
    CALayer *_overlayLayer;
}

@property (nonatomic) id<TSWPTextMagnifierRendererDelegate> delegate;
@property (nonatomic) int autoscrollDirections;

- (void)layoutSubviews;
- (void)tearDown;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)canvasNeedsDisplay;
- (id)p_createChildLayer;

@end
