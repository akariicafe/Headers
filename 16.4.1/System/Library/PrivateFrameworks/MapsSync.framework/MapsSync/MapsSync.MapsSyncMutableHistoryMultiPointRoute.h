@class GEOStorageRouteRequestStorage, NSString, NSData, NSNumber;

@interface MapsSync.MapsSyncMutableHistoryMultiPointRoute : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic) short routeProgressWaypointIndex;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;
@property (nonatomic, retain) NSNumber *requiredCharge;
@property (nonatomic) short type;
@property (nonatomic, copy) NSString *vehicleIdentifier;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
