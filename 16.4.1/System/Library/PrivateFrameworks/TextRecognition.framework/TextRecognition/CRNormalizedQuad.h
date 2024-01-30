@class NSString, CRImageSpaceQuad;

@interface CRNormalizedQuad : NSObject <CRCodable, CRQuad>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CRImageSpaceQuad *denormalizedQuad;
@property (readonly) struct CGSize { double width; double height; } normalizationSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topRight;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bottomRight;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } bottomLeft;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } midPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNormalizedTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3 size:(struct CGSize { double x0; double x1; })a4;
- (BOOL)containsDenormalizedPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsNormalizedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)crCodableDataRepresentation;
- (id)initWithCRCodableDataRepresentation:(id)a0;
- (id)initWithDenormalizedQuad:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)overlapsDenormalizedQuad:(id)a0;
- (BOOL)overlapsNormalizedQuad:(id)a0;
- (id)rotatedAroundDenormalizedPoint:(struct CGPoint { double x0; double x1; })a0 angle:(float)a1;
- (id)rotatedAroundNormalizedPoint:(struct CGPoint { double x0; double x1; })a0 angle:(float)a1;
- (double)shortestDistanceFromDenormalizedPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)shortestDistanceFromNormalizedPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)unionWithNormalizedQuad:(id)a0 baselineAngle:(float)a1;

@end
