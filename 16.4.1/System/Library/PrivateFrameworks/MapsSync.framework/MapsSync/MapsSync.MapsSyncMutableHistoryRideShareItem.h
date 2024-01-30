@class GEOComposedWaypoint;

@interface MapsSync.MapsSyncMutableHistoryRideShareItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic, retain) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, retain) GEOComposedWaypoint *endWaypoint;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
