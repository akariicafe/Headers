@class NSString, GEOComposedRouteEVChargingStationInfo;
@protocol GEOTransitArtworkDataSource;

@interface GEOComposedWaypointEVStop : GEOComposedWaypoint <NSSecureCoding> {
    NSString *_name;
    unsigned long long _muid;
    struct { double latitude; double longitude; double altitude; } _coordinate;
    id<GEOTransitArtworkDataSource> _artwork;
    BOOL _isServerProvidedWaypoint;
    GEOComposedRouteEVChargingStationInfo *_chargingInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)muid;
- (id)initWithCoder:(id)a0;
- (struct { double x0; double x1; double x2; })coordinate;
- (id)artwork;
- (void).cxx_destruct;
- (id)name;
- (id)chargingInfo;
- (id)initWithGeoWaypointInfo:(id)a0;
- (id)initWithGeoWaypointInfo:(id)a0 mapItem:(id)a1;
- (BOOL)isServerProvidedWaypoint;

@end
