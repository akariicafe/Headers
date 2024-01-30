@interface AKRedactionRectAnnotation : AKRectangularShapeAnnotation

@property BOOL isOpaque;
@property BOOL isHighlighted;

+ (BOOL)supportsSecureCoding;

- (id)displayName;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldBurnIn;
- (id)keysForValuesToObserveForRedrawing;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;

@end
