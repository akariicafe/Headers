@class VNRequestSpecifier;

@interface VNFaceLandmarkRegion : NSObject <VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceBoundingBox;
@property (readonly) unsigned long long pointCount;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly, nonatomic) unsigned long long requestRevision;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithOriginatingRequestSpecifier:(id)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pointCount:(unsigned long long)a2;

@end
