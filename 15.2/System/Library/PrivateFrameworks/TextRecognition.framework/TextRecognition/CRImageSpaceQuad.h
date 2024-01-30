@class NSString;

@interface CRImageSpaceQuad : NSObject <CRCodable, CRQuad>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topLeft;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } topRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomRight;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } midPoint;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;

- (id)initWithTopLeft:(struct CGPoint { double x0; double x1; })a0 topRight:(struct CGPoint { double x0; double x1; })a1 bottomRight:(struct CGPoint { double x0; double x1; })a2 bottomLeft:(struct CGPoint { double x0; double x1; })a3;
- (BOOL)point:(struct CGPoint { double x0; double x1; })a0 onSegmentWithP1:(struct CGPoint { double x0; double x1; })a1 segmentP2:(struct CGPoint { double x0; double x1; })a2;
- (id)normalizedQuadForImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)unionWithQuad:(id)a0 baselineAngle:(float)a1;
- (double)shortestDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)linesIntersectLine1P1:(struct CGPoint { double x0; double x1; })a0 line1P2:(struct CGPoint { double x0; double x1; })a1 line2P1:(struct CGPoint { double x0; double x1; })a2 line2P2:(struct CGPoint { double x0; double x1; })a3;
- (void)encodeWithCoder:(id)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)rotatedAroundPoint:(struct CGPoint { double x0; double x1; })a0 angle:(float)a1;
- (long long)orientationOfP1:(struct CGPoint { double x0; double x1; })a0 p2:(struct CGPoint { double x0; double x1; })a1 p3:(struct CGPoint { double x0; double x1; })a2;
- (id)crCodableDataRepresentation;
- (BOOL)isEqual:(id)a0;
- (float)angle;
- (id)initWithCRCodableDataRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)overlapsQuad:(id)a0;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 lineP1:(struct CGPoint { double x0; double x1; })a1 lineP2:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
