@class GEOComposedWaypoint, NSDate, GEOMapServiceTraits, GEORouteAttributes, GEORouteHypothesis, GEORouteHypothesisMonitor;

@interface GEORouteHypothesisValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isStaleToRefresh;
@property (readonly, nonatomic) BOOL isStaleToPurgeFromDisk;
@property (readonly, nonatomic) GEORouteHypothesisMonitor *monitor;
@property (retain, nonatomic) GEORouteHypothesis *currentHypothesis;
@property (nonatomic) BOOL prediction;
@property (readonly, nonatomic) int transportType;
@property (copy, nonatomic) GEORouteAttributes *routeAttributes;
@property (nonatomic) double updatedTimeStamp;
@property (readonly, nonatomic) GEOComposedWaypoint *origin;
@property (readonly, nonatomic) GEOComposedWaypoint *destination;
@property (readonly, nonatomic) NSDate *arrivalDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) double valueRefreshTimeStamp;
@property (nonatomic) long long rowId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)description;
- (void).cxx_destruct;
- (BOOL)aggresiveArrivalIsAfterExpiration;
- (BOOL)canBePersistedToDisk;
- (id)initWithSource:(id)a0 toDestination:(id)a1 arrivalDate:(id)a2 expirationDate:(id)a3 traceName:(id)a4 traits:(id)a5 routeAttributes:(id)a6 clientInfo:(id)a7;

@end
