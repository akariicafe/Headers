@class NSUUID, VNPixelBufferObservation;

@interface VNDetectedObjectObservation : VNObservation

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (copy) NSUUID *identifier;
@property (readonly, nonatomic) VNPixelBufferObservation *globalSegmentationMask;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (BOOL)boundingBoxIsCalculatedProperty;
+ (id)observationWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)observationWithRequestRevision:(unsigned long long)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;
- (id)initWithOriginatingRequestSpecifier:(id)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3;

@end
