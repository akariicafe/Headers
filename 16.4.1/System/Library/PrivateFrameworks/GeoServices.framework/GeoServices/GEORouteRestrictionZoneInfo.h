@class NSArray;

@interface GEORouteRestrictionZoneInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *zoneIDs;
@property (readonly, nonatomic) int restrictionZoneImpact;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithGeoRoute:(id)a0;
- (id)initWithGeoWaypointRoute:(id)a0;

@end
