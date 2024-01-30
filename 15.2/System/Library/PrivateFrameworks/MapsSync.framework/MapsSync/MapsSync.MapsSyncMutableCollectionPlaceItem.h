@class NSString, GEOLatLng, GEOMapItemStorage;

@interface MapsSync.MapsSyncMutableCollectionPlaceItem : MapsSync.MapsSyncMutableCollectionItem {
    void /* unknown type, empty encoding */ _proxyCollectionPlaceItem;
}

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, retain) GEOLatLng *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic) short origin;

- (void).cxx_destruct;
- (id)initWithProxyObject:(id)a0;

@end
