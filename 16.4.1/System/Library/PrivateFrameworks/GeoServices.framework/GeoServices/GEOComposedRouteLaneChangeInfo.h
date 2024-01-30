@interface GEOComposedRouteLaneChangeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long laneCount;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int index; float offset; } start; struct { unsigned int index; float offset; } end; } routeCoordinateRange;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } startCoordinate;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } endCoordinate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithGeoLaneChangeInfo:(id)a0 coordinates:(id)a1;

@end
