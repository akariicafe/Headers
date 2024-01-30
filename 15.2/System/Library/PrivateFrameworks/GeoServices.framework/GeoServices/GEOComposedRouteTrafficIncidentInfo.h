@class GEORouteIncident;

@interface GEOComposedRouteTrafficIncidentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) GEORouteIncident *incident;
@property (nonatomic) double offsetMeters;
@property (nonatomic) struct { unsigned int index; float offset; } routeCoordinate;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
