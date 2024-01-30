@class NSArray;

@interface _CLPolygonalRegion : CLRegion

@property (readonly, copy, nonatomic) NSArray *vertices;
@property int geoReferenceFrame;
@property (readonly, nonatomic) BOOL allowMonitoringWhileNearby;

+ (BOOL)supportsSecureCoding;

- (id)initWithVertices:(id)a0 identifier:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initNearbyAllowedWithVertices:(id)a0 identifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
