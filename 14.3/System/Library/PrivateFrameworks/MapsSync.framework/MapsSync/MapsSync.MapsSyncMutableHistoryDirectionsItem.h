@class GEOStorageRouteRequestStorage;

@interface MapsSync.MapsSyncMutableHistoryDirectionsItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;

- (id)initWithProxyObject:(id)a0;
- (void).cxx_destruct;

@end
