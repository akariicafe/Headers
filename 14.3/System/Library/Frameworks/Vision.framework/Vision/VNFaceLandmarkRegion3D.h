@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion

@property const void *points;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void /* unknown type, empty encoding */)pointAtIndex:(unsigned long long)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithRequestRevision:(unsigned long long)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 points:(void *)a2 pointCount:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
