@class RTCoordinate, NSArray;

@interface RTPolygon : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) RTCoordinate *centroid;
@property (readonly, nonatomic) NSArray *vertices;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCentroid:(id)a0 vertices:(id)a1;
- (id)initWithVertices:(id)a0;
- (BOOL)isEqualToPolygon:(id)a0;

@end
