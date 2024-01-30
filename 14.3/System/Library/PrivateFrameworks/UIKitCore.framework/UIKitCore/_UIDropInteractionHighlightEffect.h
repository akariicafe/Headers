@class UIColor, NSString, CAShapeLayer;

@interface _UIDropInteractionHighlightEffect : NSObject <UIDropInteractionEffect> {
    long long _visualState;
}

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) double highlightWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double highlightInset;
@property (copy, nonatomic) UIColor *highlightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)interaction:(id)a0 didChangeWithContext:(id)a1;
- (void)removeShapeLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })highlightRectInView:(id)a0 forDragInteraction:(id)a1 withContext:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingRectInView:(id)a0 forView:(id)a1;
- (id)updateShapeLayerForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;

@end
