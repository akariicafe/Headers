@interface AEScrubberSlider : IMCustomSlider

@property (nonatomic) double trackRectHorizontalInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
