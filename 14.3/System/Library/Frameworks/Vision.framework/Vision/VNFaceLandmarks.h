@class NSData;

@interface VNFaceLandmarks : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding>

@property (class, readonly) unsigned long long landmarkPointSizeInBytes;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *pointsData;
@property struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x; float y; } origin; struct _Geometry2D_size2D_ { float height; float width; } size; } alignedBBox;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } userFacingBBox;
@property unsigned long long pointCount;
@property (readonly) float confidence;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void *)_createPointArray:(const int *)a0 count:(unsigned long long)a1;
- (BOOL)isUserFacingBBoxEquivalentToAlignedBBox;
- (id)initWithRequestRevision:(unsigned long long)a0 pointsData:(id)a1 pointCount:(unsigned long long)a2 userFacingBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; })a4 landmarkScore:(float)a5;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
