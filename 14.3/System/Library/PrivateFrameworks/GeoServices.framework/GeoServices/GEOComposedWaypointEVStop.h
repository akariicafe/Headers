@class NSString, GEOStyleAttributes, GEOComposedRouteEVChargingStationInfo;
@protocol GEOTransitArtworkDataSource;

@interface GEOComposedWaypointEVStop : GEOComposedWaypoint <NSSecureCoding> {
    NSString *_name;
    unsigned long long _muid;
    struct { double latitude; double longitude; double altitude; } _coordinate;
    id<GEOTransitArtworkDataSource> _artwork;
    GEOStyleAttributes *_styleAttributes;
    GEOComposedRouteEVChargingStationInfo *_chargingInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)artwork;
- (id)styleAttributes;
- (unsigned long long)muid;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithGeoWaypointInfo:(id)a0;
- (struct { double x0; double x1; double x2; })coordinate;
- (id)chargingInfo;
- (id)name;
- (id)initWithGeoStep:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
