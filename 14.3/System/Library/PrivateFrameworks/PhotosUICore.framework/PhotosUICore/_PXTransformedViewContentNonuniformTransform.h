@class PXNonuniformTransform, UIView;

@interface _PXTransformedViewContentNonuniformTransform : PXNonuniformTransform

@property (readonly, nonatomic) UIView *transformedView;
@property (readonly, nonatomic) PXNonuniformTransform *transform;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineTransformForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inCoordinateSpace:(id)a1;
- (id)inverseTransform;
- (id)initWithTransformedView:(id)a0 transform:(id)a1;

@end
