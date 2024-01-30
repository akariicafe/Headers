@class GEOTransitRouteUpdate;

@interface MNRealtimeTransitUpdate : MNRealtimeUpdate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) GEOTransitRouteUpdate *transitUpdate;

- (void)encodeWithCoder:(id)a0;
- (id)routeID;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTransitRouteUpdate:(id)a0;

@end
