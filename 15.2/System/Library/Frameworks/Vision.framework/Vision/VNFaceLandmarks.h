@class NSData, VNRequestSpecifier;

@interface VNFaceLandmarks : NSObject <VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>

@property (class, readonly) unsigned long long landmarkPointSizeInBytes;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSData *pointsData;
@property (readonly) struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x; float y; } origin; struct _Geometry2D_size2D_ { float height; float width; } size; } alignedBBox;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } userFacingBBox;
@property (readonly) unsigned long long pointCount;
@property (readonly) float confidence;
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
- (void *)_createPointArray:(const int *)a0 count:(unsigned long long)a1;
- (BOOL)isUserFacingBBoxEquivalentToAlignedBBox;
- (id)initWithOriginatingRequestSpecifier:(id)a0 pointsData:(id)a1 pointCount:(unsigned long long)a2 userFacingBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; })a4 landmarkScore:(float)a5;

@end
