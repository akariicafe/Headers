@interface _UIRectangularBoundingPath : _UIBoundingPath

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;

+ (BOOL)supportsSecureCoding;

- (void)setCoordinateSpace:(id)a0;
- (BOOL)isNonRectangular;
- (BOOL)_validateBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCoordinateSpace:(id)a1;
- (BOOL)validateForCoordinateSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largestInscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCenter:(struct CGPoint { double x0; double x1; })a1 aspectRatio:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)boundingPathForCoordinateSpace:(id)a0;
- (id)_imageRepresentation;
- (id)description;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedInCorner:(unsigned long long)a0 ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSize:(struct CGSize { double x0; double x1; })a2 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a3 minimumPadding:(double)a4;
- (id)boundingPathForCoordinateSpace:(id)a0 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a1 orientation:(long long)a2 scale:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedAgainstEdge:(unsigned long long)a0 ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSize:(double)a2 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a3 minimumPadding:(double)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byInsettingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onEdges:(unsigned long long)a2 withOptions:(unsigned long long)a3;
- (id)initWithCoordinateSpace:(id)a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
