@class NSUUID;

@interface VNDetectedObjectObservation : VNObservation

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (copy) NSUUID *identifier;

+ (BOOL)supportsSecureCoding;
+ (id)observationWithRequestRevision:(unsigned long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)observationWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)excludesBoundingBoxFromCoding;
- (void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0;

@end
