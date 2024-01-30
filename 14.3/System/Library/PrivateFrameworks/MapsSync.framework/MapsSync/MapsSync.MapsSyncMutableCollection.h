@class NSString, NSData, NSSet;

@interface MapsSync.MapsSyncMutableCollection : MapsSync.MapsSyncMutableBaseItem {
    void /* unknown type, empty encoding */ _proxyCollection;
}

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSSet *places;

- (id)initWithProxyObject:(id)a0;
- (void)addItemWithCollectionItem:(id)a0;
- (void)removePlaceWithCollectionItem:(id)a0;
- (void).cxx_destruct;

@end
