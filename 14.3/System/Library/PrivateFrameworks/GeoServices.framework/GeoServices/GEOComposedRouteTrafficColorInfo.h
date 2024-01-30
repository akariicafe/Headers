@interface GEOComposedRouteTrafficColorInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long color;
@property (nonatomic) double offsetMeters;
@property (nonatomic) struct { unsigned int index; float offset; } routeCoordinate;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_stringForColor:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
