@interface VNRectangleObservation : VNDetectedObjectObservation

@property (readonly, nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomRight;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)observationWithRequestRevision:(unsigned long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)boundingBoxIsCalculatedProperty;
+ (id)rectangleObservationWithRequestRevision:(unsigned long long)a0 topLeft:(struct CGPoint { double x0; double x1; })a1 bottomLeft:(struct CGPoint { double x0; double x1; })a2 bottomRight:(struct CGPoint { double x0; double x1; })a3 topRight:(struct CGPoint { double x0; double x1; })a4;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugQuickLookObject;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 bottomLeft:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 topRight:(struct CGPoint { double x0; double x1; })a3;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)getTopLeftPoint:(struct CGPoint { double x0; double x1; } *)a0 topRightPoint:(struct CGPoint { double x0; double x1; } *)a1 bottomRightPoint:(struct CGPoint { double x0; double x1; } *)a2 bottomLeftPoint:(struct CGPoint { double x0; double x1; } *)a3 inTopLeftOrigin:(BOOL)a4 orientation:(unsigned int)a5;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 topLeft:(struct CGPoint { double x0; double x1; })a1 bottomLeft:(struct CGPoint { double x0; double x1; })a2 bottomRight:(struct CGPoint { double x0; double x1; })a3 topRight:(struct CGPoint { double x0; double x1; })a4;
- (id)initWithOriginatingRequestSpecifier:(id)a0 topLeft:(struct CGPoint { double x0; double x1; })a1 bottomLeft:(struct CGPoint { double x0; double x1; })a2 bottomRight:(struct CGPoint { double x0; double x1; })a3 topRight:(struct CGPoint { double x0; double x1; })a4 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5;
- (id)initWithRequestRevision:(unsigned long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithRequestRevision:(unsigned long long)a0 topLeft:(struct CGPoint { double x0; double x1; })a1 bottomLeft:(struct CGPoint { double x0; double x1; })a2 bottomRight:(struct CGPoint { double x0; double x1; })a3 topRight:(struct CGPoint { double x0; double x1; })a4;
- (void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3;
- (id)vn_cloneObject;

@end
