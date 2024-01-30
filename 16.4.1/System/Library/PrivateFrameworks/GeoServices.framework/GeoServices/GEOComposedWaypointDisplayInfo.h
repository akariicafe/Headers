@class GEOPBTransitArtwork, NSString, GEOARInfo, GEOEVChargingInfo, GEOStyleAttributes;

@interface GEOComposedWaypointDisplayInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEOARInfo *arInfo;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) GEOEVChargingInfo *evChargingInfo;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct { double latitude; double longitude; } position;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_initPositionWithGeoWaypointInfo:(id)a0 waypoint:(id)a1;
- (id)initWithGeoWaypointInfo:(id)a0 waypoint:(id)a1;

@end
