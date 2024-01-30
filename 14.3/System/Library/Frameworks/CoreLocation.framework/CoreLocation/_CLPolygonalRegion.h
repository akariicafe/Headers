@class NSArray;

@interface _CLPolygonalRegion : CLRegion

@property (readonly, copy, nonatomic) NSArray *vertices;

+ (BOOL)supportsSecureCoding;

- (id)initNearbyAllowedWithVertices:(id)a0 identifier:(id)a1;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithVertices:(id)a0 identifier:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
