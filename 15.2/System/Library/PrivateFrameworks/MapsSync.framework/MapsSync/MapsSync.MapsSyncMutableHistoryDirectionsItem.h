@class GEOStorageRouteRequestStorage;

@interface MapsSync.MapsSyncMutableHistoryDirectionsItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
