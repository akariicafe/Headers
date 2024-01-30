@class _UIBoundingPathBitmap;

@interface _UIComplexBoundingPath : _UIBoundingPath {
    double _scale;
    long long _orientation;
    _UIBoundingPathBitmap *_bitmap;
}

+ (BOOL)supportsSecureCoding;

- (void)setCoordinateSpace:(id)a0;
- (BOOL)isNonRectangular;
- (BOOL)validateForCoordinateSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largestInscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCenter:(struct CGPoint { double x0; double x1; })a1 aspectRatio:(double)a2;
- (void)encodeWithCoder:(id)a0;
- (id)boundingPathForCoordinateSpace:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)a0 againstPortraitEdge:(unsigned long long)a1 fromPortraitPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii { long long x0; long long x1; long long x2; long long x3; })a3;
- (id)initWithRectangularCoordinateSpace:(id)a0 orientation:(long long)a1 scale:(double)a2;
- (id)_imageRepresentation;
- (id)description;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)a0 inPortaitCorner:(unsigned long long)a1 fromPortraitPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii { long long x0; long long x1; long long x2; long long x3; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 portraitAspectRatio:(double)a1;
- (id)initWithCoordinateSpace:(id)a0 orientation:(long long)a1 scale:(double)a2 boundingPathBitmap:(id)a3;
- (void).cxx_destruct;
- (struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })a0 onPortraitEdges:(unsigned long long)a1 performCompleteTest:(BOOL)a2;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedInCorner:(unsigned long long)a0 ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSize:(struct CGSize { double x0; double x1; })a2 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a3 minimumPadding:(double)a4;
- (id)boundingPathForCoordinateSpace:(id)a0 withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a1 orientation:(long long)a2 scale:(double)a3;
- (struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })a0 onPortraitEdges:(unsigned long long)a1 performCompleteTest:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedAgainstEdge:(unsigned long long)a0 ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withSize:(double)a2 cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })a3 minimumPadding:(double)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byInsettingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onEdges:(unsigned long long)a2 withOptions:(unsigned long long)a3;
- (BOOL)_validateBitmap:(id)a0 withOrientation:(long long)a1 scale:(double)a2 forCoordinateSpace:(id)a3;

@end
