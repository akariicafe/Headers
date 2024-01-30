@interface VNFaceLandmarkRegion : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceBoundingBox;
@property unsigned long long pointCount;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
