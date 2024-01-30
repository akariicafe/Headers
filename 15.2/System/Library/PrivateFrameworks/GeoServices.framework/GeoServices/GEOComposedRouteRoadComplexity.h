@interface GEOComposedRouteRoadComplexity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int index; float offset; } start; struct { unsigned int index; float offset; } end; } coordinateRange;
@property (readonly, nonatomic) int roadComplexityType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCoordinateRange:(struct GEOPolylineCoordinateRange { struct { unsigned int x0; float x1; } x0; struct { unsigned int x0; float x1; } x1; })a0 complexityType:(int)a1;

@end
