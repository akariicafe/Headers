@protocol UICoordinateSpace;

@interface _UIBoundingPath : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) BOOL isNonRectangular;

- (id)debugQuickLookObject;
- (BOOL)validateForCoordinateSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largestInscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCenter:(struct CGPoint { double x0; double x1; })a1 aspectRatio:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)boundingPathForCoordinateSpace:(id)a0;
- (id)_imageRepresentation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inscribedRectInBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byInsettingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onEdges:(unsigned long long)a2;
- (id)initWithCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedInCorner:(unsigned long long)a0 ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSize:(struct CGSize { double x0; double x1; })a2 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a3 minimumPadding:(double)a4;
- (id)boundingPathForCoordinateSpace:(id)a0 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a1 orientation:(long long)a2 scale:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedAgainstEdge:(unsigned long long)a0 ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSize:(double)a2 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a3 minimumPadding:(double)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byInsettingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onEdges:(unsigned long long)a2 withOptions:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedInCorner:(unsigned long long)a0 ofBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSize:(struct CGSize { double x0; double x1; })a2 minimumPadding:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedAgainstEdge:(unsigned long long)a0 ofBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSize:(double)a2 minimumPadding:(double)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largestInscribedRectInBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCenter:(struct CGPoint { double x0; double x1; })a1 aspectRatio:(double)a2;

@end
