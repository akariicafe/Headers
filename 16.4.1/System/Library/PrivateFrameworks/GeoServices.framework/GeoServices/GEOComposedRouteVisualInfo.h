@class GEOPBTransitArtwork, NSArray, GEOFormattedString, GEOStyleAttributes;

@interface GEOComposedRouteVisualInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) GEOPBTransitArtwork *icon;
@property (readonly, nonatomic) NSArray *laneChangeInfos;
@property (readonly, nonatomic) struct GEOPolylineCoordinateRange { struct { unsigned int index; float offset; } start; struct { unsigned int index; float offset; } end; } routeCoordinateRange;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } startCoordinate;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } endCoordinate;

+ (id)_infosForRouteLineStyleInfos:(id)a0 pathIndex:(unsigned long long)a1 coordinates:(id)a2 updateable:(BOOL)a3;
+ (id)cameraInfosForGeoWaypointRoute:(id)a0 coordinates:(id)a1 updateable:(BOOL)a2;
+ (id)cameraInfosForRoute:(id)a0 etaRoute:(id)a1;
+ (id)visualInfosForGeoWaypointRoute:(id)a0 coordinates:(id)a1 updateable:(BOOL)a2;
+ (id)visualInfosForRoute:(id)a0 etaRoute:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithGeoRouteLineStyleInfo:(id)a0 pathIndex:(unsigned long long)a1 coordinates:(id)a2 distanceOffset:(double)a3;
- (id)initWithTitle:(id)a0 detail:(id)a1 routeCoordinate:(struct { unsigned int x0; float x1; })a2 locationCoordinate:(struct { double x0; double x1; double x2; })a3;

@end
