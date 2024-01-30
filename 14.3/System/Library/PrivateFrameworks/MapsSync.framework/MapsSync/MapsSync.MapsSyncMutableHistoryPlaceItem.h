@class NSUUID, GEOMapItemStorage;

@interface MapsSync.MapsSyncMutableHistoryPlaceItem : MapsSync.MapsSyncMutableHistoryItem {
    void /* unknown type, empty encoding */ _proxyHistory;
}

@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, copy) NSUUID *supersededSearchId;

- (id)initWithProxyObject:(id)a0;
- (void).cxx_destruct;

@end
