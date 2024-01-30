@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int routeIncidentType;
@property (readonly, nonatomic) int routeIncidentSignificance;

- (id)initWithIncidentType:(int)a0 incidentSignificance:(int)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
