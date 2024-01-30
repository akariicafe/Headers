@interface CIRectangleFeature : CIFeature

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) struct CGPoint { double x; double y; } topLeft;
@property (readonly) struct CGPoint { double x; double y; } topRight;
@property (readonly) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly) struct CGPoint { double x; double y; } bottomRight;

- (id)type;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 topLeft:(struct CGPoint { double x0; double x1; })a1 topRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3 bottomRight:(struct CGPoint { double x0; double x1; })a4;

@end
